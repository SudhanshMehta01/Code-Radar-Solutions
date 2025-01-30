#include<stdio.h>
int main(){
    int b;
    char a[100],c[100];
    scanf("%s %d %[^\n]",a,&b,c);
    
    printf("Name: %s",a);
    printf("Age: %d",b);t
    printf("Hobby: %s",c);
    return 0;
}