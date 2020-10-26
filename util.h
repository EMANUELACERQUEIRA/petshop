#ifndef UTIL_H   // guardas de cabe�alho, impedem inclus�es c�clicas
#define UTIL_H

// ---------- Bibliotecas da linguagem C ---------- //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------- Declara��o das fun��es ---------- //
void limparTela();

// ---------- Implementa��o das fun��es ---------- //

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
