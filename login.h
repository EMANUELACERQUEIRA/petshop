#ifndef LOGIN_H   // guardas de cabeçalho, impedem inclusões cíclicas
#define LOGIN_H

// ---------- Bibliotecas da linguagem C ---------- //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------- Bibliotecas Locais ---------- //
#include "util.h"

// ---------- Constantes ---------- //
#include "const.h"
#define USUARIO "manu"
#define SENHA "manu"

// ---------- Estruturas ---------- //
/**
 * Dados do Login
 **/
typedef struct Tplogin {
	char usuario[MAX_LOGIN];
	char senha[MAX_LOGIN];
	int status; 
};

// ---------- Variáveis Globais ---------- //
struct Tplogin login;

// ---------- Declaração das funções ---------- //
struct Tplogin limparLogin();
struct Tplogin efetuarLogin();
void telaLogin();

// ---------- Implementação das funções ---------- //
/**
 *
 **/
struct Tplogin limparLogin() {
	struct Tplogin login;
	
	login.usuario[0] = '\0';
	login.senha[0] = '\0';
	login.status = 0;
	
	return login;
}

/**
 * Valida os dados do login
 **/
struct Tplogin efetuarLogin() {
	struct Tplogin login;
	
	login = limparLogin();
	
	printf("\n\n");
	printf(LINHA);
	printf("Usuário..........: ");
	setbuf(stdin, NULL);
	gets(login.usuario);
	
	printf("Senha............: ");
	setbuf(stdin, NULL);
	gets(login.senha);
	printf(LINHA);
	
	// Retorna o status de login efetuado
	login.status = 1;
	
	// Valida o usuário
	if (strcmp(login.usuario, USUARIO)) {
		login.status = -1;
		printf("/n :( usuário %s inválido /n", login.usuario);
		return login;
	}
	
	// valida a senha
	if (strcmp(login.senha, SENHA)) {
		login.status = -2;
		printf("/n :( senha %s inválida /n", login.senha);
		return login;
	}
	
	// retorna os dados do login
	return login;
}

/**
 * Monta a tela inicial da aplição para efetuar o login
 **/
void telaLogin(){
	do{	
		limparTela();
		montarCabecalho();
		login = efetuarLogin();
		montarRodape();
	} while (login.status < 1);
}

#endif
