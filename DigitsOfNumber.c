// DIGITS OF NUMBER
#include <stdio.h>

int main() {
    int number;
    int i;
    int digits;
    printf("Enter a number: ");
    scanf("%d", &number);
    for( i = number ; i > 10; i = i / 10){
        digits = digits + 1;
    }
    printf("%d", digits + 1);

    return 0;
}
