#include<stdio.h>
int main(){
    int a,t=0;
    printf("enter a number");
    scanf("%d",&a);
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            t++;
            break;
            }
        }
        if(t==0 && a!=1){
            printf("prime");
        }else{
            printf("not prime");
        }
}