#ifndef TERMINAL_H_
#define TERMINAL_H_
//Tipo do terminal (sugiro uma estrutura com nome, localizacao e roteador)
typedef struct terminal Terminal;

//Tipo da celula da lista de terminais; (deve conter prox e tipo do terminal);
typedef struct celTerm CelTerm;

//Tipo lista de terminais; (essa ficaria boa sem sentinela ai tirariamos essa def);
typedef struct lsterm LsTerm;

/*Insere um terminal na lista de terminais do NetMap na ultima posicao
* inputs: ponteiro para o tipo Terminal
* output: nenhum
* pre-condicao: terminal existe
* pos-condicao: terminal inserido no netmap 
*/
void CadastraTerminal (Terminal* term);

/*Conecta um terminal a um roteador
* inputs: ponteiro para o tipo Terminal e para o tipo Roteador
* output: nenhum
* pre-condicao: terminal e roteador existem
* pos-condicao: terminal conectado no roteador
*/
void ConectaTerminal (Terminal* term, Roteador* rot);

/*Desconecta um terminal de um roteador
* inputs: ponteiro para o tipo Terminal
* output: nenhum
* pre-condicao: terminal existe e esta conectado a algum roteador
* pos-condicao: terminal desconectado do roteador
*/
void DesconectaTerminal (Terminal* term);

/*Remove um terminal da lista de terminais do netmap
* inputs: ponteiro para o tipo Terminal
* output: nenhum
* pre-condicao: terminal existe
* pos-condicao: terminal removido do netmap
*/
void RemoveTerminal (Terminal* term);

/*Verifica se e possivel enviar dados para outro terminal
* inputs: ponteiro para dois tipos Terminal
* output: SIM se for possivel e NAO, caso contrario
* pre-condicao: terminais existem
* pos-condicao: terminais não sao modificados e foram feitas as verificacoes
*/
char* EnviarPacoteDados (Terminal* term1, Terminal* term2);

#endif /* TERMINAL_H_ */
