//插入
//按位序插入  
//带头节点   指针->头结点0开始 循环到i-1结点  判断指针指向结点是否合法 O(n)
bool ListInsert(LinkList &L,int i, ElemType e){
	if(i<1){
		return false;
	}

	// LNode *p;
	// int j=0;

	// p=L;//初始指向头结点

	// //循环到第i-1个结点（位序，头结点为0）
	// while(p!=NULL &&j<i-1){
	// 	p=p->next;
	// 	j++;
	// }

	LNode *p=GetElem(L,i-1);

	// if(p==NULL){
	// 	return false;
	// }

	// LNode *s=(LNode *)malloc(sizeof(LNode));

	// s->data=e;
	// s->next=p->next;
	// p->next=s;

	// return true;

	return InsertNextNode(p,e);

}
//不带头节点 不存在0结点，i=1特殊处理 头指针重新赋值，i>1找到i-1插入O(n)
bool ListInsert(LinkList &L,int i,ElemType e){
	if(i<1){
		return false;
	}

	if(i==1){
		LNode *s=(LNode *)malloc(sizeof(LNode));
		s->data=e;
		s->next=L;
		L=s;//头结点指针重新指向
		return true;
	}

	LNode *p;
	p=L;
	int j=1;
	while(p!=null && j<i-1){
		p=p->next;
		j++;
	}

	if(p==NULL){
		return false;
	}

	LNode *s=(LNode *)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;

}

//指定结点后插O(1)
bool InsertNextNode(LNode *p,ElemType e){
	if(p==NULL){
		return false;
	}

	LNode *s=(LNode *) malloc(sizeof(LNode));
	if(s==NULL){
		return false;
	}

	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;
}
//指定结点前插
bool InsertPriorNode(LNode *p,ElemType e){
	if(p==NULL){
		return false;	
	}

	LNode *s=(LNode *)malloc(sizeof(LNode));
	s->next=p->next;
	p->next=s;
	s->data=p->data;
	p->data=e;
	return true;
}

bool InsertPriorNode(LNode *p,LNode *s){
	if(p==NULL){
		return false;	
	}

	s->next=p->next;
	p->next=s;


	ElemType temp=p->data
	p->data=s->data;
	s->data=temp;
	return true;

}


//删除
//按位序删除
//带头结点删除
bool ListDelete(LinkList &L,int i,ElemType &e){
	if(i<1){
		return false;
	}

	// LNode *p;
	// p=L;
	// int j=0;
	// while(p!=NULL && j<i-1){
	// 	p=p->next;
	// 	j++;
	// }
	LNode *p=GetElem(L,i-1);

	if(p==NULL){
		return false;
	}

	if(p->next==NULL){
		return false;
	}

	LNode *s=p->next;
	e=s->data;
	p->next=s->next;
	free(s);
	return true;

}


//按位查找
LNode * GetElem(LinkList L,int i){
	if(i<0){
		return NULL;
	}

	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i){
		p=p->next;
		j++;
	}
	return p;

}

//指定结点删除  p与后继结点交换数据  删除后继结点  O(1) 
//如果p是尾结点O(n) 从头寻找p的前驱
bool DeleteNode(LNode *p){
	if(p==NULL){
		return false;
	}

	LNode *q=p->next;
	p->data=p->next->data;
	p->next=q->next;
	free(q);
	return true;
}


