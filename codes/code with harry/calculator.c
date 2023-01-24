#include <stdio.h>
#include <stdlib.h>
int main(){
     double n1 ,n2;    char operator ;
      printf("enter operator: \n");
     scanf("%c" , &operator);
     
    printf("enter 1st number: \n");
     scanf("%lf" , &n1);
   
    printf("enter 2nd number: \n");
     scanf("%lf" , &n2);
  switch (operator){
       case '+' :
          printf("%.2lf + %.2lf = %.2lf", n1, n2 , n1+n2);
          break;
       case '-' :
          printf("%.2lf - %.2lf = %.2lf", n1, n2 , n1-n2);
          break;
       case '*' :
          printf("%.2lf * %.2lf = %.2lf", n1, n2 , n1*n2);
          break;
        case '/' :
          printf("%.2lf / %.2lf = %.2lf", n1, n2 , n1/n2);
          break;
        default :
          printf("invalid operand");

  }

    return 0;
}
