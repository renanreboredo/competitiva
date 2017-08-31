#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, hours;
    double hour_price;
    scanf("%d %d %lf", &number, &hours, &hour_price);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", hours*hour_price);
    return 0;
}