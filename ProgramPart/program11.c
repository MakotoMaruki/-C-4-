
#include <stdio.h>
int main(void){
    double sum=0;
    int n,i,j;
    scanf("%d",&n);
    for(i=1,j=1;i<=n;i++){
        sum+=1.0/j;
        j+=2;
    }
    printf("sum = %.6lf",sum);
    
}
