#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[64];
    double salary, sales;
    scanf("%s %lf %lf", nome, &salary, &sales);
    printf("TOTAL = R$ %.2lf\n", salary+sales*0.15);
    return 0;
}