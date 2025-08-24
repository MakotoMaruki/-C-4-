
#include <stdio.h>
int main(void){
    int lower,upper,i;
    scanf("%d %d",&lower,&upper);

    if(lower<=upper&&upper<=100){
        printf("fahr celsius\n");
        for(i=lower;i<=upper;){
            printf("%d",i);
            printf("%6.1f\n",5.0*(i-32)/9);
            i+=2;
        }
    }
    else{
        printf("Invalid.");
    }
    return 0;
}
