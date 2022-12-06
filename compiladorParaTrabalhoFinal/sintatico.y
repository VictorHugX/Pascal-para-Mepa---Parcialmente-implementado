%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#include "utils.c"
#include "lexico.c"


void yyerror(char *msg);
int yywrap();
%}

%expect	1
%start programa

%token	S_IF
%token	S_THEN
%token	S_ELSE
%token 	S_PROGRAM
%token	S_IDENTIF
%token	S_PONTOVG
%token	S_VIRGULA
%token	S_MAIOR
%token	S_PONTO
%token	S_DIV
%token	S_WRITE
%token	S_DO
%token	S_MAIS
%token	S_MENOR
%token	S_NOT
%token	S_ABREPAR
%token	S_MAIGUAL
%token	S_BEGIN
%token	S_NUMERO
%token	S_VEZES
%token	S_OR
%token	S_DOISPTOS
%token	S_DIFERENTE
%token	S_ATRIBUI
%token	S_WHILE
%token	S_MEIGUAL
%token	S_AND
%token	S_READ
%token	S_VAR
%token	S_END
%token	S_MENOS
%token	S_IGUAL
%token	S_FECHAPAR

%%
programa
	: S_PROGRAM S_IDENTIF S_PONTOVG 
	  	{ fprintf(arq_mep, "%s\n","INPP"); } 
	  bloco S_PONTO
	  	{ fprintf(arq_mep, "%s\n","PARA"); }
 	  	{ fprintf(arq_mep, "%s\n","FIM"); } 
;

bloco
	:variaveis corpo
;

variaveis
	: /* vazio */
	| S_VAR
		{ CONTA_VARS = 0; }
	  declaracoes_de_vars
		{ fprintf(arq_mep, "%s %s %d\n","AMEM","",CONTA_VARS); }
;

declaracoes_de_vars
	: declaracoes_de_vars
	lista_de_identificadores S_DOISPTOS S_IDENTIF S_PONTOVG
	| lista_de_identificadores S_DOISPTOS S_IDENTIF S_PONTOVG
;

lista_de_identificadores
	: lista_de_identificadores S_VIRGULA S_IDENTIF
		{ insere_variavel(lexema); CONTA_VARS++; }
	| S_IDENTIF
		{ insere_variavel(lexema); CONTA_VARS++; }
;

corpo
	: S_BEGIN sequencia_comandos S_END
;

sequencia_comandos
	: sequencia_comandos S_PONTOVG comando_sem_rotulo
	| comando_sem_rotulo
;

comando_sem_rotulo
	: /* vazio */
	| chamada_comando_escrita
	| chamada_comando_leitura
	| atribuicao
	| composto
	| condicional
	| repetitivo
;

chamada_comando_escrita
	: S_WRITE 
	S_ABREPAR lista_de_expressoes S_FECHAPAR
;

chamada_comando_leitura
	: S_READ
	S_ABREPAR lista_de_variaveis S_FECHAPAR
;

lista_de_expressoes
	: /* vazio */
	| lista_de_expressoes S_VIRGULA 
	  expressao
		{ fprintf(arq_mep, "%s\n","IMPR"); }
	| expressao
		{ fprintf(arq_mep, "%s\n","IMPR"); }
;

lista_de_variaveis
	: /* vazio */
	| lista_de_variaveis S_VIRGULA 
		{ fprintf(arq_mep, "%s\n","LEIT"); }
	  S_IDENTIF
	  	{ 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
                		printf("Variável [%s] não declarada.\n",lexema);
                		exit(1);
            }
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
	  	
	| { fprintf(arq_mep, "%s\n","LEIT"); }
	  S_IDENTIF
		{ 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){

                		printf("Variável [%s] não declarada.\n",lexema);
                		exit(1);
            }
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
;

atribuicao
	: S_IDENTIF
	  	{ 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
                	printf("Identificador [%s] não declarado\n",lexema);
                	exit(1);
            }
	  		else{
	  		  empilha(TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}	
	  S_ATRIBUI expressao
		{
			aux = desempilha();		  	
			fprintf(arq_mep, "%s %s %d\n", "ARMZ", "", aux);
		} 
;

composto
	:S_BEGIN lista_comandos_sem_rotulo S_END
;

lista_comandos_sem_rotulo
	: lista_comandos_sem_rotulo S_PONTOVG comando_sem_rotulo
	| comando_sem_rotulo
;

condicional
	:S_IF
	 expressao{
	 	ROTULO++;
	 	empilha(ROTULO);
	  	fprintf(arq_mep, "DSVF L%d\n",ROTULO); 
	 }
	 	
	 S_THEN
	 comando_sem_rotulo
	 alternativa_cond
	 {
	 	aux=desempilha();
	 	fprintf(arq_mep,"L%d:NADA\n",aux);
	 }
	 	
;

alternativa_cond
	:/* vazio */ 
	| S_ELSE {
		aux=desempilha();
		ROTULO++;
		empilha(ROTULO);
		fprintf(arq_mep,"DSVS L%d\n",ROTULO);
		fprintf(arq_mep,"L%d:NADA\n",aux);
	}
		
	  comando_sem_rotulo
;

repetitivo
	:S_WHILE{
		ROTULO++;
		empilha(ROTULO);
		fprintf(arq_mep,"L%d:NADA\n",ROTULO);
	}
	 		
	 expressao{
	 	ROTULO++;
	 	empilha(ROTULO);
	 	fprintf(arq_mep,"DSVF L%d\n",ROTULO);
	 }
	 	
	 S_DO 
	 
	 comando_sem_rotulo{
	 	aux = desempilha(); //2
	 	fprintf(arq_mep,"DSVS L%d\n",desempilha());//1
	 	fprintf(arq_mep,"L%d:NADA\n",aux);
	 }
	 
	 	
;

expressao
	: expressao_simples S_IGUAL expressao_simples 
		{ fprintf(arq_mep, "%s\n","CMIG"); } 
	| expressao_simples S_DIFERENTE expressao_simples
		{ fprintf(arq_mep, "%s\n","CMDG"); } 
	| expressao_simples S_MENOR	expressao_simples
		{ fprintf(arq_mep, "%s\n","CMME"); } 
	| expressao_simples S_MAIOR	expressao_simples
		{ fprintf(arq_mep, "%s\n","CMMA"); } 
	| expressao_simples S_MEIGUAL	expressao_simples
		{ fprintf(arq_mep, "%s\n","CMEG"); } 
	| expressao_simples S_MAIGUAL 	expressao_simples
		{ fprintf(arq_mep, "%s\n","CMAG"); } 
	| expressao_simples
;

expressao_simples
	: expressao_simples S_MAIS termo
		{ fprintf(arq_mep, "%s\n","SOMA"); } 
	| expressao_simples S_MENOS termo
		{ fprintf(arq_mep, "%s\n","SUBT"); }
	| expressao_simples S_OR termo
		{ fprintf(arq_mep, "%s\n","DISJ"); }
	| S_MAIS termo
	| S_MENOS termo
		{ fprintf(arq_mep, "%s\n","INVR"); }
	| termo
;

termo
	: termo S_VEZES fator
		{ fprintf(arq_mep, "%s\n","MULT"); } 
	| termo S_DIV fator
		{ fprintf(arq_mep, "%s\n","DIVI"); } 
	| termo S_AND fator
		{ fprintf(arq_mep, "%s\n","CONJ"); } 
	| fator
;

fator
	: S_IDENTIF
		{ 
	  		POS_SIMB = busca_simbolo(lexema);

	  		if(POS_SIMB == -1){
	  		  printf("Variavel [%s] nao declarada!",lexema);
	  		}
	  		else{
	  		  fprintf(arq_mep, "%s %s %d\n", "CRVL", "", TSIMB[POS_SIMB].endereco);  		
	  		}  
	  	}
	| S_NUMERO
		{ fprintf(arq_mep, "%s %s %s\n","CRCT", "", lexema); } 
	| S_ABREPAR expressao S_FECHAPAR
	| S_NOT fator
		{ fprintf(arq_mep, "%s\n","NEGA"); } 
;

%%


int yywrap(){
	return(1);
}

void yyerror(char *msg){
	printf("Erro sintatico. LINHA: %d.\n",numero_da_linha);
}

int main(int argc, char **argv){
	char temp[100];
	//Checa se entrou com o nome do programa
	if(argc < 2){
		printf("Erro!\n");
		printf("Uso:\tpascal.bin <nome_sem_extensao>\n");
		printf("\tExemplo: ./pascal.bin teste\n");
		exit(1);
	}//else

	strcpy(temp,argv[1]);
	strcat(temp,".pas");
	
	yyin=fopen(temp,"r");
	//Testa se consegui abrir o arquivo
	if(yyin==NULL){
		printf("Erro!\n");
		printf("Não consigo abrir o arquivo [%s]\n",temp);
		exit(1);
	}
	
	strcpy(temp,argv[1]);
	strcat(temp,".mep");
	arq_mep = fopen(temp,"w");
	if(arq_mep==NULL){
	printf("Erro!\n");
		printf("Não consigo abrir o arquivo [%s]\n",temp);
		exit(1);
	
	}
	
	if(!yyparse()){
		printf("\nPrograma CORRETO!");
		printf("\nNumeros de linhas compiladas: %d\n\n", numero_da_linha);
	}
	else{
		printf("Nao foi possível compilar!.\n");
	}
}
