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

//按值查找
LNode * LocateElem(LinkList L,ElemType e){
	LNode *p=L->next;

	while(p!=NULL && p->data!=e){
		p=p->next;
	}

	return p;
}

//表长
int Length(LinkList L){
	int len=0;
	LNode *p=L;
	while(p->next!=NULL){
		p=p->next;
		len++;
	}

	return len;
}