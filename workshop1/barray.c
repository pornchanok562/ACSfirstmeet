#include <stdio.h>
int main (){
    int arr[3][3],i,j,max=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d " ,arr[i][j]);
        }
        printf("\n");
    }
    printf("The maximum value in the matrix is: %d" , max);
}
