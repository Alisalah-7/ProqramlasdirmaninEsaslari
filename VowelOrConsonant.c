// VOWEL OR CONSONANT
#include <stdio.h>

int main() {
    char Character;
    printf("Enter a character: ");
    scanf("%s", &Character);
    int characters[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i = 0;
    int Long = 10;
    while(i < Long){
        if( Character == characters[i] ){
            printf("this character is vowel");
            break;
        }
        else{
            i++;
        }
    }
    if(i == 10){
        printf("this character is consonant");
    }    
   
    

    return 0;
}
