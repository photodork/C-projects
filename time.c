#include <stdio.h>
#include <time.h>
#include <stdbool.h>
bool isLeap(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year%400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}
int main(){
    time_t t = time(NULL);
    struct tm *l = localtime(&t);
    int dn = l->tm_yday;
    int year = l->tm_year + 1900;
    bool ye = isLeap(l->tm_year);
    double n;
    if(ye){
        n = (dn / 366.0) * 100;
    }
    else{
        n = (dn / 365.0) * 100;
    }
    int max =100;
    printf("Year progress bar:");
    printf("[");
    for(int i = 1; i<=100; i++){
        if (i<=n){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("]");
    printf("\n%.1f%%",n);
return 0;
}
