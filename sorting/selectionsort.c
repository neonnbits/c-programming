#include <stdio.h>
#include <stdlib.h>

void printarray(int A[], size_t size){
    for(size_t i=0; i<size; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(void){
    int A[] = {45,23,65,12,3};
    size_t size = sizeof(A)/sizeof(int);
    for(size_t i=0; i<size-1; i++){
        int index =i;
        for(size_t j=i+1; j<size; j++){
            if(A[index] > A[j]){
                index = j;
            }
        }
        if(index != i){
            int temp = A[i];
            A[i] = A[index];
            A[index] = temp;
        }
    }

    printarray(A, size);
    return 0;
}

