#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A[] = {45,23,65,12,3};
    size_t size = sizeof(A)/sizeof(int);
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(A[i] > A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        printf("%d ",A[i]);
    }

    printf("\n");
    return 0;
}