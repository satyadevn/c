#include <stdio.h>

int main()
{
	int i = 0;
	int j;
	int k = 3;
	int a = 1;
	a = a++;
	printf("%d \n", a);
	k = k++ + k++;
	printf("%d\n", k);  /* Expected - 4 */
	j = i++ + i++;
	printf("%d %d\n",j,i);
}
