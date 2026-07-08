// Declares some celsius temperatures and converts them to fahrenheit
// Remember: match the data types to the %placeholder! Need to cast before the second one will work.

#include <stdio.h>

int main(void)
{
    int zeroC = 0;
    int twentyC = 20;
    int thirtySevenC = 37;
    int OneHundredC = 100;
    
    printf("%d degrees celsius in fahrenheit is %.0f\n", zeroC, (float)zeroC * 9/5 + 32);
    
    printf("%d degrees celsius in fahrenheit is %.0f\n", twentyC, (float)twentyC * 9/5 + 32);
    
    printf("%d degrees celsius in fahrenheit is %.1f\n", thirtySevenC, (float)thirtySevenC * 9/5 + 32);
    
    printf("%d degrees celsius in fahrenheit is %.0f\n", OneHundredC, (float)OneHundredC * 9/5 + 32);
    
    return 0;
}