#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[12],i,n;
    printf("Enter the size of the Array :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=n-1;i>=n;i--){
        printf("%d",array[i]);
    }
    return EXIT_SUCCESS;
}