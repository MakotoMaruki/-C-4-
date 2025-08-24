//
//  program6.c
//  
//
//  Created by Makoto Maruki on 2025/8/24.
//

#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    
    int add=a+b;
    int sub=a-b;
    int muti=a*b;
    int div=a/b;
    
    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,muti);
    printf("%d / %d = %d",a,b,div);

    return 0;
}
