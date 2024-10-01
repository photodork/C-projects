#include <stdio.h>
int main(){
    char unit;
    printf("Enter the unit of temperature: \n(F)Fahrenheit or  (C)Celsius \n");
    scanf("%c",&unit);

    if(unit == 'F' || unit == 'f'){
        float temp;
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f",&temp);
        float conv = ((temp - 32) * 5) / 9;
        printf("%f Celsius",conv);
    }
    else if(unit == 'C' || unit == 'c'){
        float temp;
        printf("Enter the temperature in Celsius: ");
        scanf("%f",&temp);
        float conv = (temp * 9/5) + 32;
        printf("%f Fahrenheit",conv);
    }
    else{
        printf("Invalid Input!");
    }
return 0;
}
