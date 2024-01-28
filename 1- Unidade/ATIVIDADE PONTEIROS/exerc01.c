#include <stdio.h>

int main () {

int x, y, *p; // aqui iniciamos a declaração das variáveis x, y, e o ponteiro *p.
y = 0; // declaramos o valor inicial do y como sendo 0.
p = &y; // atribuimos a p o valor de y, ou seja, ele vai valer 0 também.
x = *p; // declaramos que x vai obter o valor do ponteiro p, até então sendo de valor 0.
x = 4; // agora realizamos uma nova atribuição do valor 4 na variável x, que agora passa a valer 4.
(*p) ++; // agora é atribuido +1 em y, pois o ponteiro está direcionado para o valor da variável y.
--x; // agora realizamos um decremento de -1 no valor de x. Sendo assim, ficando da seguinte forma (4 -1) = 3.
(*p) +=x; // // Adicionamos o valor de x (3) ao valor apontado por p (que é y). Agora o valor do ponteiro passará a ser 4 com essa incrementação.

}

