#include<stdio.h>
int main(){
    int b;
    char a[100],c[100];
    scanf("%s %d %s",a,&b,c);
    scanf("%[^]",c);  //use to take multiple input
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}