//Tipo do roteador, um item da celula (deve conter nome, operadora e ponteiro pra lista de roteadores na qual se conecta)
typedef struct roteador Roteador;

//Tipo da celula da lista de roteadores (deve conter tipo do roteador e prox)
typedef struct celRot CelRot;

//Tipo da lista de roteadores; (sugiro com sentinela pro retorno da maioria das funcoes ser void);
typedef struct lsRot lsRot;

/*Insere um roteador na lista de roteadores do NetMap na ultima posicao
* inputs: ponteiro para o tipo Roteador
* output: nenhum
* pre-condicao: roteador existe
* pos-condicao: roteador inserido no netmap 
*/
void CadastraRoteador (Roteador* rot);

/*Remove um roteador na lista de roteadores do NetMap
* inputs: ponteiro para o tipo Roteador
* output: nenhum
* pre-condicao: roteador existe
* pos-condicao: roteador removido do netmap 
*/
void RemoveRoteador (Roteador* rot);

/*Conecta um roteador ao outro
* inputs: ponteiro para 2 tipos roteador
* output: nenhum
* pre-condicao: roteadores de entrada existem
* pos-condicao: roteador1 inserido na lista de roteadores do roteador2 e vice-versa
*/
void ConectaRoteadores (Roteador* rot1, Roteador* rot2);

/*Desconecta um roteador do outro
* inputs: ponteiro para os 2 tipos roteador
* output: nenhum
* pre-condicao: roteadores de entrada existem e estao conectados
* pos-condicao: roteador1 removido da lista de roteadores do roteador2 e vice-versa
*/
void DesconectaRoteadores (Roteador* rot1, Roteador* rot2);