#include "utility/filex.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

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
