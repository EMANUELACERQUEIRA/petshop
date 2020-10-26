#ifndef CONST_H   // guardas de cabeçalho, impedem inclusões cíclicas
#define CONST_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_LOGIN 51

char LINHA[100]       = "**********************************************************************\n";
char LINHA_VAZIA[100] = "*                                                                    *\n";
char TITULO_1[100]    = "*                         P E T S H O P                              *\n";
char TITULO_2[100]    = "*                     P O C O T Ó Z I N H A                          *\n";

// ---------- Declaração das funções ---------- //
void montarCabecalho();
void montarRodape();

// ---------- Implementações das funções ---------- //
/**
 * Monta o cabeçalho da aplicação
 **/
void montarCabecalho() {
	printf("\n\n");
	printf(LINHA);
	printf(LINHA_VAZIA);
	printf(TITULO_1);
	printf(TITULO_2);
	printf(LINHA_VAZIA);
	printf(LINHA);
}	// void montarCabecalho()

/**
 * Monta o rodapé da aplicação
 **/
void montarRodape() {
	printf("\n\n");
	printf(LINHA);
	printf("Exercício lista duplamente encadeada\n");
	printf("Nome.....: Emanuela Machado Cerqueira     RA.....: 123456789\n");
	printf(LINHA);
}	// void montarRodape()

#endif
