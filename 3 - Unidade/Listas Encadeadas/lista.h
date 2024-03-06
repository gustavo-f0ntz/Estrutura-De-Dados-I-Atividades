
typedef struct lista Lista;
/*
Funcao que inicializa a lista
atribuindo NULL
Retorna lista inicializada
*/

Lista * lst_cria(void);

/*
Funcao que insere elemento inteiro na lista
argumentos:
    Lista * lista;
    int valor: valor inteiro a ser inserido
    
Retorno:
    Nova lista
*/

// Funcao que insere elemento inteiro na lista
Lista * insere_elementos(Lista * lista, int valor);

// Funcao que imprime os elementos da lista
void lst_imprime(Lista * l);

// Funcao que verifica se a lista esta vazia
int lst_vazia(Lista * l);

// Funcao que busca um elemento na lista
Lista * lst_busca(Lista * l, int v);

// Funcao que retira um elemento da lista
Lista * lst_retira(Lista * l, int v);


