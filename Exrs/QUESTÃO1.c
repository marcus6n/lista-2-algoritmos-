#include <stdio.h>
#include <stdlib.h>

int main(){

    int senha;
    int senhaCorreta = 4108;

    for (int i = 0; i < 3; i++)
    {
    
        printf("Informe a senha:");
        scanf("%d", &senha);
        
        if(senha == senhaCorreta){
        
            printf("Senha Valida");

        }
        
    }
 
    printf("Cartao Bloqueado!");

    return 0;

}