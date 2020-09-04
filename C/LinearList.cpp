//顺序表
//静态分配
//存储空间大小 MaxSize*sizeof(ElemType)
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

//初始化
void InitList(SqList &L){
	for (int i = 0; i < MaxSize; ++i)
	{
		L.data[i]=0;
	}
	L.length=0;
}


//动态分配
#define InitSize 10
typedef struct {
	int *data;
	int MaxSize
	int length;
}SeqList;

void InitList(SeqList &L){
	L.data=(int *)malloc(InitSize*sizeof(int));
	L.length=0;
	L.MaxSize=InitSize;
}

void IncreaseSize(SeqList &L,int len){
	int *p=L.data;
	L.data=(int *)malloc((MaxSize+len)*sizeof(int));
	for (int i = 0; i < L.length; ++i)
	{
		L.data[i]=p[i];//数据复制到新区域
	}
	L.MaxSize=L.MaxSize+len;
	free(p);//释放空间
}

int main(){

	// 	SqList L;
	// 	InitList(L);
	// 	return 0;

	SeqList L;
	InitList(L);
	IncreaseSize(L,5);
	return 0;
}