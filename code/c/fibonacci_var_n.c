/*
    C Programming Language Template for doing fib Calculation with 
    N variables. Where, N is the number of independantly allocated 
    variables and, not things such as the loop counter, etc.
*/
#include <stdio.h>

void fib_n_eq_3(int maxIt) 
{
    int first = 0;
    int second = 1; 
    int next; 

    printf("%d\r\n", first);
    printf("%d\r\n", second);

    for(int i = 0; i < maxIt; i++) 
    {
        next = first + second;
        first = second;
        second = next; 

        printf("%d\r\n", next);
    }
} 

void fib_n_eq_2(int maxIt) 
{
    int first = 0;
    int second = 1; 

    printf("%d\r\n", first);
    printf("%d\r\n", second);

    for(int i = 0; i < maxIt; i++) 
    {

        first = second;
        second = next; 

        printf("%d\r\n", next);
        
        next = first + second;
    }
}

void fib_n_eq_1(int maxIt) 
{

}

void fib_n_eq_0(int maxIt) 
{

}

int main(int argc, char* argv[]) 
{
    int MAX_ITER = 33; 

    fib_n_eq_3(MAX_ITER);
}