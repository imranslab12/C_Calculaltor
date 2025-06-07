#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char operator;
double num1;
double num2;
double result;




printf("\n what operator  + - * /" );
scanf("%c", &operator);

printf("\n enter num 1" );
scanf("%c", &num1);

printf("\n enter num 2" );
scanf("%c", &num2);



double calculateVal(num1, num2){
    scanf("%d", &operator)
    switch(operator)
    case '+':
    result = num1 + num2;
    printf("\n result");

    scanf("%d", &operator)
    switch(operator)
    case '-':
    result = num1 - num2;
    printf("\n result");  

    scanf("%d", &operator)
    switch(operator)
    case '*':
    result = num1 * num2;
    printf("\n result");  

    scanf("%d", &operator)
    switch(operator)
    case '/':
    result = num1 / num2;
    printf("\n result");    
}