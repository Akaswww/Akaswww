#include<stdio.h>
int grt_3_no(int a,int b,int c)
{
    if(a>b&&b>c){return 1;}
    else if(b>c){return 0;}
    else{return -1;}
    return 0;
}
    int main(){
    int a,b,c;
    printf("enter number: ");
    scanf("%d\n%d\n%d",&a,&b,&c);
    int res=grt_3_no(a,b,c);
    if(res==1){printf("A is greater");}
    else if (res==0)
    {
       printf("B is greater");
    }
    else{printf("c is greater");}
    return 0;
}