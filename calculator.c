#include <stdio.h>
void input(double *num1,double *num2){
    printf("Enter first number: ");
    scanf("%lf",num1);
    printf("Enter second number: ");
    scanf("%lf",num2);
}
int main(){
  char op;
  double num1, num2, res;
  do{
    printf("Enter the operation you would like to perform (+, -, /, *) or 0 to exit: ");
    scanf(" %c",&op);

    switch(op){
        case '0':
            printf("Exiting program...\n");
            break;
        case '+':
            input(&num1, &num2);
            res = num1 + num2;
            printf("%lf \n",res);
            break;
        case '-':
            input(&num1, &num2);
            res = num1 - num2;
            printf("%lf \n",res);
            break;
        case '*':
            input(&num1, &num2);
            res = num1 * num2;
            printf("%lf \n",res);
            break;
        case '/':
            input(&num1, &num2);
            if(num2 == 0){
                printf("Zero division error!\n");
            }
            else{
                res = num1 / num2;
                printf("%lf \n",res);
            }
            break;
        default:
            printf("Invalid Operator!\n");
            return;
    }
  }
  while(op != '0');
return 0;
}
