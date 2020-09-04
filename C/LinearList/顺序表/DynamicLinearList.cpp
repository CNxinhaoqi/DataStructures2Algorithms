#include<stdlib.h>
//动态分配
#define InitSize 10
typedef struct {
	int *data;
	int MaxSize;
	int length;
}SeqList;

void InitList(SeqList &L){
	L.data=(int *)malloc(InitSize*sizeof(int));
	L.length=0;
	L.MaxSize=InitSize;
}

void IncreaseSize(SeqList &L,int len){
	int *p=L.data;
	L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
	for (int i = 0; i < L.length; ++i)
	{
		L.data[i]=p[i];//数据复制到新区域
	}
	L.MaxSize=L.MaxSize+len;
	free(p);//释放空间
}

int main(){
	SeqList L;
	InitList(L);
	IncreaseSize(L,5);
	return 0;
}