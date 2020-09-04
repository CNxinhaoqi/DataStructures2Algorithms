// struct LNode{
// 	ElemType data;
// 	struct LNode *next;
// };
//新增一个结点 指针p指向这个结点
// struct LNode *p=(struct LNode *)malloc(sizeof(struct LNode));

//数据类型重命名
// typedef struct LNode LNode
// LNode *p=(LNode *)malloc(sizeof(LNode));


typedef struct LNode
{
	ElemType data;
	struct LNode *next;
	
}LNode, *LinkList;

//LNode * L  指向单链表第一个结点的指针 
//LinkList L 指向单链表第一个结点的指针 
LNode * GetElem(LinkList L,int i){

	int j=1;
	LNode *p=L->next;
	if(i==0){
		return L;
	}

	if(i<1){
		return NULL;
	}

	while(p!=NULL&&j<i){
		p=p->next;
		j++;
	}
	return p;

}


//头插法
LinkList List_HeadInsert(LinkList &L){
	LNode *s;int x;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;

	scanf("%d",&x);
	while(x!=9999){
		s=(LNode *)malloc(sizeof*(LNode));
		s->data=x;
		s->next=L->next;

		L->next=s;
		scanf("%d",&x);

	}

	return L;


}


bool InitList(LinkList &L){
	L=(LNode *)malloc(sizeof(LNode));
	if(L==NULL){
		return false;
	}

	L->next=NULL;
	return true;
}

bool Empty(LinkList L){
	return L->next==NULL;
}

int main(){
	LinkList L;
	List_HeadInsert(L);
}