	#include <stdio.h>
	char str_array[10][30] ;
	void main()
	{int i, j ;
        puts("Enter ten strings\n") ;
	for ( i = 0 ; i < 10; i++ ) // read in as strings so a single for
                                // loop suffices
	{   printf( " %d : ", i + 1) ;
        gets( str_array[i] ) ;
	}
        for ( i = 0; i < 10; i++ )//printed out as individual chars so a
	{		   		   // nested for loop structure is required
        for ( j=0; str_array[i][j] != '\0' ; j++ )
		putchar ( str_array[i][j] ) ;
        putchar( '\n' ) ;
	}
	}

