#ifndef SHIVA_HEADER
#define SHIVA_HEADER
int square(int num) {
    return num * num;
}

void fibonacci_series(int n) {
    if (n <= 0) return;

    int a = 0;int b=1, result;

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
    printf("\n");
}

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

#endif
