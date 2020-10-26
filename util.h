#ifndef UTIL_H   // guardas de cabeçalho, impedem inclusões cíclicas
#define UTIL_H

// ---------- Bibliotecas da linguagem C ---------- //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------- Declaração das funções ---------- //
void limparTela();

// ---------- Implementação das funções ---------- //

/**
 * Limpa a tela do console
 **/
void limparTela() {
	int rc;
	
	rc = system( "cls" );
	if (rc != 0)
		rc = system( "clear" );
}	// void limparTela()
#endif
