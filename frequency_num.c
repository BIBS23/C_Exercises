#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[10],i,count=1,j,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]==array[j]){
                count=count+1;
            }
        }
        printf("\nFrequency of %d is  : %d",array[i],count);
    }

    return EXIT_SUCCESS;
}