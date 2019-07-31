#include<stdio.h>

void getMaxMin(int arr[],int len,int *max, int *min){
	*max = arr[0];
	*min = arr[0];
	for(int i=1; i < len; i++){
		int tmp = arr[i];
		if(tmp > *max) *max = tmp; 
		if(tmp < *min) *min = tmp; 
	}
}
int main()
{       
	int MAX,MIN;
	int arr[]={19,123,32334,2132,12,21,23,45,657,76};
	getMaxMin(arr,sizeof(arr) / sizeof(arr[0]),&MAX,&MIN);
	printf("MAX=%d\n",MAX);	
	printf("MIN=%d\n",MIN);	
	return 0;
}
	

