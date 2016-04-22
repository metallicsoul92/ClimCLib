#include "adt/slist.h"
#include <stdlib.h>
/* The following functions are used for allocating memory for nodes */
	Clim_sgNode *mallocSGNode( Clim_sgNode *node){
	 node = (Clim_sgNode*)malloc(sizeof(Clim_sgNode));
	return node;
	}

	Clim_sfNode *mallocSFNode( Clim_sfNode *node){
	node = (Clim_sfNode*)malloc(sizeof(Clim_sfNode));
	return node;
	}

	Clim_scNode *mallocSCNode( Clim_scNode *node){
	node = (Clim_scNode*)malloc(sizeof(Clim_scNode));
	return node;
	}

	Clim_siNode *mallocSINode( Clim_siNode *node){
	node = (Clim_siNode*)malloc(sizeof(Clim_siNode));
	return node;
	}
/* The following functions are used for allocating memory for lists */
Clim_sgList *mallocSGList(Clim_sgList *list, int amount){
    list = (Clim_sgList*)malloc(sizeof(Clim_sgList)*amount);
    list->count = amount;
    return list;
}
Clim_sgList *mallocESGList(Clim_sgList *list){
     list = (Clim_sgList*)malloc(sizeof(Clim_sgList));
    return list;
}
Clim_scList *mallocSCList(Clim_scList *list,int amount){
    list= (Clim_scList*)malloc(sizeof(Clim_scList)*amount);
    list->count = amount;
    return list;
}
Clim_scList *mallocESCList(Clim_scList *list){
    list = (Clim_scList*)malloc(sizeof(Clim_scList));
    return list;
}
Clim_siList *mallocSGIList(Clim_siList *list,int amount){
    list = (Clim_siList*)malloc(sizeof(Clim_siList)*amount);
    list->count = amount;
    return list;
}
Clim_siList *mallocESIList(Clim_siList *list){
    list = (Clim_siList*)malloc(sizeof(Clim_siList));
    return list;
}
Clim_sfList *mallocSFList(Clim_sfList *list,int amount){
    list = (Clim_sfList*)malloc(sizeof(Clim_sfList)*amount);
    list->count = amount;
    return list;
}
Clim_sfList *mallocESFList(Clim_sfList *list){
    list = (Clim_sfList*)malloc(sizeof(Clim_sfList));
    return list;
}
/* The following functions are used for searching items the  lists */
Clim_sgNode *gsearch( Clim_sgNode *node, void *data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return gsearch(node->next, data);
}

Clim_sfNode *fsearch( Clim_sfNode *node, float data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return fsearch(node->next, data);
}

Clim_scNode *csearch( Clim_scNode *node, char data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return csearch(node->next, data);
}

Clim_siNode *isearch( Clim_siNode *node, int data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return isearch(node->next, data);
}

/* The following functions are used for inserting items in the lists lists */
void ginsert( Clim_sgNode *node,int index, void *data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_sgNode *temp = (Clim_sgNode *)malloc(sizeof(Clim_sgNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
}
void finsert( Clim_sfNode *node,int index, float data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_sfNode *temp = (Clim_sfNode *)malloc(sizeof(Clim_sfNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
}
void cinsert( Clim_scNode *node,int index, char data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_scNode *temp = (Clim_scNode *)malloc(sizeof(Clim_scNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
}
void iinsert( Clim_siNode *node,int index, int data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_siNode *temp = (Clim_siNode *)malloc(sizeof(Clim_siNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
}
/* The following functions are used for removing items in the lists */
void gremove( Clim_sgNode *node, void *data){
    Clim_sgNode *last, *current;
    current = node;
    while(current!=0)
    {
        if(current->headData == data){
            if(current ==node){
            node= current->next;
            free(current);
            return;
        }else
        {
        last->next = current->next;
        free(current);
        return;
        }
    }
    else
        {
            last=current;
            current=current->next;
        }
    }
}
void fremove( Clim_sfNode *node, float data){
    Clim_sfNode *last, *current;
    current = node;
    while(current!=0)
    {
        if(current->headData == data){
            if(current ==node){
            node= current->next;
            free(current);
            return;
        }else
        {
        last->next = current->next;
        free(current);
        return;
        }
    }
    else
        {
            last=current;
            current=current->next;
        }
    }
}
void cremove( Clim_scNode *node, char data){
    Clim_scNode *last, *current;
    current = node;
    while(current!=0)
    {
        if(current->headData == data){
            if(current ==node){
            node= current->next;
            free(current);
            return;
        }else
        {
        last->next = current->next;
        free(current);
        return;
        }
    }
    else
        {
            last=current;
            current=current->next;
        }
    }
}
void iremove( Clim_siNode *node, int data){
    Clim_siNode *last, *current;
    current = node;
    while(current!=0)
    {
        if(current->headData == data){
            if(current ==node){
            node= current->next;
            free(current);
            return;
        }else
        {
        last->next = current->next;
        free(current);
        return;
        }
    }else
        {
            last=current;
            current=current->next;
        }
    }
}


Clim_sgNode *end(Clim_sgNode *head){
    Clim_sgNode *temp = (Clim_sgNode*)malloc(sizeof(Clim_sgNode));
    temp = head;
    while(temp->next != 0){
    temp = temp->next;
    }
    return temp;

}

/* The following functions are used to add items to the end of the list */
void gadd( Clim_sgNode *node, void *data){
   Clim_sgNode *temp = (Clim_sgNode*)malloc(sizeof(Clim_sgNode));
   temp->headData = data;
   if(node->next ==0){
   node->next =temp;
   }else{
   node = node->next;
   }
}
void add( Clim_sfNode *node, float data){
   Clim_sfNode *temp = (Clim_sfNode*)malloc(sizeof(Clim_sfNode));
   temp->headData = data;
   if(node->next ==0){
   node->next =temp;
   }else{
   node = node->next;
   }
}
void cadd( Clim_scNode *node, char data){
   Clim_scNode *temp = (Clim_scNode*)malloc(sizeof(Clim_scNode));
   temp->headData = data;
   if(node->next ==0){
   node->next =temp;
   }else{
   node = node->next;
   }
}
void iadd( Clim_siNode *node, int data){
   Clim_siNode *temp = (Clim_siNode*)malloc(sizeof(Clim_siNode));
   temp->headData = data;
   if(node->next ==0){
   node->next =temp;
   }else{
   node = node->next;
   }
}
