 typedef struct DNode{
 	ElemType data;
 	struct DNode *prior,*next;
 }DNode,*DLinkList;

 bool InitDList(DLinkList &L){
 	L=(DNode *)malloc(sizeof(DNode));
 	if(L==NULL){
 		return false;
 	}

 	L->prior=NULL;
 	L->next=NULL;
 	return true;
 }

 