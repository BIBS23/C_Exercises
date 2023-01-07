#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[12],i,j,n,min,max;
    printf("enter the size of array :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    min=max=array[0];
    for(i=0;i<n;i++){
        if(array[i]>max){   
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("\nmax num : %d",max);
    printf("\nmin num : %d",min);
    return EXIT_SUCCESS;
}
