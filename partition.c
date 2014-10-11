#include <stdio.h>

void swap(int a[], int i, int j)
{
	int temp=a[j];
	a[j]=a[i];
	a[i]=temp;
}
/*
===============================================
 The first element of the array is the pivot.
 Partitions the array into elements less than or 
 equal to the pivot on the left side, and elements
 greater than the pivot on the right. Returns the
 index of the last element of the left half.
 
 Since the left half contains at least the pivot,
 it is never empty.

 Ensures also that the pivot value is the last 
 element in the left half. Useful for quicksort.
=================================================
*/
int partition(int a[], int n)
{
	int pivot = a[0];
	int left_end = 0; /* the last element on the left half */
	int i;

	for( i=1; i<n; i++ ) {
		if ( a[i] < pivot ) {
			swap(a, left_end+1, i);
			left_end++;
		}
	}

	swap(a, 0, left_end); /* needed for quicksort */
	return left_end;
}

int kth_smallest( int a[], int n, int k )
{
	int leftend=partition ( a,n );
	int numleft = leftend+1;
	if(numleft == k){
		return a[leftend];
	}
	if(numleft > k) {
		return kth_smallest ( a, numleft - 1, k );
	}else{
		return kth_smallest ( a+numleft, n - numleft, k-numleft );
	}
}
void print_array ( int a[], int n )
{
	int i;
	for ( i=0; i<n; i++ ){
		printf ( "%d ", a[i] );
	}
	printf ( "\n" );
}

int main()
{
	int a[] = {7, 1, 8, 9, 0};
	/* int num = partition ( a, 5 ); */
	/* print_array ( a, 5 ); */
	/* printf ( "%d\n", num ); */
	printf ( "4th smallest in array is %d", kth_smallest ( a, 5, 4 ));
	return 0;
}
