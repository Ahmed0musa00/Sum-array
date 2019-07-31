#include <stdio.h>
#define SIZE 10

int sum( const int b[], int p ); /* function prototype */

/* function main begins program execution */
 int main( void )
 {
 int x; /* holds return value of function sum */

 /* initialize array a */
 int a[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

 x = sum( a, SIZE );

 printf( "Result is %d\n", x );
 return 0; /* indicates successful termination */
 } /* end main */

 /* what does this function do? */
 int sum( const int b[], int p )
 {
 /* base case */
 if ( p == 1 ) {
 return b[ 0 ];
 } /* end if */
 else { /* recursion step */

 return b[ p - 1 ] + sum( b, p - 1 );
 } /* end else */
 } /* end function sum */
