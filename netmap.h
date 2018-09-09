//Tipo do NetMap (uma estrutura com uma lista de roteadores e uma lista de terminais)
typedef struct netmap NetMap;

//O NetMap global para ser usado nas outras bibliotecas e na main
NetMap* netMap;

/*Conta quantos roteadores são da operadora de entrada
* inputs: a string que contenha o nome da operadora
* output: quantidade de roteadores da operadora
* pre-condicao: 
* pos-condicao: 
*/
int FrequenciaOperadora (char* operadora);

/*Conta quantos terminais estão na localizacao de entrada
* inputs: a string que contenha uma localizacao
* output: quantidade de terminais naquela regiao
* pre-condicao: 
* pos-condicao: 
*/
int FrequenciaTerminal (char* localizacao);

/*Imprime NetMap
* inputs: nenhum
* output: o NetMap em grafo
* pre-condicao: nenhuma
* pos-condicao: nenhuma
*/
void ImprimeNetMap ();