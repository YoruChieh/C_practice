#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int **a;

    int i;

    a = (int**)malloc(2 * sizeof(int*)); // Allocate memory for 2 pointers to int
    for(i=0;i<2;i++){
        a[i] = (int*)malloc(3 * sizeof(int));
    } // Allocate memory for 3 integers for each pointer
    
    a[0][0] = 1; 
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;

    for(i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            printf("a[%d][%d] = ", i, j);
            printf("%d\n",a[i][j]);
        }
    }
    
    for(i=0;i<2;i++){
        free(a[i]);
    }
    free(a);// Free the allocated memory for each row and then for the array of pointers
    
    return 0;
}