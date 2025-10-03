//impostações/bibliotecas
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

/*criação do metodo principal
retorno | nome */
int main(){
    
    //criação da variavel pid
  //tipo | nome
    pid_t pid;
    
    //criação do processo usando a variavel
    pid = fork(); //fork é uma função que retorna o pid que seria o id do processo
    
    //caso o processo não seja criado
    if (pid < 0){
        fprintf(stderr, "fork failed");
        
        //encerrar o programa
        exit(-1);
        
        //processo filho pid é igual a 0
    } else if (pid == 0){
        
        // %d usado para incerir uma variavel do tipo double no texto
        // \n quebra de linha
        // getpid() variavel que ira ser incerida e pega o pid/id do processo
        printf("[child process] pid: %d\n", getpid());
        execlp("/bin/ls", "ls", NULL);
        
        //processo pai o numero é maior e diferente que 0
    } else {
        
        // imprime o pid do pai
        printf("[parent process] pid: %d. waiting to child finish\n", getpid());
        
        //espera ate o processo filho acabar
        wait(NULL);
        
        //apos isso ele finaliza
        printf("[parent process] pid: %d. child complete\n", getpid());
        exit(0);
    }
    
    //é necessario haver um retorno caso o metodo retorne algo
    return 0;
}