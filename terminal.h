#ifndef TERMINAL_H_
#define TERMINAL_H_
//Tipo do terminal (sugiro uma estrutura com nome, localizacao e roteador)
typedef struct terminal Terminal;

//Tipo da celula da lista de terminais; (deve conter prox e tipo do terminal);
typedef struct celTerm CelTerm;

//Tipo lista de terminais; (essa ficaria boa sem sentinela ai tirariamos essa def);
typedef struct lsterm LsTerm;

/*Insere um terminal na lista de terminais do NetMap na ultima posicao
* inputs: nome do terminal e localizacao
* output: nenhum
* pre-condicao: terminal existe
* pos-condicao: terminal inserido no netmap 
*/
void CadastraTerminal (char* nomeTerm, char* localizacao);

/*Conecta um terminal a um roteador
* inputs: nome do terminal e do roteador
* output: nenhum
* pre-condicao: terminal e roteador existem
* pos-condicao: terminal conectado no roteador
*/
void ConectaTerminal (char* nomeTerm, char* nomeRot);

/*Desconecta um terminal de um roteador
* inputs: nome do terminal
* output: nenhum
* pre-condicao: terminal existe e esta conectado a algum roteador
* pos-condicao: terminal desconectado do roteador
*/
void DesconectaTerminal (char* nomeTerm);

/*Remove um terminal da lista de terminais do netmap
* inputs: nome do terminal
* output: nenhum
* pre-condicao: terminal existe
* pos-condicao: terminal removido do netmap
*/
void RemoveTerminal (char* nomeTerm);

/*Verifica se e possivel enviar dados para outro terminal
* inputs: nome do terminal origem e destino, respectivamente
* output: SIM se for possivel e NAO, caso contrario
* pre-condicao: terminais existem
* pos-condicao: terminais não sao modificados e foram feitas as verificacoes
*/
char* EnviarPacoteDados (char* nomeTerm1, char* nomeTerm2);

/*Conta quantos terminais estão na localizacao de entrada
* inputs: a string que contenha uma localizacao
* output: quantidade de terminais naquela regiao
* pre-condicao: nenhum
* pos-condicao: nenhum
*/
int FrequenciaTerminal (char* localizacao);

#endif /* TERMINAL_H_ */
