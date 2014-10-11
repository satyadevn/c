#include <stdio.h>

int main()
{
	int* ptr;
	int x=1;
	
	ptr=&x;
	printf("%d\n",*ptr);

	return 0;
}
