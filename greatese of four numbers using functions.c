#include<stdio.h>
int max(int a,int b,int c, int d){
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    return max;
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans=max(a,b,c,d);
    printf("greatest number=%d",ans);
    return 0;
}