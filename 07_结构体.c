#include <stdio.h>

struct person {
	char * name;
	int age;
};


typedef struct {
	char * name;
	int age;
}person1;


struct  {
	char * name;
	int age;
}wkx ;

int main(){
	//struct person wkx;
	//person1 wkx;
	wkx.name="wangkaixuan";
	wkx.age=25;

	printf("name:%s\n",wkx.name);
	printf("age:%d\n",wkx.age);
	return 0;
}
