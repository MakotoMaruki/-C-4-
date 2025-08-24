
#include <stdio.h>
#include <math.h>
int main(void){
    int i,n,muti;
    scanf("%d",&n);
    for(i=0;i<n+1;i++){
        muti=pow(3,i);
        printf("pow(3,%d) = %d\n",i,muti);
    }
    return 0;
}
