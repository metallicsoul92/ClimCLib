#include "../../Include/hashmap.h"
#include <stdlib.h>
_hashElementPtr newElement(int key, void **data){
  _hashElementPtr handle = (_hashElementPtr)malloc(sizeof(_hashElementPtr));
  handle->key = key;
  handle->data = data;

  return handle;
}


Clim_HMap *newHashMap(int tSize, size_t elemSize){
  Clim_HMap *newMap = (Clim_HMap*)malloc(sizeof(Clim_HMap*));
  newMap->tableSize = tSize;
  newMap->elemSize = elemSize;
  newMap->current = 0;
  newMap->elements = (_hashElementPtr)malloc(sizeof(_hashElement)*tSize);

  return newMap;

}

void addElement(Clim_HMap *map,_hashElement element){
  map->elements[map->current] = element;
  map->current++;
}

void removeElement(Clim_HMap *map, _hashElement element){
  for(int i = 0;i <map->current;i++){
    if(map->elements[i].key == element.key){
      for(int j = i; j<map->current;j++){
        if(map->elements[j+1].data == NULL){
          break;
        }
        map->elements[j] = map->elements[j+1];

      }
      map->current--;
    }
  }
}
_hashElement HMElementatI(Clim_HMap *map, int i){
  for(int i = 0;i < map->current; i++){
    if(map->elements[i].key == i){
      return map->elements[i];
    }

    }
    _hashElement temp;
    temp.key = -1;
    temp.data = NULL;

    return temp;
  }


void freeMap(Clim_HMap *map){
  free(map->elements);
  map->tableSize = 0;
  map->elemSize = 0;
  map->current = 0;

  free(map);
}
