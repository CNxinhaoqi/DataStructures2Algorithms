#define MaxSize 10
typedef struct 
{
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList &L){
	for (int i = 0; i < MaxSize; ++i)
	{
		L.data[i]=0;
	}

	L.length=0;
}


// void ListInsert(SqList &L,int i,int e){
// 	for (int j = L.length; j>=i; j--)
// 	{
// 		L.data[j]=L.data[j-1];
// 	}

// 	L.data[i-1]=e;

// 	L.length++;

// }

bool ListInsert(SqList &L,int i,int e){
	if(i<1||i>L.length+1){
		return false;
	}

	if(L.length>=MaxSize){
		return false;
	}

	for (int j = L.length; j>=i; j--)
	{
		L.data[j]=L.data[j-1];
	}

	L.data[i-1]=e;

	L.length++;

	return true; 

}

bool ListDelete(SqList &L,int i,int &e){
	if(i<1||i>L.length){
		return false;
	}

	e=L.data[i-1];
	for (int j = i; j <L.length; j++)
	{
		L.data[j-1]=L.data[j];
	}

	L.length--;
	return true;
}

int main(){
	SqList L;
	InitList(L);
	ListInsert(L,1,8);
	ListInsert(L,2,6);
	ListInsert(L,3,3);

	// printf("%s\n", L.length);
	int e= -1;
	if(ListDelete(L,2,e)){
		// printf("delete e =%s\n", e);
	}

	return 0;


}




























