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




int main(){

	SqList L;
	InitList(L);
	return 0;

}