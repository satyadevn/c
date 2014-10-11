#include <stdio.h>

/*
======================================================
Test whether default needs to occur at the end
======================================================
*/
int main()
{
	int n;
	scanf("%d",&n);
	switch(n){
	case 1: printf("Won\n");
		break;
	default: printf("Better Luck Next Time");
		break;
	case 2: printf("Silver\n");
		break;
	case 3: printf("Bronze\n");
		break;
	}
	return 0;
}
