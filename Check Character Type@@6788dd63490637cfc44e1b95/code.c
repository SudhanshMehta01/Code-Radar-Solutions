#include <stdio.h>
int main(){
    char x;
    scanf("%c",x);
    vowels = "a" , "e" , "i" , "o" ,"u";
    Digit = 1,2,3,4,5,6,7,8,9,0;
    special character = !,@,$,%,%,&,*,(,),_;
    if ( x == vowels ){
        printf("Vowel");
    }
    else if (x== Digit){
        printf("Digit");
    }
    else if (x== special character){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}