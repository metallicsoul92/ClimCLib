#ifndef VIRTUAL_FILE_SYSTEM
#define VIRTUAL_FILE_SYSTEM

#if __linux__
  #include "vfs_linux.h"
const static char* root = "//"; //representing "/"
#else
  #error Platform Not Supported or Undetected
#endif //platform wrappers



#endif //Virtual file system
