#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,omaior,maior_ab;
    scanf("%d %d %d", &a,&b,&c);
    maior_ab = (a+b+abs(a-b))/2;
    omaior = (maior_ab+c+abs(maior_ab-c))/2;
    printf("%d eh o maior\n", omaior);
    return 0;
}