#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[20],evenArray[20],oddArray[20],n,i,j=0,k=0;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            evenArray[j]=array[i];
            j++;
        }
        else{
            oddArray[k]=array[i];
            k++;
        }
    }
    printf("\nEven numbers are :");
    for(i=0;i<j;i++){
        printf("%d\t",evenArray[i]);
    }
    printf("\nOdd numbers are :");
    for(i=0;i<k;i++){
        printf("%d\t",oddArray[i]);
        
    }
    return EXIT_SUCCESS;
}