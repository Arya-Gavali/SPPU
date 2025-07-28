#include<Stdio.h>
int main ()

{
    int a, b;
    float c;
    int op; 

    printf("Enter 1st Number :");
    scanf("%d",&a);
    printf("Enter 2nd Number :");
    scanf("%d",&b);


    printf("Enter Your choice");
    scanf("%d",&op);

switch (op)
{
case 1:
    c=(a+b);
    printf("%f sum of a and b",c);
    break;

    case 2:
    c=(a-b);
    printf("%f sub of a and b",c);
    break;

    case 3:
    c=(a*b);
    printf("%0.4f product of a and b",c);
    break;

    case 4:
    if(b>0){
       
          c=(a/b);
          printf("%f division of a and b",c);
    }
    else{
   printf("2nd Number should be  greater than zero");
    }
    
    break;
default:
printf("Wrong Input ");
    break;
}


}