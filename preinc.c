#include <stdio.h>

/* To test preincrement */
void function ( int n )
{
	while ( --n ){
		printf( "%d ", n );
	}
	return;
}

int main()
{
	int n = 3;
	function( n );
	printf( "%d\n", n );
	return 0;
}
