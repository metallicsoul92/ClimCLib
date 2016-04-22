#ifndef DLIST_H_
#define DLIST_H_


/* The series of nodes regarding di,dc,df,dg are doubly linked lists that point to the next structure. And the previous structure. If the previous structure is equal to 0, then that node is the Root node.  I use i for integer sets, c for character sets, f for float sets and g for generic (void *) sets. */


/*Structure Implementation */
struct _diNode{
  int headData;
  struct _diNode *prev;
  struct _diNode *next;
};

struct _dcNode{
  char headData;
  struct _dcNode *prev;
  struct _dcNode *next;
};

struct _dfNode{
  float headData;
  struct _dfNode *prev;
  struct _dfNode *next;
};

struct _dgNode{
  void *headData;
  struct _dgNode *prev;
  struct _dgNode *next;
};

/* Type Definitions */
typedef struct _dgNode Clim_dgNode;
typedef struct _dfNode Clim_dfNode;
typedef struct _dcNode Clim_dcNode;
typedef struct _diNode Clim_diNode;


/* The following functions are used for allocating memory for nodes */
Clim_dgNode *mallocDGNode( Clim_dgNode *node);
Clim_dfNode *mallocDFNode( Clim_dfNode *node);
Clim_dcNode *mallocDCNode( Clim_dcNode *node);
Clim_diNode *mallocDINode( Clim_diNode *node);

/* The following functions are used for searching items in the  lists */
Clim_dgNode *dgsearch( Clim_dgNode *node, void *data);
Clim_dfNode *dfsearch( Clim_dfNode *node, float data);
Clim_dcNode *dcsearch( Clim_dcNode *node, char data);
Clim_diNode *disearch( Clim_diNode *node, int data);
/* The following functions are used for inserting items in the lists lists */
void dginsert( Clim_dgNode *node,int index, void *data);
void dfinsert( Clim_dfNode *node,int index, float data);
void dcinsert( Clim_dcNode *node,int index, char data);
void diinsert( Clim_diNode *node,int index, int data);
/* The following functions are used for removing items in the lists */
void dgremove( Clim_dgNode *node, void *data);
void dfremove( Clim_dfNode *node, float data);
void dcremove( Clim_dcNode *node, char data);
void diremove( Clim_diNode *node, int data);
/* The following functions are used to add items to the end of the list */
void dgadd( Clim_dgNode *node, void *data);
void dfadd( Clim_dfNode *node, float data);
void dcadd( Clim_dcNode *node, char data);
void diadd( Clim_diNode *node, int data);
#endif //DLIST_H_
