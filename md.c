#include <stdio.h>

void print(int (*a)[3], int m, int n)
{
	printf ( "%d\n", * ( *( a + m ) + n ) );
}

int main()
{
	int a[10][3];
	int count=0, i, j;

	for( i=0; i<10; i++ ) {
		for ( j=0; j<3; j++ ) {
			a[i][j] = count++;
		}
	}
	printf ( "%d\n", *( *( a + 2 ) + 2 ) );
	print (a, 2, 2);
	return 0;
}
