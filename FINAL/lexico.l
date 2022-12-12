%{
#include <stdio.h>
#include "sintatico.tab.h" 

void p_minusculas(char* s){
while (*s){
if(*s <= 90 && *s >= 65){
*s+= 32;}
s++;}
}

%}


DIGIT	[0-9]
ID	[a-z][a-z0-9]*

%%
program		{return(S_PROGRAM);}
if		{return (S_IF); }
then		{return (S_THEN); }
else		{return (S_ELSE); }
while		{return(S_WHILE);}
repeat          {return(S_REPEAT);}
until           {return(S_UNTIL);}
do		{return(S_DO);}
var		{return(S_VAR);}
begin		{return(S_BEGIN);}
end		{return(S_END);}
"/"		{return(S_DIV);}
and		{return(S_AND);}
or		{return(S_OR);}
not		{return(S_NOT);}
write		{return(S_WRITE);}
read		{return(S_READ);}
"+"		{return(S_MAIS);}
"-"		{return(S_MENOS);}
"*"		{return(S_VEZES);}
":="		{return(S_ATRIBUI);}
":"		{return(S_DOISPTOS);}
"."		{return(S_PONTO);}
";"		{return(S_PONTOVG);}
","		{return(S_VIRGULA);}
"("		{return(S_ABREPAR);}
")"		{return(S_FECHAPAR);}
">"		{return(S_MAIOR);}
"<"		{return(S_MENOR);}
">="		{return(S_MAIGUAL);}
"<="		{return(S_MEIGUAL);}
"="		{return(S_IGUAL);}
"<>"		{return(S_DIFERENTE);}
{DIGIT}+ 	{
				strcpy(lexema,yytext);
				return(S_NUMERO);
			}
{ID}		{
				strcpy(lexema,yytext);
				p_minusculas(lexema);
				return(S_IDENTIF);
			}
[ \t]		/* faz nada. ignora espacos e tabulacao */
[\n]		{ numero_da_linha++; }
<<EOF>>		{ return (0); }
.			{			
				printf("\nErro lexico. SIMBOLO DESCONHECIDO: [%s]. LINHA: %d.\n",yytext,numero_da_linha);
				exit(1); 
			}
%%
