#include <stdio.h>

void printFibonacci(int n) {
    long long first = 0, second = 1, next;
    
    if(n <= 0) {
        printf("Enter a positive number.\n");
        return;
    }

    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++) {
        if(i == 0)
            next = first;
        else if(i == 1)
            next = second;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printFibonacci(terms);
    return 0;
}
