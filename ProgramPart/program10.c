
#include <stdio.h>
int main(void){
    double sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("sum = %.6lf",sum);
    
}
