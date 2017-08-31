#include <stdio.h>
#include <stdlib.h>

int main(){
    const double pi = 3.14159;
    int r;
    scanf("%d", &r);
    printf("VOLUME = %.3lf\n", (4/3.0)*pi*r*r*r);
    return 0;
}