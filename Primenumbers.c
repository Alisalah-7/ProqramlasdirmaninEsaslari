// PRIME NUMBERS
#include <stdio.h>

int main() {
   int i = 1;
   int bolen;
   int R;
   int number;
   printf("Enter a number bigger than 1: ");
   scanf("%d", &number);
   while(i <= number){
      R = number % i;
      i++;
      if(R == 0){
          bolen++;
      }
   }
   if( bolen == 2 ){
       printf("This number is a prime number");
   }
   else{
       printf("This number is not a prime number");
   }
    return 0;
}
