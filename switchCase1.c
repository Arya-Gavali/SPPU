#include<stdio.h>
int main(){
    char op;
    int a=0 ,b=0;
    float c;

    printf("Enter 1st Number :");
    scanf("%d",&a);

      printf("Enter 2nd Number :");
    scanf("%d",&b);


// printf("Enter the choice (+,-,*):");
// scanf(" %c ",&op);

 printf("Enter the operator (+, -, *): ");
    scanf(" %c", &op);

    if(op == '+'){
        c=(a+b);
        printf("Sum of a and b :%f",c);
    }
    else if (op == '-')
    {
          c=(a-b);
        printf("Sum of a and b :%f",c);
    }
    else if (op == '*')
    {
        c=(a*b);
        printf("Sum of a and b :%f",c);
    }
    else
    {
        printf("Invalid option");
    }
    return 0;
}