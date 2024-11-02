#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bord();
int main()
{
    bord();

        char ch[10];
        int random,unumber,at=0;

       
            srand(time(0));
            random = (rand()%100) +1;
        
            
                printf("\nEnter Your name :)\n~>:");
                scanf("%s",&ch);

            printf("enter number and hit enter button \n->:");
            scanf("%d",&unumber);
       

    while(random!=unumber)
    {
        if(random>unumber){
           
            at++;
            printf("\nMy number is greater than  [%d]\n",unumber);
            printf("enter number ->:");
            scanf("%d",&unumber);

        }

        else if(random<unumber){   
            
            at++;
            printf("\nMy number is less than  [%d]\n",unumber);
              printf("enter number ->:");
            scanf("%d",&unumber);

        }

        if(random==unumber)  {
            
            printf("\n Well Done %s! it's {%d}\n",ch,random);
            printf("complit to %d atamt\n\n",at);
            
        }
    } 

            if(at>0 && at<7){
                
                printf("You play best !");
            }
            else if(at>6 && at<11){
                
                printf("You play good :)");
            }
            else{
                
                printf("try to play good :(");
            }
             
}     
void bord()
{
    printf("==================================\n");
    printf("|   Wellcome to guessing game !  |\n");
    printf("==================================");
}

