#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[10][10],i,j,col,row;
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
    printf("Your Array is :\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\t%d",array[i][j]);
        }
        printf("\n");
    }
    printf("Your Transpose Array is :\n");
   for(i=0;i<col;i++){
       for(j=0;j<row;j++){
           printf("\t%d",array[j][i]);
       }
       printf("\n");
   }
    return EXIT_SUCCESS;

}