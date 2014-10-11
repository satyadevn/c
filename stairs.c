#include <stdio.h>

int main()
{
	int i = 0;
	int currpow = 1;
	int sum = 0;
	for(i=0; i<10; i++){
		sum = sum+i*currpow;
		printf("%d\t%d\n",i,sum);
		currpow *= 2;
	}
	return 0;
}
