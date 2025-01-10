#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int b=0,c=1;
    for(int i=0;i<a;i++){
        int d=b+c;
        printf("%d",b);
        b=c;
        c=d;
    }
}