#include <stdio.h>

int main()
{
clea
printf("Hello World");
return 0;
}

int factorial( int n) {
    if( n <=0 ){
        return -1;
    }
    int result = 1, i;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

void fibonacci(int n) {
    int fib[100]; // Assuming we won't exceed 100 Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }