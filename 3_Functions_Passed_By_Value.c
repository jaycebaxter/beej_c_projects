// Practice with custom functions and pass by value
// Note: would not work if input was a decimal but i dont care because there's no actual input

// Errors made: 
// - main declared before is_even, though main needs to call it. 
//      - Fix: use a function prototype.
// - could not use max_of_3 because originally, the functions were printing the result instead of returning it
//      - Fix: separate computing from displaying, always. 

#include <stdio.h>

// These are function prototypes
int square(int n);
int cube(int n);
int is_even(int n);
int max_of_3(int a, int b, int c);
void print_results(int n);

int main(void) 
{
    int input = 3;
    
    print_results(input);

    return 0;
}

int square(int n) 
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

// this is basically just returning a boolean
int is_even(int n)
{
    return n % 2 == 0;
}

int max_of_3(int a, int b, int c)
{
    int largest = a;
    
    if (b > largest)
    {
        largest = b;
    }
    
    if (c > largest)
    {
        largest = c;
    }
    
    return largest;
}

void print_results(int n)
{
    int num_squared = square(n);
    int num_cubed = cube(n);
    
    printf("The input number is %d. ", n);
    
    // this could be simplified but it keeps confusing me because im stupid and i forget whether 1 is true or false
    if (is_even(n) == 1)
    {
        printf("It is an even number.\n");
    }
    else
    {
        printf("It is an odd number.\n");
    }
    
    printf("%d squared is %d.\n", n, num_squared);
    printf("%d cubed is %d.\n", n, num_cubed);
    printf("The largest number is %d", max_of_3(n, num_squared, num_cubed));
}
