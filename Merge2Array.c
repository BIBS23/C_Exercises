#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array1[20],array2[20],array[100],l,i=0,j,k=0,n1,n2,n3;
    printf("Enter the size of Array1 :");
    scanf("%d",&n1);
    printf("Enter the size of Array2 :");
    scanf("%d",&n2);
    printf("\nEnter the elements in Array1 :");
    for(i=0;i<n1;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the elements in Array2 :");
    for(j=0;j<n2;j++){
        scanf("%d",&array2[j]);
    }
    n3=n1+n2;
    printf("Your merged array is : \n");
    for(k=0;k<n1;k++){
        array[k]=array1[i];
        i++;
    }
    for(k=n1;k<n3;k++){
        array[k]=array2[j];
        j++;
    }
    for(k=0;k<n3;k++){
        printf("%d",array[k]);
    }

    return EXIT_SUCCESS;
}