#include <stdio.h>


int main(){

char operator;
double num1;
double num2;
double result;

printf("\nwhat operator  (+ - * /):" );
scanf("%c", &operator);

printf("enter num 1:" );
scanf("%lf", &num1);

printf("enter num 2:" );
scanf("%lf", &num2);




    switch(operator){
    case '+':
       result = num1 + num2;
       printf("\nresult %lf", result);
       break;
    case '-':
       result = num1 - num2;
       printf("\nresult %lf", result);  
       break;
    case '*':
       result = num1 * num2;
       printf("\nresult %lf", result);  
       break;
    case '/':
       result = num1 / num2;
       printf("\nresult %lf", result);
       break;    
    default:
      printf("\nis not valid", operator);
    }
   return 0;
}