// int main(void) {
// int x, *p; 
// x = 100;
// p = x;
// printf("Valor de p = %p\tValor de *p = %d", p, *p);
// }


// a ) Mensagem de advertência, pois a declaração foi feita de forma incorreta.
// b ) Pois o ponteiro nesse código não se direciona para nenhum endereço em específico. Ficando assim utilizado de forma incorreta, sendo utilizada para realizar uma operação de valor. Onde no caso do ponteiro, sendo indevida a sua utilização para atribuição de conteúdo de valores inteiros.
// c) Não executa de forma bem sucedida. Precisa de manutenção no código.
/* d) 

    #include <stdio.h>

    int main(void) {
    int x, *p; 
    x = 100;
    p = &x;
    printf("Valor de p = %p\tValor de *p = %d", p, *p);
    return 0;
}

*/

// e) Agora sim, a execução foi muito bem sucedida.




