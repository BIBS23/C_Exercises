#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[10],count=0,n,i,j;
    printf("Enter the size of the Array :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]==array[j]){
             count++;
             break;
            }
        }
    }
    printf("Duplicate is  %d",count);
    return EXIT_SUCCESS;
}