#include<stdio.h>
#include<stdlib.h>
int main(void){
    int array[10],n,i,j,flag=0;
    printf("Enter the size of the Array :");
    scanf("%d",&n);
    printf("Enter the Elements :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]==array[j]){
             flag=1;
            }
        }
    }
    if(flag==0){
        printf("%d",array[i]);
    }
   
    return EXIT_SUCCESS;
}
  