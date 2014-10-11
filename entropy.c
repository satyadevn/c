#include <stdio.h>
#include <math.h>

/* divide by log(2) */
#define logb(a,b) log((a))*1.44269503997

double entropy(float a[], int n)
{
	float ent=0;
	int i=0;

	for(i=0;i<n;i++){
		if (a[i] == 0){
			ent += 0;
		}else{
			ent -= a[i] * logb(a[i],2);
		}
	}
	return ent;
}
void print_array(float a[], int n)
{
	int i=0;
	for (i=0; i<n;i++){
		printf("%f ",a[i]);
	}
	printf("\n");
}
/* 0.721928 = H(0.2, 0.8)*/
int main()
{
	float incr=0.01;
	float x = 0.1, y=0.1;
	float a[3];

	for(; x<1.0; x+= incr){
		a[0] = x;
		for(y=0.1;y<1.0;y+=incr){
			float ent;
			a[1] = y;
			a[2] = 1-x-y;
			ent = entropy(a,3);
			if(ent>0.72 && ent<0.74){
				print_array(a,3);
				printf("%f\n",ent);
			}
		}
	}
	return 0;
}
