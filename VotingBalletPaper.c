#include<stdio.h>
#include<stdlib.h>
int main(void){
    int count=0,i,vote,votes,option,c1,c2,c3,c=0,a=0,b=0,roc;
    for(i=0;i<3;i++){
        printf("\nChoose your option\n1. For vote\n2. For Result\n3. Exit\n");
        scanf("%d",&option);
            switch(option){
                case1 :
                    printf("Choose Your Candidate :\n1\n2\n3\n");
                    scanf("%d",&vote);
                    if(vote==1){
                        c1=a+1;
                        a++;
                    }
                    else if(vote==2){
                        c2=b+1;
                        b++;
                    }
                    else if(vote==3){
                        c3=c+1;
                        c++;
                    }
                break;
                case 2 :
                    printf("Choose the candidate  :-");
                    printf("\n1. For candidate 1 \n 2. For candidate 2\n 3. For candidate 3\n");
                    scanf("%d",&roc);
                    if(roc==1){
                        printf("No.of votes for candidate 1 is : %d",c1);
                    }
                    else if(roc==2){
                        printf("No.of votes for candidate 2 is : %d",c2);
                    }
                    else if(roc==3){
                        printf("No.of votes for candidate 3 is : %d",c3);
                    }
                    else{
                        printf("Wrong");
                    }
                break;
                case 3 :
                    printf("Thank You");
                break;
                default :
                    printf("Invalid");
                break;                    
            } 
    }       
  return EXIT_SUCCESS;
}