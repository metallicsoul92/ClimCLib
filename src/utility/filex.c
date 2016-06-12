#include "utility/filex.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


Clim_logMessage newLogMessage(logLevel l, char *message){
  Clim_logMessage cm;
  cm.level = l;
  cm.message = message;

  return cm;
}

void writeToLogFile(const char* filepath,Clim_logMessage message){
  char *fullData = (char*)malloc(sizeof(message)+sizeof(logString(message.level)));
  fullData = logString(message.level);
  strcat(fullData,message.message);
  writeToFile(filepath,fullData);
}

 char * logString(logLevel l){
  switch(l){
    case CLIM_LOG_LOW:
    return "CLIM_LOG_LOW: ";
    break;
    case CLIM_LOG_WARNING:
    return "CLIM_LOG_WARNING: ";
    break;
    case CLIM_LOG_ERROR:
    return "CLIM_LOG_ERROR: ";
    break;
    case CLIM_LOG_VERBOSE:
    return "CLIM_LOG_VERBOSE: ";
    break;
    default:
    return "Unknown Log Level: ";
  }
}


const char * readFile(const char* filepath){
//open file
   FILE* infile = fopen(filepath,"r");
   fseek(infile,0,SEEK_END);
   //determine length;
   unsigned long length = ftell(infile);
   char *data = (char*)malloc(length+1);
   memset(data,0,length+1);
   fseek(infile,0,SEEK_SET);
   fread(data,1,length,infile);
   fclose(infile);
   const char *result = data;
   free(data);
   return result;
}


void writeToFile(const char * filepath,char *data){

  FILE * outFile = fopen(filepath,"w+");
  unsigned long length = strlen(data);
  for(unsigned long i=0;i < length;i++){
    if(fprintf(outFile,"%s",data) <0){
    }else
      assert(fprintf(outFile,"%s",data) > 0);
      }

    }
