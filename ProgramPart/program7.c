//
//  program7.c
//  
//
//  Created by Makoto Maruki on 2025/8/24.
//

#include <stdio.h>
int main(void){
    double x,y;
    scanf("%lf",&x);
    if(x!=0){
        y=1/x;
    }
    else{
        y=0;
    }
    printf("f(%.1f) = %.1f",x,y);
}
