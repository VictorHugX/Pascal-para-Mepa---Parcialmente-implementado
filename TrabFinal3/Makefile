all: constroi compila testa
constroi:
	bison sintatico.y -d
	flex -i -o lexico.c lexico.l 
	bison sintatico.y

compila:
	gcc sintatico.tab.c -o pascal.bin

testa:
	./pascal.bin  teste
	cat teste.mep
limpa:
	rm -f sintatico.tab.h sintatico.tab.c
	rm -f lexico.c 
	rm -f pascal.bin
	rm -f *.mep
	clear
	ls -l
	


