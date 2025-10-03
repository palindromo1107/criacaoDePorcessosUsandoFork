//bibliotecas

//printf
#include <stdio.h>

//boleanos
#include <stdbool.h>



/*função principal
retorno | nome*/
int main(){
    
    
    
    /*tipos de dados/variaveis
    tipo | nome */
    int numero;
    char letra;
    float numeroComPonto;
    
    //para usar valores boleanos é nessesario uma biblioteca
    bool boleano;
    //não é nessesario atribuir o valor das variaveis logo de cara( opcional )
    
    
    
    /*assim como no javascript const não pode mudar o valor
   const | tipo | nome | valor <= é nessesario atribuir o valor ao criar uma constante */
    const int constante = 2025;
    
    
    //string
    char string[]  = "galatixa";
    
    
    //exemplos
    numero = 1;
    letra = 'a';
    numeroComPonto = 2.6;
    boleano = true;

    
    
    /*função print para usar é nessesario uma biblioteca*/
    printf("avada cadabra!");
    
    
    
    /*inserir variaveis no print
    para cada tipo de dado existe um caractere especial*/
    
    //int
    printf("%i ou %d para numeros\n", numero, numero);
    
    //float
    printf("%f para float\n", numeroComPonto);
    
    //char
    printf("%c para letras e %s para string\n", letra, string);
    
    //boll
    printf("%d para boleanos\n", boleano);
    
    // \n
    printf("cria uma \n nova linha");
}
