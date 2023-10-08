#include <stdio.h>

int main() {
    int number;
    int dividing = 0; // Initialize dividing
    int i = 2;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (i < number) {
        if (number % i == 0) {
            dividing++;
        }
        i++; // Increment i to check the next number
    }

    if (dividing == 0) {
        printf("This number is prime.\n");
    } else {
        if (number % 3 == 0 && number % 5 == 0) {
            printf("FizzBuzz");
        } else if (number % 3 == 0) {
            printf("Fizz");
        } else if (number % 5 == 0) {
            printf("Buzz");
        }
    }

    return 0;
}
