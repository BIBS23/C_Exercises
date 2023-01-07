#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[10][10],i,j,col,row,max;
    printf("Enter the size of the Row :");
    scanf("%d",&row);
    printf("Enter the size of the Col :");
    scanf("%d",&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter [%d][%d] :-",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Your Array is :");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    max=array[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(array[i][j]>max){
                max=array[i][j];
            }
        }
    }
    printf("\nLargerst Element is : %d",max);
    return EXIT_SUCCESS;

}