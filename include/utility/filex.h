#ifndef FILEX_H_
#define FILEX_H_



/* Logging Structures/Enums/Functions */
typedef enum {CLIM_LOG_LOW =0, CLIM_LOG_WARNING=1,CLIM_LOG_ERROR=2,CLIM_LOG_VERBOSE=4} logLevel;

struct _logMessage{
  logLevel level;
  char *message;
};

typedef struct _logMessage Clim_logMessage;

Clim_logMessage newLogMessage(logLevel l, char *message);

void writeToLogFile(const char* filepath,Clim_logMessage message);

char * logString(logLevel l);

/*File Read/Write functions */
const char * readFile(const char* filepath);
void writeToFile(const char*filepath,char *data);


#endif //FILEX_H_
