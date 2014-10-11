#include <stdio.h>
#include <math.h>

double cl (float a)
{
	return ceil(log(1/a)/log(2));
}
int discrepancy(float x, float y, float z, float a, float b, float c)
{
	float result;
	result = x*cl(x)+y*cl(y)+z*cl(z)-x*cl(a)-y*cl(b)-z*cl(c);
	if(result<0.0){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	float x, y, z, a, b, c = 0.0;
	float incr = 0.2;
	for(;x<1;x+=incr){for(y=0;y<1-x;y+=incr){
	z = 1-x-y;
	for(a=0;a<1;a+=incr){for(b=0;b<1-a;b+=incr){
		c = 1-a-b;
		if(discrepancy(x,y,z,a,b,c)){
			printf("%f %f %f %f %f %f\n",x,y,z,a,b,c);
		}
	}}}}
	return 0;
}
