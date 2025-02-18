#include<stdio.h>
int main(){
    int b;
    char a[100],c[100];
    scanf("%s %d %s",a,&b,c);
    
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}