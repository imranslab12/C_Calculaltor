#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char operator;
double num1;
double num2;
double result;

printf("\n what operator  + - * /" );
scanf("%lf", &operator);

printf("\n enter num 1" );
scanf("%lf", &num1);

printf("\n enter num 2" );
scanf("%lf", &num2);




    switch(operator){
    case '+':
    result = num1 + num2;
    printf("\n result", result);
    break;
    case '-':
    result = num1 - num2;
    printf("\n result", result);  
    break;
    case '*':
    result = num1 * num2;
    printf("\n result", result);  
    break;
    case '/':
    result = num1 / num2;
    printf("\n result", result);
    break;    
    default:
      printf("%c is not valid", operator);

    }
   return 0;
}