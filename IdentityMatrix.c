#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[10][10],i,j,col,row,flag=0;
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
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(array[i][j]==1&&array[i][j]!=0)  {
                printf("%d",array[i][j]);
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        printf("Identity matrix");
    }
    else{
        printf("Not matrix");
    }
    return EXIT_SUCCESS;

}