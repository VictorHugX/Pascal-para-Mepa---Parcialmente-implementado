#include <string.h>

#define TAM_TSIMB 100
#define TAM_PSEMA 100

int TOPO_TSIMB 	   		= 0;
int TOPO_PSEMA 	   		= 0;
int NRO_POS_LOCAIS 		= 10000;//ultimo endereco alocado
int NIVEL_CORR 	   		= 0;
int ROTULO 				= 0;
int CONTA_VARS 	   		= 0;
int PRE_READ 	   		= 0;
int PRE_WRITE 	   		= 0;
int PRE_SIMB 	   		= 0;
int numero_da_linha 	= 1;
int POS_SIMB			= 0;
int aux					= 0;

FILE *arq_mep;

char lexema[30];

//DEFINIÇÃO DA ESTRUTURA DA TABELA DE SÍMBOLOS
typedef struct {
	char id[30]; // lexema do identificador
	int  nivel; //escopo . local ou global
	int  endereco; //endereco de memoria da variável
	char tipo;//i=integer ou b=boolean ou ---
	char cat;//t=tipo ou c=constante ou p=procedimento ou v=variavel ou ---    
}TabelaSimbolos;

TabelaSimbolos TSIMB[TAM_TSIMB], elem_tab;

//DEFINIÇÃO DA ESTRUTURA DA PILHA SEMANTICA
int PSEMA[TAM_PSEMA];

//Função que BUSCA um simbolo na tabela de símbolos. 
int busca_simbolo(char *ident){
	int i;

	for(i = TOPO_TSIMB - 1; i >= 0; i--){
		if(strcmp(TSIMB[i].id, ident) == 0)// strcmp retorna ZERO quando as duas strings são iguais.
		  return i; 
	}

	return -1;
}


//INSERE SIMBOLO NA TABELA DE SIMBOLOS.
void insere_simbolo(TabelaSimbolos *elem){
	if(TOPO_TSIMB == TAM_TSIMB){
		printf("OVERFLOW - tabela de simbolos");
		exit(1);
	}else{
		POS_SIMB = busca_simbolo(elem->id);
		
		if( (POS_SIMB != -1) && (TSIMB[POS_SIMB].nivel == NIVEL_CORR) ){
			printf("Identificador [%s] ja declarado!",elem->id);
			exit(1);	
		}else{
			TSIMB[TOPO_TSIMB] = *elem;
			TOPO_TSIMB++;
		}
	}
}

//INSERE VARIAVEL NA TABELA DE SIMBOLOS.
void insere_variavel(char *ident){
	strcpy(elem_tab.id, ident);
	elem_tab.cat = 'v';
	elem_tab.nivel = NIVEL_CORR;
	elem_tab.endereco = NRO_POS_LOCAIS++;
	elem_tab.tipo = 'i';
	insere_simbolo(&elem_tab);
}

//ELIMINA UMA DETERMINADA QUANTIDADE DE SIMBOLOS DA TABELA DE SIMBOLOS.
void elimina_simbolos(int qtdade_de_simbolos){
	if( (TOPO_TSIMB = qtdade_de_simbolos) < 0 ){
		printf("UNDERFLOW - tabela de simbolos");
		exit(1);
	}else{
		TOPO_TSIMB-= qtdade_de_simbolos;
	}
}

//ESSA FUNÇÃO EVITA QUE SEJAM CRIADOS SIMBOLOS COM ALGUNS NOMES RESERVADOS.
void inic_estruturas(){
	//TIPO integer.
	strcpy(elem_tab.id,"integer");
	elem_tab.cat = 't';
	elem_tab.nivel = -1;
	insere_simbolo(&elem_tab);
	
	//TIPO boolean.
	strcpy(elem_tab.id,"boolean");
	elem_tab.cat = 't';
	elem_tab.nivel = -1;
	insere_simbolo(&elem_tab);

	//CONSTANTES true E false.
	strcpy(elem_tab.id,"true");
	elem_tab.cat = 'c';
	elem_tab.nivel = -1;
	insere_simbolo(&elem_tab);

	strcpy(elem_tab.id,"false");
	elem_tab.cat = 'c';
	elem_tab.nivel = -1;
	insere_simbolo(&elem_tab);

	//PROCEDIMENTOS write E read.
	strcpy(elem_tab.id,"write");
	elem_tab.cat = 'p';
	elem_tab.nivel = -1;
	insere_simbolo(&elem_tab);

	strcpy(elem_tab.id,"read");
	elem_tab.cat = 'p';
	elem_tab.nivel = -1;
	insere_simbolo(&elem_tab);
}

void empilha(int n){
	if(TOPO_PSEMA == TAM_PSEMA){
		printf("OVERFLOW - pilha semantica");
		exit(1);
	}else{
	    PSEMA[TOPO_PSEMA] = n;
		TOPO_PSEMA++;
	}
}

int desempilha(){
	TOPO_PSEMA--;

	if(TOPO_PSEMA < 0){
		printf("UNDERFLOW - pilha semantica");
		exit(1);
	}else{
	    return PSEMA[TOPO_PSEMA];
	}
}
