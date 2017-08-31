#include <stdio.h>
#include <stdlib.h>

int main(){
    int nro_pecas1, cod_pecas1, nro_pecas2, cod_pecas2;
    double valor_peca1, valor_peca2;
    scanf("%d %d %lf", &cod_pecas1, &nro_pecas1, &valor_peca1);
    scanf("%d %d %lf", &cod_pecas2, &nro_pecas2, &valor_peca2);
    printf("VALOR A PAGAR: R$ %.2lf\n", 
           (nro_pecas1*valor_peca1)+(nro_pecas2*valor_peca2));
    return 0;
}