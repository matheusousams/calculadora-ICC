/*
Trabalho de ICC
Equipe: José Braga Lima Júnior
	Matheus Sousa Vieira
	William Vieira De Brito
1º semestre do curso de Ciências da computação
Universidade Estadual do Ceará-UECE
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "cab.h" // importação da biblioteca que chamará as funções

int main(void){
    printf("    0101010101010101010 0101010101010101010    10101010101010   010101       101010    10101010101010   \n");
	printf("    1010101010101010101 0101010101010101010 0101010101110101010 010101       101010 0101010101110101010 \n");
	printf("           010101       010101              101010      10101   010101       101010 0101010      10101  \n");
	printf("           101010       010101                11010101          010101       101010  11010101           \n");
	printf("           101010       0101010101010101010     010101010       010101       101010    010101010        \n");
	printf("           010101       0101010101010101010        101010101    010101       101010       101010101     \n");
	printf("           101010       010101              0101     01010101   010101       101010 0101     01010101   \n");
    printf("   011     101010       010101              01010       0101010 010101       101010 01010       0101010 \n");
    printf("   10110101101010       0101010101010101010  101011010010101010 0101010101010101010  101011010010101010 \n");
    printf("   00101011101010       0101010101010101010    10101010101010   0101010101010101010    10101010101010   \n\n\n");

	printf("=========================================================== \n");
	printf("======================*************======================== \n");
	printf("===========*************************************=========== \n");
	printf("===========* CALCULADORA DE MATRIZES E VETORES *=========== \n");
	printf("===========*************************************=========== \n");
	printf("======================*************======================== \n");
	printf("=========================================================== \n");

	//Criação do Menu de opções

	void menuVetor(void); //declaração da função menuVetor
	void menuMatriz(void);//declaração da função menuMatriz
	char num[1000];
	int controle = 0;

	//Controle de erro, caso o usuário insira um valor diferente das opções

	while(controle < 1 || controle > 3){
	printf("\nEscolha uma das opções: \n");
	printf("1-Operações com Vetores \n");
	printf("2-Operações com Matrizes \n");
	printf("3-Sair do programa \n");
	scanf("%s", num);
	controle = atoi(num);

		switch(controle){
		case 1:
		menuVetor();
		break;

		case 2:
		menuMatriz();
		break;

		case 3:
		printf("\nCalculadora de Matrizes e Vetores, UECE 2017.\n");
		break;

		default:
		printf("\nOpção Inválida.\n");
		break;

		}

	}

	return 0;
}

void menuVetor(void){

	printf("============================================== \n");
	printf("===================*********================== \n");
	printf("===========************************=========== \n");
	printf("=========***CALCULADORA DE VETORES***========= \n");
	printf("===========************************=========== \n");
	printf("===================*********================== \n");
	printf("============================================== \n");

	int main(void); //declaração da função main
	char num[1000];
	int controle = 0;
	int esc;
	float escalar;
	Vetor vet1; // declaração de vet1 do tipo struct Vetor
	Vetor vet2; // declaração de vet2 do tipo struct Vetor

	//Controle de erro, caso o usuário insira um valor diferente das opções

	while(controle != 5){

	printf("\nEscolha uma das opções: \n");
	printf("1-Ler vetores \n");
	printf("2-Somar dois vetores \n");
	printf("3-Multiplicar vetor por escalar \n");
	printf("4-Produto escalar entre dois vetores \n");
	printf("5-Voltar ao menu principal \n");
	scanf("%s", num);
	controle = atoi(num);

	switch(controle){
		case 1:
		printf("\nDigite o número de elementos do vetor: ");
		scanf("%d", &vet1.tamvet); //armazena o número de elementos do vetor

		if(vet1.tamvet < 1){
			printf("\nPor favor insira um valor válido.\n\n");
			menuVetor();// volta para o menu de vetores
		}else{
		vet1.pontvet = (float*) malloc(vet1.tamvet * sizeof(float)); //aloca um espaço na memória para o vetor 1
		LerVetor(vet1.pontvet, vet1.tamvet);// Envia os parâmetros para a função LerVetor
		}

		printf("\nDigite o número de elementos do vetor: ");
		scanf("%d", &vet2.tamvet);//armazena o número de elementos do vetor

		if(vet2.tamvet < 1){
			printf("\nPor favor insira um valor válido.\n\n");
			menuVetor();// volta para o menu de vetores
		}else{
		vet2.pontvet = (float*) malloc(vet2.tamvet * sizeof(float));;//aloca um espaço na memória para o vetor 2
		LerVetor(vet2.pontvet, vet2.tamvet); // Envia os parâmetros para a função LerVetor
		}
		break;

		case 2:
		//controle de erro

		if(vet1.tamvet != vet2.tamvet){
			printf("\nO tamanho dos vetores é diferente.\n\n");
		}else{
		SomaVetores(vet1.pontvet, vet2.pontvet, vet1.tamvet, vet2.tamvet);// Envia os parâmetros para a função SomaVetores
		}
		break;

		case 3:
		printf("\n\nEscolha qual dos vetores deseja utilizar: ");// O usuário escolhe um dos vetores
		scanf("%d", &esc);//armazena a escolha do usuário

		//controle de erro

		if(esc < 1 || esc > 2){
			printf("\nPor favor insira um valor válido.\n\n");
		}else{
		printf("\nDigite o escalar: ");// O usuário escolhe um escalar
		scanf("%f", &escalar);//armazena a escolha do usuário

		if(esc == 1){
			MultEscVetor(escalar, vet1.pontvet, vet1.tamvet);// Envia os parâmetros para a função MultEscVetor
		}else {
			MultEscVetor(escalar, vet2.pontvet, vet2.tamvet);// Envia os parâmetros para a função MultEscVetor
		}
		}
		break;

		case 4:
		//controle de erro

		if(vet1.tamvet != vet2.tamvet){
			printf("\nO tamanho dos vetores é diferente.\n\n");
		}else{
		ProdEsc(vet1.pontvet, vet2.pontvet, vet1.tamvet);// Envia os parâmetros para a função ProdEsc
		}
		break;

		case 5:
		free(vet1.pontvet);//Libera o espaço da memória para o vetor 1
		free(vet2.pontvet);//Libera o espaço da memória para o vetor 2

		main();// retorna para o menu principal
		break;

		default:
		printf("\nOpção inválida \n");
		break;

		}
	}
}

void menuMatriz(void){

	printf("============================================== \n");
	printf("===================*********================== \n");
	printf("===========************************=========== \n");
	printf("=========***CALCULADORA DE MATRIZES***======== \n");
	printf("===========************************=========== \n");
	printf("===================*********================== \n");
	printf("============================================== \n");

	int main(void);//declaração da função main
	char num[1000];
	int controle = 0, i, j, esc;
	Matriz mat1;// declaração de mat1 do tipo struct Matriz
	Matriz mat2;// declaração de mat2 do tipo struct Matriz

	//Controle de erro, caso o usuário insira um valor diferente das opções

	while(controle != 7){

	printf("\nEscolha uma das opções: \n");
	printf("1-Ler matrizes \n");
	printf("2-Somar duas matrizes \n");
	printf("3-Multiplicar duas matrizes \n");
	printf("4-Calcular a transposta de uma matriz \n");
	printf("5-Calcular o determinante de uma matriz \n");
	printf("6-Verificar se a matriz é simétrica \n");
	printf("7-Voltar ao menu principal \n");
	scanf("%s", num);
	controle = atoi(num);


	switch(controle){
		case 1:
		printf("\nDigite o número de linhas da matriz: ");
		scanf("%d", &mat1.linhamat); //armazena o número de linhas da matriz 1
		//controle de erro

		if(mat1.linhamat < 1){
			printf("\nPor favor insira um valor válido.\n\n");
			menuMatriz();// volta para o menu de matrizes
		}

		printf("\nDigite o número de colunas da matriz: ");
		scanf("%d", &mat1.colmat); //armazena o número de colunas da matriz 1
		//controle de erro

		if(mat1.colmat < 1){
			printf("\nPor favor insira um valor válido.\n\n");
			menuMatriz();// volta para o menu de matrizes
		}


		mat1.pontmat = (float**) malloc(mat1.linhamat * sizeof(float*)); //aloca um espaço na memória para a matriz 1
		for(i = 0; i < mat1.linhamat;i++){
			mat1.pontmat[i] = (float*) malloc(mat1.colmat * sizeof(float));
		}

		LerMatriz(mat1.pontmat, mat1.linhamat, mat1.colmat);//envia os parâmetros para função LerMatrizes

		printf("\n\nDigite o número de linhas da matriz: ");
		scanf("%d", &mat2.linhamat);//armazena o número de linhas da matriz 2
		//controle de erro

		if(mat2.linhamat < 1){
			printf("\nPor favor insira um valor válido.\n\n");
			menuMatriz();// volta para o menu de matrizes
		}

		printf("\nDigite o número de colunas da matriz: ");
		scanf("%d", &mat2.colmat); //armazena o número de colunas da matriz 2
		//controle de erro

		if(mat2.colmat < 1){
			printf("\nPor favor insira um valor válido.\n\n");
			menuMatriz();// volta para o menu de matrizes
		}

		mat2.pontmat = (float**) malloc(mat2.linhamat * sizeof(float*)); //aloca um espaço na memória para a matriz 2
		for(i = 0; i < mat2.linhamat;i++){
			mat2.pontmat[i] = (float *) malloc(mat2.colmat * sizeof(float));
		}

		LerMatriz(mat2.pontmat, mat2.linhamat, mat2.colmat);//envia os parâmetros para função LerMatrizes
		break;

		case 2:
		// Verifica a condição para que haja soma de matrizes

		if(mat1.linhamat != mat2.linhamat){
		printf("\n\nO número de linhas das matrizes não é igual.\n\n");
		}else if(mat1.colmat != mat2.colmat){
		printf("\n\nO número de colunas das matrizes não é igual.\n\n");
		}else{
		SomarMatrizes(mat1.pontmat, mat1.linhamat, mat1.colmat, mat2.pontmat);//envia os parâmetros para função SomarMatrizes
		}
		break;

		case 3:
		// Verifica a condição para que haja a multiplicação das matrizes

		if(mat1.colmat != mat2.linhamat){
		printf("\n\nO número de linhas da matriz 1 é diferente do número de colunas da matriz 2.\n\n");
		}else{
		MultiplicarMatrizes(mat1.pontmat, mat1.linhamat, mat2.pontmat, mat2.colmat);//envia os parâmetros para função 			MultiplicarMatrizes
		}
		break;

		case 4:
		printf("\n\nEscolha qual das matrizes deseja utilizar: ");// O usuário escolhe uma das matrizes
		scanf("%d", &esc);//armazena a escolha

		//controle de erro

		if(esc < 1 || esc > 2){
			printf("\nPor favor insira um valor válido.\n\n");
		}else if(esc == 1){
			TranspostaMatriz(mat1.pontmat, mat1.linhamat, mat1.colmat);//envia os parâmetros para função 				TranspostaMatriz
		}else {
			TranspostaMatriz(mat2.pontmat, mat2.linhamat, mat2.colmat);//envia os parâmetros para função 				TranspostaMatriz
		}
		break;

		case 5:
		printf("\n\nEscolha qual das matrizes deseja utilizar: ");// O usuário escolhe uma das matrizes
		scanf("%d", &esc);//armazena a escolha

		//controle de erro

		if(esc < 1 || esc > 2){
			printf("\nPor favor insira um valor válido.\n\n");
		}else if(esc == 1){
			if(mat1.linhamat != mat1.colmat || mat1.linhamat > 3 && mat1.colmat > 3){
				printf("\nApenas para matrizes de ordem 1x1, 2x2 ou 3x3.\n");
			}else{
			DetMatriz(mat1.pontmat, mat1.linhamat, mat1.colmat);//envia os parâmetros para função DetMatriz
			}
		}else{
			if(mat2.linhamat != mat2.colmat || mat2.linhamat > 3 && mat2.colmat > 3){
				printf("\nApenas para matrizes de ordem 1x1, 2x2 ou 3x3.\n");
			}else{
			DetMatriz(mat2.pontmat, mat2.linhamat, mat2.colmat);//envia os parâmetros para função DetMatriz
			}
		}
		break;

		case 6:
		printf("\n\nEscolha qual das matrizes deseja utilizar: ");// O usuário escolhe uma das matrizes
		scanf("%d", &esc);//armazena a escolha

		//controle de erro

		if(esc < 1 || esc > 2){
			printf("\nPor favor insira um valor válido.\n\n");
		}else if(esc == 1){
			MatrizSimetrica(mat1.pontmat, mat1.linhamat, mat1.colmat);//envia os parâmetros para função 				MatrizSimetrica
		}else {
			MatrizSimetrica(mat2.pontmat, mat2.linhamat, mat2.colmat);//envia os parâmetros para função 				MatrizSimetrica
		}
		break;

		case 7:
		free(mat1.pontmat);//Libera o espaço da memória para a matriz 1
		free(mat2.pontmat);//Libera o espaço da memória para a matriz 2

		main();//retorna para o menu principal
		break;

		default:
		printf("\nOpção Inválida.\n");

		}
	}
}

