#include <stdio.h>

int swap(int a,int b){
	int c;
	c = a;
	a = b;
	b = c;
}


int swap1(int a,int b){
	int c;
	c = a;
	a = 23;
	b = 22;
}

int swap2(int *a,int *b){
	*a = 23;
	*b = 22;
}

int swap3(int *a,int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int swap4(int *a,int *b){
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}

int main(){
	int a = 1;
	int b =23;
	//swap(a,b);
	//swap1(a,b);
	//swap2(&a,&b);
	//swap3(&a,&b);
	swap4(&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}
