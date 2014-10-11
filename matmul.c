#include <stdio.h>

int a[5][5], b[5][5], product[5][5];

void copy_array(int src[5][5], int dest[5][5])
{	
	int i=0, j=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			dest[i][j] = src[i][j];
		}
	}
	return;
}
void print_array(int a[][5])
{
	int i=0, j=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return;
}

int main()
{
	int i=0, j=0, k=0, pow=0;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d",&pow);
	copy_array(a,b);
	copy_array(a,product);
	
	while(--pow){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				product[i][j]=0;
				for(k=0; k<5; k++){
					product[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		copy_array(product,b);
	}
	print_array(product);

	return 0;
}
