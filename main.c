#include <stdio.h>
#include <stdlib.h>
#include <string.h>


verificacao(){
   if(resposta = true){
        
   }
}
int main() {
    int numero;
    
    while (1) {  
        printf("Digite um número (0 para parar): ");
        scanf("%d", &numero);
        
        if (numero == 0) {
            break; 
        }
        
        printf("Você digitou: %d\n", numero);
        jogar();
    }
    
    printf("Programa encerrado.\n");
    pontuacao();
    
    return 0;
}
