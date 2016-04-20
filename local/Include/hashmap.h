#ifndef HASHMAP_H_
#define HASHMAP_H_


#include <stddef.h>


struct _hashElement{
  int key;
  void *data;
};

typedef struct _hashElement *_hashElementPtr;
typedef struct _hashElement _hashElement;

_hashElementPtr newElement(int key, void **data);


struct _hashMap {
    int tableSize;
    size_t elemSize;
    int current;
    _hashElementPtr elements;
};

typedef struct _hashMap Clim_HMap;


Clim_HMap *newHashMap(int tSize, size_t elemSize);

void addElement(Clim_HMap *map,_hashElement element);
void removeElement(Clim_HMap *map, _hashElement element);
_hashElement HMElementatI(Clim_HMap *map, int i);
void freeMap(Clim_HMap *map);


#endif //hashmap.h
