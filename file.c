#include <stdio.h>

void copy_file ( FILE *fromfp, FILE *tofp )
{
	char c;
	
	while ( !feof ( fromfp ) ) {
		fscanf  ( fromfp, "%c", &c );
		fprintf ( tofp, "%c", c );
	}
}

int main()
{
	FILE *fp1, *fp2;
	char filename1[128], filename2[128];
	gets(filename1);
	gets(filename2);
	if( ( fp1 = fopen( filename1, "r" ) ) == NULL ) {
		fprintf( stderr, "Opening File %s failed\n", filename1 );
		return;
	}
	copy_file( fp1, stdout );
	fclose( fp1 );
	if ( ( fp2 = fopen ( filename2, "r" ) ) == NULL ) {
		fprintf ( stderr, "Opening File %s failed\n", filename2);
		return;
	}
	copy_file ( fp2, stdout );
	fclose ( fp2 );
	return 0;
}
	
	
