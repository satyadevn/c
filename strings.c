#include <stdio.h>
#include <stdlib.h>

int sstrlen(char *s)
{
	int i=0;
	while(*s){
		s++;
		i++;
	}
	return i;
}

void sstrcpy(char *s, char *t)
{
	while(*s){
		*t = *s;
		t++;
		s++;
	}
	*t='\0';
}

char *sstrdup(char *s)
{
	int len=0;
	char *t;
	len = sstrlen(s);
	t = (char *) malloc((len+1)*sizeof(char));
	while(*s){
		*t = *s;
		t++;
		s++;
	}
	*t = '\0';
	return t;
}
char *strtok(char *s, char delimiter)
{
}
