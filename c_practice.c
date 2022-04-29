#include<stdio.h>
int main()
{
    int n,i=1,c=0;
    scanf("%d",&n);
    while(n>i){
        if (n%i==0){
            c++;
                 }
        i++;
    }
    if(c==1){
        printf("prime");
    }
    else{
        printf("no");
    }
    return 0;
    
}