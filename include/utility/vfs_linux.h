#ifndef VIRTUAL_FILE_SYSTEM_LINUX
#define VIRTUAL_FILE_SYSTEM_LINUX

#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>

int createDirectory(const char *filesystem, mode_t mode);
DIR *openDirectory(const char *name);
int removeDirectory(const char *pathname);
int closeDirectoy(DIR *dirp);
char *getCWD(char *buf, size_t size);

#endif //Virtual File System for linux;
