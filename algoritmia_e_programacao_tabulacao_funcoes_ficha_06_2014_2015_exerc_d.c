// PROBLEM //////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Elabore um algoritmo que tabele a seguinte funcao: 
// F(x) = 1 + 1/(2x)+ 1/(3x^2) + (1/4x^3) + ...
// Considere 30 termos no desenvolvimento de F(x) e 
// o intervalo de variação da função de 5 a 10, 
// com incrementos de 0.1
////////////////////////////////////////////////////////////////////////////////


// INCLUDE LIBRARIES ///////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>
////////////////////////////////////////////////////////////////////////////////


// DECLARE FUNCTIONS
////////////////////////////////////////////////////////////////////////////////
double 	calculatesSumOfNTermsOfFunction( 	double 	x, 
											int 	numberOfTermsOfFunction );
											
void 	tabulateFunctionBetweenLowerAndHigherValue( double 	lowerValue, 
													double 	higherValue, 
													double 	increment, 
													int 	numberOfTermsOfFunction) ;
////////////////////////////////////////////////////////////////////////////////


// MAIN PROGRAM ////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
int main() {

    printf( "PROGRAM STARTED\n" );
    
    // VARIABLE DECLARATION
    double lowerValue 			= 5;
    double higherValue 			= 10;
    double increment 			= 0.1;
    int numberOfTermsOfFunction = 30;
    
      
    tabulateFunctionBetweenLowerAndHigherValue( lowerValue, higherValue, increment, numberOfTermsOfFunction);
    

    printf( "\n\nPROGRAM ENDED" );

    return 0;
}


// FUNCTION THAT CALCULATES THE SUM OF N TERMS 
////////////////////////////////////////////////////////////////////////////////
double calculatesSumOfNTermsOfFunction( double x, int numberOfTermsOfFunction ) 
{
    // INITIALIZE SUM OF N TERMS OF FUNCTION
    double sumOfNTermsOfFunction = 0;

    // CALCULATE SUM OF N TERMS OF FUNCTION
    int i = 1;
    for ( i = 1; i <= numberOfTermsOfFunction; i++ )
    {
        sumOfNTermsOfFunction += 1 / ( i * pow( x, i-1 ) );
    }

	// RETURN THE SUM OF N TERMS OF FUNCTION
    return sumOfNTermsOfFunction;
}
////////////////////////////////////////////////////////////////////////////////


// FUNCTION THAT TABULATES THE VALUES
////////////////////////////////////////////////////////////////////////////////
void tabulateFunctionBetweenLowerAndHigherValue( 	double 	lowerValue, 
													double 	higherValue, 
													double 	increment, 
													int 	numberOfTermsOfFunction) 
{
	// INITIALIZE FUNCTION RESULT
	double functionResult = 0;
	
	// PRINTS THE VALUES 
	double i = lowerValue;
	for( i = lowerValue; i <= higherValue; i = i + increment ) 
	{
		
		functionResult = calculatesSumOfNTermsOfFunction( i, numberOfTermsOfFunction );
		
		printf( "\n x = %5.2f: f(x) = %8.6f", i, functionResult );
	
	}
	
}
////////////////////////////////////////////////////////////////////////////////






