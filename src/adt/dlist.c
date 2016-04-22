#include "adt/dlist.h"
#include <stdlib.h>
/* The following functions are used for allocating memory for nodes */
Clim_dgNode *mallocDGNode( Clim_dgNode *node){
	node = (Clim_dgNode*)malloc(sizeof(Clim_dgNode));
	return node;
	}
Clim_dfNode *mallocDFNode( Clim_dfNode *node){
	node = (Clim_dfNode*)malloc(sizeof(Clim_dfNode));
	return node;
	}
Clim_dcNode *mallocDCNode( Clim_dcNode *node){
	node = (Clim_dcNode*)malloc(sizeof(Clim_dcNode));
	return node;
	}
Clim_diNode *mallocDINode( Clim_diNode *node){
	node = (Clim_diNode*)malloc(sizeof(Clim_diNode));
	return node;
	}

/* The following functions are used for searching items in the lists */
Clim_dgNode *dgsearch( Clim_dgNode *node, void *data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return dgsearch(node->next, data);
}
Clim_dfNode *dfsearch( Clim_dfNode *node, float data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return dfsearch(node->next, data);
}
Clim_dcNode *dcsearch( Clim_dcNode *node, char data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return dcsearch(node->next, data);
}
Clim_diNode *disearch( Clim_diNode *node, int data){
	if (!node) {
		return 0;
	}
	if (data == node->headData) {
		return node;
	}
	return disearch(node->next, data);
}
/* The following functions are used for inserting items in the lists lists */
void dginsert( Clim_dgNode *node,int index, void *data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_dgNode *temp = (Clim_dgNode*)malloc(sizeof(Clim_dgNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
	temp->prev = node;
}
void dfinsert( Clim_dfNode *node,int index, float data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_dfNode *temp = (Clim_dfNode*)malloc(sizeof(Clim_dfNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
	temp->prev = node;
}
void dcinsert( Clim_dcNode *node,int index, char data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_dcNode *temp = (Clim_dcNode*)malloc(sizeof(Clim_dcNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
	temp->prev = node;
}
void diinsert( Clim_diNode *node,int index, int data){
	int i = 0;
	while(i !=index-1){
	node = node->next;
	index++;
	}
	Clim_diNode *temp = (Clim_diNode*)malloc(sizeof(Clim_diNode));
	temp->headData = data;
	temp->next = node->next;
	node->next = temp;
	temp->prev = node;
}
/* The following functions are used for removing items in the lists */
void dgremove( Clim_dgNode *node, void *data){
    Clim_dgNode *last, *current;
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
void dfremove( Clim_dfNode *node, float data){
    Clim_dfNode *last, *current;
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
void dcremove( Clim_dcNode *node, char data){
    Clim_dcNode *last, *current;
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
void diremove( Clim_diNode *node, int data){
    Clim_diNode *last, *current;
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
/* The following functions are used to add items to the end of the list */
void dgadd( Clim_dgNode *node, void *data){
	Clim_dgNode *temp = (Clim_dgNode*)malloc(sizeof(Clim_dgNode));
	temp->headData = data;
	while(node->next != 0){
	node = node->next;
	}
	node->next = temp;
	temp->prev = node;
}
void dfadd( Clim_dfNode *node, float data){
	Clim_dfNode *temp = (Clim_dfNode*)malloc(sizeof(Clim_dfNode));
	temp->headData = data;
	while(node->next != 0){
	node = node->next;
	}
	node->next = temp;
	temp->prev = node;
}
void dcadd( Clim_dcNode *node, char data){
	Clim_dcNode *temp = (Clim_dcNode*)malloc(sizeof(Clim_dcNode));
	temp->headData = data;
	while(node->next != 0){
	node = node->next;
	}
	node->next = temp;
	temp->prev = node;
}
void diadd( Clim_diNode *node, int data){
	Clim_diNode *temp = (Clim_diNode*)malloc(sizeof(Clim_diNode));
	temp->headData = data;
	while(node->next != 0){
	node = node->next;
	}
	node->next = temp;
	temp->prev = node;
}
