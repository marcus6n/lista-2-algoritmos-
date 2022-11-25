#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int cont = 0;

    for (int i = 0; i < 5; i++) {
    
        printf("Informe o valor:");
        scanf("%d", &a);
        
        if(a < 0){
            cont = cont + 1;
        }

    }
    
    printf("A quantidade de numeros negativos digitados sao: %d", cont);

    return 0;
    
}
