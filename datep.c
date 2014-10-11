#include <stdio.h>

char  name[][10] = {"January", "February", "March",
		  "April",   "May",       "June",
		  "July",    "August",    "September",
		  "October", "November",  "December"};
		 
char *suffix(int date)
{
	if ( date/10 == 1 ) {
		return "th";
	}
	switch ( date%10 ) {
	case 1: return "st";
	case 2: return "nd";
	case 3: return "rd";
	default: return "th";
	}
}
int main()
{
	int day;
	int month;
	int i;
	scanf("%d%d",&day,&month);
	printf("%d%s %s\n",day,suffix(day),name[month-1]);
	return 0;
}
