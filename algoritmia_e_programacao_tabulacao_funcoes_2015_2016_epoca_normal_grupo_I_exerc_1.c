// PROBLEM /////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Faca um algoritmo que tabele a funcao f(x,y) para x € [2,4] e y € [a,b] 
// sendo a e b inteiros positivos
// f(x,y) = { x!/(x+1) para y <=3; somatorio de de i = 1 ate de y^1
////////////////////////////////////////////////////////////////////////////////


// INCLUDE LIBRARIES ///////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>
////////////////////////////////////////////////////////////////////////////////


// FUNCTION DECLARATIONS ///////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int 	calculateFactorial( 		int x 		);
double 	forYLessThanOfEqualToThree( int x, int y);
int 	forYGreaterThanThree( 		int y, int n);
////////////////////////////////////////////////////////////////////////////////


// MAIN PROGRAM ////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int main() 
{
	printf( "PROGRAM STARTED!!!\n");
	
	// TESTS
	//printf( "\n%d", calculateFactorial( 2 ) );
	//printf( "\n%4.2f", forYLessThanOfEqualToThree( 2, 1) );
	//printf( "\n%d", forYGreaterThanThree( 4, 2) );
	
	// VARIABLE DECLARATIONS
	int n = 3;
	
	int a = 1;
	int b = 10;
	
	int x = 2;
	int y = a;
	
	int result = 0;
	
	
	// LOOP FOR X = 2 TO X = 4
	for ( x = 2; x <= 4; x++ )
	{
		// LOOP FOR Y = A TO Y = B
		for ( y = a; y <= b; y++ )
		{
			// PRINT X AND Y VALUES
			printf( "\nx =  %2d,", x );
			printf( "y = %2d; ", y );
			
			// PRINT RESULTS DEPENDING ON THE VALUE OF Y
			if ( y <= 3 )
			{
				printf( "f(x,y) = %5.2f", forYLessThanOfEqualToThree( x, y ) );
				
			}
			
			if ( y > 3 )
			{
				result = forYGreaterThanThree( y, n );
				printf( "f(x,y) = %5d", result );
			}

		}

	}
	
	
	


	printf( "\n\nPROGRAM ENDED!!!");
}
////////////////////////////////////////////////////////////////////////////////


// FUNCTION THAT CALCULATES THE FACTORIAL OF X (THE NUMERATOR IN CASE OF Y<=3) /
////////////////////////////////////////////////////////////////////////////////
int calculateFactorial( int x )
{
	int xFactorial = 1;
	
	int i = 0;
	for ( i = x; i >= 1; i-- )
	{
		xFactorial = xFactorial * i;
	}

	return xFactorial;
}
////////////////////////////////////////////////////////////////////////////////


// FUNCTION THAT CALCULATES THE RESULT IN THE CASE OF
// Y <= 3 AND THAT USES THE CALCULATE FACTORIAL FUNCTION
////////////////////////////////////////////////////////////////////////////////
double forYLessThanOfEqualToThree( int x, int y )
{
	double result = -1;
	
	if ( y != -1 ) 
	{
		result = calculateFactorial( x ) / ( (double) y + 1 );
	}
	
	return result;
}
////////////////////////////////////////////////////////////////////////////////


// FUNCTION THAT CALCULATES THE RESULT IN THE CASE OF 
// Y > 3
////////////////////////////////////////////////////////////////////////////////
int forYGreaterThanThree( int y, int n )
{
	int result = 0;
	
	int i = 1;
	for ( i = 1; i <= n; i++  )
	{
		result += pow( y, i );
	}

	return result;	
}
////////////////////////////////////////////////////////////////////////////////

