#include <stdio.h>

int binsrch(int *a, int low, int high, int key)
{
	int mid;
	if(high < low){
		return -1;
	}
	mid = (low+high)/2;
	if(a[mid]==key){
		return mid;
	}
	if(a[mid]>key){
		return binsrch(a, low, mid-1, key);
	}else{
		return binsrch(a, mid+1, high, key);
	}
}

int main()
{
	int a[10];
	int size;
	int i;
	int key;

	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Key:");
	scanf("%d",&key);

	printf("Key found at %d\n", binsrch(a,0,size-1,key));
	return 0;
}
