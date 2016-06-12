#include "utility/vfs_linux.h"

int createDirectory(const char *filesystem, mode_t mode){
  return mkdir(filesystem,mode);
}
DIR *openDirectory(const char *name){
  return opendir(name);
}
int removeDirectory(const char *pathname){
  return rmdir(pathname);
}
int closeDirectoy(DIR *dirp){
  return closedir(dirp);
}
char *getCWD(char *buf, size_t size){
  return getcwd(buf,size);
}
