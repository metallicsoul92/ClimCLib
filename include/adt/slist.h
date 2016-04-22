#ifndef SLIST_H_
#define SLIST_H_

/*Structure Implementation */
struct _siNode{
  int headData;
  struct _siNode *next;
};

struct _scNode{
  char headData;
  struct _scNode *next;
};

struct _sfNode{
  float headData;
  struct _sfNode *next;
};

struct _sgNode{
  void *headData;
  struct _sgNode *next;
};


struct _sgList{
    int count;
    struct _sgNode *head;
};

struct _scList{
    int count;
    struct _scNode *head;
};
struct _sfList{
    int count;
    struct _sfNode *head;
};
struct _siList{
    int count;
    struct _siNode *head;
};

/* Type Definitions for Nodes*/
typedef struct _sgNode Clim_sgNode;
typedef struct _sfNode Clim_sfNode;
typedef struct _scNode Clim_scNode;
typedef struct _siNode Clim_siNode;
/* Type Definitions for Nodes*/
typedef struct _siList Clim_siList;
typedef struct _scList Clim_scList;
typedef struct _sfList Clim_sfList;
typedef struct _sgList Clim_sgList;

/* The following functions are used for allocating memory for nodes */
Clim_sgNode *mallocSGNode( Clim_sgNode *node);
Clim_sfNode *mallocSFNode( Clim_sfNode *node);
Clim_scNode *mallocSCNode( Clim_scNode *node);
Clim_siNode *mallocSINode( Clim_siNode *node);

/* The following functions are used for allocating memory for lists */
Clim_sgList *mallocSGList(Clim_sgList *list, int amount);
Clim_sgList *mallocESGList(Clim_sgList *list);
Clim_scList *mallocSCList(Clim_scList *list, int amount);
Clim_scList *mallocESCList(Clim_scList *list);
Clim_siList *mallocSGIList(Clim_siList *list, int amount);
Clim_siList *mallocESIList(Clim_siList *list);
Clim_sfList *mallocSFList(Clim_sfList *list, int amount);
Clim_sfList *mallocESFList(Clim_sfList *list);

/* The following functions are used for searching items in the  nodes */
Clim_sgNode *gsearch( Clim_sgNode *node, void *data);
Clim_sfNode *fsearch( Clim_sfNode *node, float data);
Clim_scNode *csearch( Clim_scNode *node, char data);
Clim_siNode *isearch( Clim_siNode *node, int data);
/* The following functions are used for inserting items in the nodes */
void ginsert( Clim_sgNode *node,int index, void *data);
void finsert( Clim_sfNode *node,int index, float data);
void cinsert( Clim_scNode *node,int index, char data);
void iinsert( Clim_siNode *node,int index, int data);
/* The following functions are used for removing items in the nodes */
void gremove( Clim_sgNode *node, void *data);
void fremove( Clim_sfNode *node, float data);
void cremove( Clim_scNode *node, char data);
void iremove( Clim_siNode *node, int data);
/* The following functions are used to add items to the end of the node list */
void gadd( Clim_sgNode *node, void *data);
void fadd( Clim_sfNode *node, float data);
void cadd( Clim_scNode *node, char data);
void iadd( Clim_siNode *node, int data);
#endif //SLIST_H_
