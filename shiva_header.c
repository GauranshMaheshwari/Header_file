#include <stdio.h>
#include "shiva_header.h"

int main() {
    int num;
    printf("Enter number to be squared");
    scanf("%d",&num);
    printf("Square of %d: %d\n", num, square(num));
    
    int n;
    printf("Enter number for fibonacci series");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    fibonacci_series(n);  // No array needed

    int check;
    printf("Enter number to be checked");
    scanf("%d",&check);
    if (is_prime(check)) {
        printf("%d is a prime number.\n", check);
    } else {
        printf("%d is not a prime number.\n", check);
    }

    return 0;
}



