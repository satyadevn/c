#include<stdio.h>


int sumcol(int i,int j,int maxcol){
        int current;         
        scanf("%d",&current);
        if(j==maxcol) 
		return current;
        else 
		return current+sumcol(i,j+1,maxcol);
}

int sumsquare(int i,int j,int maxcol){
	int result = sumcol(i,j,maxcol);
        return result*result;
}

int total(int i,int maxrow,int maxcol){
        if(i==maxrow) 
		return sumsquare(i,0,maxcol);
        else 
		return sumsquare(i,0,maxcol)+total(i+1,maxrow,maxcol);
} 

main(){
	int m,n,p;
	printf("enter the size of matrix\n");
	scanf("%d%d",&m,&n);              /*size of matrix*/
	p=total(0,m-1,n-1);
	printf("%d",p);
}

        
        
