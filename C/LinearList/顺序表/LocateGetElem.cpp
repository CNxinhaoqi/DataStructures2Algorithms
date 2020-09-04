#define MaxSize 10
typedef struct 
{
	int data[MaxSize];
	int length;
	
}SqList;

int GetElem(SqList L,int i){
	return L.data[i-1];
}

#define InitSize 10
typedef struct 
{
	ElemType *data;
	int MaxSize;
	int length;
	
}SeqList;

ElemType GetElem(SeqList L,int i){
	return L.data[i-1];
}

//malloc 返回存储空间的起始地址
//int * 指示动态分配数组的指针
void InitList(SeqList L){
	L.data=(int *)malloc(InitSize*sizeof(int));
}

//按值查找 返回位序
int LocateElem(SeqList L,ElemType e){

	for (int i = 0; i < L.length; i++)
	{
		if(L.data[i]==e){
			return i+1;
		}		
	}

	return 0;
}