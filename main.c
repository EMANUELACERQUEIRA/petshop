// ---------- Bibliotecas da linguagem C ---------- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// ---------- Constantes ---------- //
#include "const.h"

// ---------- Importa��o das Telas ---------- //
#include "login.h"

// ---------- Defini��o das fun��es ---------- //


// ---------- Fun��o Main ---------- //
/**
 * Fun��o principal do programa
 **/
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	telaLogin();
	
	system("pause");
	return 0;
}	// int main()

// ---------- Implementa��o das fun��es ---------- //

