/*
    all numeric operation
*/
#include<stdio.h>
int num1,num2,result;
// Arithmetic   
    void add(); void sub(); void multi(); void div();

int main() {

        int choois,Achoois;

            printf("1.Arithmetic Operation :");
            scanf("%d",&choois);

                switch (choois)
                {
                    case 1:

                            printf("\n1.addition \n2.subtection \n3.multiplication \n4.divition \n:");
                            scanf("%d",&Achoois);

                                switch(Achoois)
                                {
                                    case 1:
                                        add();
                                        main();
                                        break;

                                   case 2:
                                        sub();
                                        main();
                                        break;

                                    case 3:
                                        multi();
                                        main();
                                        break; 

                                    case 4:
                                        div();
                                        main();
                                        break;

                                    default:
                                        break;
                                }
                     break;
                    
                    default:
                        break;
                }
}
void add() {
  
    printf("first number :");
        scanf("%d",&num1);
    printf("second number :");
        scanf("%d",&num2);

    result = num1 + num2;

            printf("%d + %d = %d \n\n",num1,num2,result);
}
void sub() {

    printf("first number :");
        scanf("%d",&num1);
    printf("second number :");
        scanf("%d",&num2);

        result = num1 - num2;

            printf("%d - %d = %d\n\n",num1,num2,result);
        
}
void multi() {

     printf("first number :");
        scanf("%d",&num1);
    printf("second number :");
        scanf("%d",&num2);

        result = num1 * num2;

            printf("%d * %d = %d\n\n",num1,num2,result);
}
void div() {
    
    printf("first number :");
        scanf("%d",&num1);
    printf("second number :");
        scanf("%d",&num2);

        result = num1 / num2;

            printf("%d / %d = %d\n\n",num1,num2,result);
}