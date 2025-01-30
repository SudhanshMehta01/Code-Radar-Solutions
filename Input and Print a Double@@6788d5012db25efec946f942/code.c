#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if (x==0){
        printf("You entered: %d",x);
    }
    printf("You entered: %.4f",x);
    return 0;
}