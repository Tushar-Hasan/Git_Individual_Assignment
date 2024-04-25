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