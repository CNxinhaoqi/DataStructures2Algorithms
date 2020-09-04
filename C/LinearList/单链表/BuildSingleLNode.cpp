
typedef struct LNode{
	ElemType data;
	struct LNode next;
}Lnode,*LinkList;

bool InitList(LinkList &L){
	L=(LNode *)malloc(sizeof(LNode));
	if(L==NULL){
		return false;
	}
	L->next=NULL;
	return true;
}

//尾插法
//初始化单链表
//设置length记录
//while 每次取出1个数据元素  ListInsert(&L,length+1,e)  length++
//设置表尾指针
LinkList List_TailInsert(LinkList &L){
	int x;
	L=(LNode *)malloc(sizeof(LNode));//初始化LinkList

	LNode *s,*r=L;//*r 表尾指针
	scanf("%d",&x);

	while(x!=9999){
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		r->next=s;
		r=s;//尾指针指向表尾结点
		scanf("%d",&x);
	}

	r->next=NULL;
	return L;
}

//头插法
LinkList List_HeadInsert(LinkList &L){
	L=(LNode *)malloc(sizeof(LNode));//初始化
	L->next=NULL;

	int x;
	LNode *s;
	scanf("%d",&x);
	while(x!=9999){
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;

		L->next=s;
		scanf("%d",&x);	
	}

	return L;

}

//初始化 指定结点的后插操作

******//链表的逆置
LinkList List_Reverse(LinkList &L){
	LNode *p=L;
	LNode *temp=(LNode *)malloc(sizeof(LNode));
	temp->next=NULL;

	Lnode *s;

	//temp  头插法
	while(p->next!=null){
		s=(LNode *)malloc(sizeof(LNode));
		s->data=p->next->data;
		s->next=temp->next;

		temp->next=s;
	}

	return temp;
}




