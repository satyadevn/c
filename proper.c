/* Properly capitalize proper nouns */
#include <stdio.h>
#include <ctype.h>

int main()
{
	int c; /* character currently read */
	int capitalize = 1; /* whether to capitalize the next character */
	c = getchar ();

	while ( c != EOF ) {
		if ( capitalize ) {
			/* if c is a small letter, then
			   capitalize it */
			if ( c >= 'a' && c <= 'z'){
				c = c + 'A'-'a';
			}
			capitalize = 0;
		} else {
			/* if capitalization is off, convert
                           capital letters to small letters */
			if ( c >= 'A' && c <= 'Z' ) {
				c = c - 'A' + 'a';
			}
		}
		if ( isspace ( c ) ){
			capitalize = 1;
		}
		putchar ( c );
		c = getchar ();
	}
	return 0;
}
				
