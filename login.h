#ifndef LOGIN_H   // guardas de cabe�alho, impedem inclus�es c�clicas
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

// ---------- Vari�veis Globais ---------- //
struct Tplogin login;

// ---------- Declara��o das fun��es ---------- //
struct Tplogin limparLogin();
struct Tplogin efetuarLogin();
void telaLogin();

// ---------- Implementa��o das fun��es ---------- //
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
	printf("Usu�rio..........: ");
	setbuf(stdin, NULL);
	gets(login.usuario);
	
	printf("Senha............: ");
	setbuf(stdin, NULL);
	gets(login.senha);
	printf(LINHA);
	
	// Retorna o status de login efetuado
	login.status = 1;
	
	// Valida o usu�rio
	if (strcmp(login.usuario, USUARIO)) {
		login.status = -1;
		printf("/n :( usu�rio %s inv�lido /n", login.usuario);
		return login;
	}
	
	// valida a senha
	if (strcmp(login.senha, SENHA)) {
		login.status = -2;
		printf("/n :( senha %s inv�lida /n", login.senha);
		return login;
	}
	
	// retorna os dados do login
	return login;
}

/**
 * Monta a tela inicial da apli��o para efetuar o login
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
