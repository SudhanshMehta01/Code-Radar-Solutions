#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==2 || a==3 || a==5 || a==11 || a==13 || a==17 || a==19 || a==23 || a==29 || a==31 || a==37 || a==41){
        printf("prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}