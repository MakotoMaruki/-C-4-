//
//  program8.c
//  
//
//  Created by Makoto Maruki on 2025/8/24.
//


#include <stdio.h>
#include <math.h>
int main(void){
    double x,y;
    scanf("%lf",&x);
    if(x>=0){
        y=sqrt(x);
    }
    else{
        y=(pow((x+1),2))+2*x+1/x;
    }
    printf("f(%.2lf) = %.2lf",x,y);
}
