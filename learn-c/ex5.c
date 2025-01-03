#include <stdio.h>

int main(){
    const int n =10;
    register int a = 20;  
    int *ptr = &a;  
    if(n<10) goto error;
    printf("%d\n", n+1);

    error:
        printf("error\n");
}