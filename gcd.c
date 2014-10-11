#include <stdio.h>
int main()
{
   int a, b;
   int temp;

   scanf("%d",&a);
   scanf("%d",&b);

   if(a<b){
       temp = a;
       a=b;
       b=temp;
   }

   while (b != 0){
       temp = a % b;
       a = b;
       b = temp;
   }

  printf("%d\n", a);
  return 0;
}
