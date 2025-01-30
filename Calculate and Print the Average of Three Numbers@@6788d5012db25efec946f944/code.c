#include<stdio.h>
int main(){
    double a,b,c;
    double d;
    scanf("%ld %ld %ld", &a , &b, &c);
    d = (a+b+c)/3;
    printf("Average: %.2lf", d);
    return 0;
}