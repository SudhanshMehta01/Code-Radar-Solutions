#include<stdio.h>
int main(){
    int b;
    char a[100],c[100];
    scanf("%s %d %s",a,&b,c);
    scanf("%[^]",c);
    printf("Name: %s",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}