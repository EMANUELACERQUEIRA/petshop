// ---------- Bibliotecas da linguagem C ---------- //
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// ---------- Constantes ---------- //
#include "const.h"

// ---------- Importação das Telas ---------- //
#include "login.h"

// ---------- Definição das funções ---------- //


// ---------- Função Main ---------- //
/**
 * Função principal do programa
 **/
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	telaLogin();
	
	system("pause");
	return 0;
}	// int main()

// ---------- Implementação das funções ---------- //

