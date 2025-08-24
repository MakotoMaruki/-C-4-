
#include <stdio.h>
int main(void){
    double sum=0;
    int n,i,j;
    scanf("%d",&n);
    for(i=1,j=1;i<=n;i++){
        if(i%2==1){
            sum+=1.0/j;
        }else{
            sum-=1.0/j;
        }
        j+=3;
    }
    printf("sum = %.3lf",sum);
    
}
