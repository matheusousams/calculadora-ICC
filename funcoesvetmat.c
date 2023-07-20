#include <locale.h>

	// criação da estrututa para o vetor
	typedef struct{

	int tamvet;
	float *pontvet;

	}Vetor;

	// criação da estrututa para a matriz
	typedef struct{

	int linhamat, colmat;
	float **pontmat;

	}Matriz;

//Funções de operações com vetores


//Função para ler os vetores
void LerVetor(float *ponteiro, int tamanho){

	printf("\n\n================================================= \n");
	printf("		  Ler Vetores\n");
	printf("================================================= \n\n");

	int i;

	printf("================================================= \n\n");

	//inicio do for para preencher o vetor
	for(i = 0; i < tamanho; i++){
		printf("Digite o elemento %d -  ", i + 1);
		scanf("%f", &ponteiro[i]);
	}
	printf("\n================================================= \n\n");

}

//função para somar as matrizes
void SomaVetores(float *ponteiro1, float *ponteiro2, int tamanho1, int tamanho2){

	printf("\n\n================================================= \n");
	printf("		Soma De Vetores\n");
	printf("================================================= \n\n");

	int i;

	printf("================================================= \n");
	printf("Vetor 1: ");

	//inicio do for para printar na tela o vetor 1
	for(i = 0; i < tamanho1; i++){
		printf("%.1f \t", ponteiro1[i]);
	}

	//inicio do for para printar na tela o vetor 2
	printf("\nVetor 2: ");

	for(i = 0; i < tamanho2; i++){
		printf("%.1f \t", ponteiro2[i]);
	}

	printf("\n================================================= \n\n");

	//Criação de um vetor qualquer para receber a soma dos vetores
	float vetoresultado[tamanho1];

	//inicio do for que preencherá cada elemento do vetoresultado com a soma de cada elemento dos vetores
	for(i = 0; i < tamanho1; i++){
		vetoresultado[i] = ponteiro1[i] + ponteiro2[i] ;
	}

	printf("\nA soma dos vetores é:	");

	//inicio do for que mostra o vetor resultante
	for(i = 0; i < tamanho1; i++){
		printf("%.1f \t" , vetoresultado[i]);
	}

	printf("\n \n \n");

	printf("================================================= \n\n");

}

//Função para multiplicar vetor por escalar
void MultEscVetor(float esc,float *ponteiro, int tamanho){

	printf("\n\n================================================= \n");
	printf("	 Multiplicar escalar pelo vetor\n");
	printf("================================================= \n\n");

	int i;

	printf("================================================= \n");
	printf("Vetor: ");

	//inicio do for para printar na tela o vetor
	for(i = 0; i < tamanho; i++){
		printf("%.1f \t", ponteiro[i]);
	}

	printf("\n================================================= \n\n");

	//Criação de um vetor qualquer
	float vetoresultado[tamanho];

	//inicio do for para preencher o vetoresultado com a multiplicação do escalar por cada elemento do vetor
	for(i = 0; i < tamanho; i++){
		vetoresultado[i] = ponteiro[i] * esc ;
	}

	printf("\nO vetor resultante é:	");

	//inicio do for que mostra o vetor resultante
	for(i = 0; i < tamanho; i++){
		printf("%.1f \t", vetoresultado[i]) ;
	}

	printf("\n \n \n");

	printf("================================================= \n\n");

}

//Função para o produto escalar dos vetores
void ProdEsc(float *ponteiro1, float *ponteiro2, int tamanho){

	printf("\n\n================================================= \n");
	printf("		Produto Escalar\n");
	printf("================================================= \n\n");

	int i;

	printf("================================================= \n");
	printf("Vetor 1: ");

	//inicio do for para printar na tela o vetor 1
	for(i = 0; i < tamanho; i++){
		printf("%.1f \t", ponteiro1[i]);
	}

	printf("\nVetor 2: ");

	//inicio do for para printar na tela o vetor 2
	for(i = 0; i < tamanho; i++){
		printf("%.1f \t", ponteiro2[i]);
	}

	printf("\n================================================= \n\n");

	//Criação de um vetor qualquer
	float vetoresultado[tamanho];
	float resultado = 0;

	//inicio do for para preencher o vetoresultado com a multiplicação de cada elemento dos vetores
	for(i = 0; i < tamanho; i++){
		vetoresultado[i] = ponteiro1[i] * ponteiro2[i];
		resultado += vetoresultado[i];//a variável resultado recebe a soma de todos os elementos após a operação
	}

	//printa na tela o resultado
	printf("O produto escalar dos vetores é: %.1f", resultado);

	printf("\n \n \n");

	printf("================================================= \n\n");

}

//Funções de operações com matrizes


//Função para ler matrizes
void LerMatriz(float **ponteiro, int linha, int coluna){

	printf("\n\n================================================= \n");
	printf("		  Ler Matrizes\n");
	printf("================================================= \n\n");

	int i,j;

	printf("================================================= \n\n");

	//inicio do for para preencher a matriz
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
		printf("Digite o elemento [%d][%d] -  ", i + 1,j + 1);
		scanf("%f", &ponteiro[i][j]);
		}
	}

	printf("\n================================================= \n\n");

}

//Função para somar matrizes
void SomarMatrizes(float **ponteiro1, int linha1, int coluna1, float **ponteiro2){

	printf("\n\n================================================= \n");
	printf("		  Somar Matrizes\n");
	printf("================================================= \n\n");

	printf("================================================= \n\n");

	int i,j;

	printf("Matriz 1\n\n");

	//inicio do for para printar na tela a matriz 1
	for(i = 0; i < linha1; i++){
	printf("|");
		for(j = 0; j < coluna1; j++){
		printf("%.1f \t", ponteiro1[i][j]);
		}
	printf("|");
	printf("\n");
	}

	printf("\nMatriz 2\n\n");

	//inicio do for para printar na tela a matriz 2
	for(i = 0; i < linha1; i++){
	printf("|");
		for(j = 0; j < coluna1; j++){
		printf("%.1f \t", ponteiro2[i][j]);
		}
	printf("|");
	printf("\n");
	}

	printf("\n================================================= \n\n");

	//Criação de uma matriz qualquer para receber a soma das matrizes
	float matrizresultado[linha1][coluna1];

	//inicio do for que preencherá cada elemento da matrizresultado com a soma de cada elemento das matrizes
	for(i = 0; i < linha1; i++){
		for(j = 0; j < coluna1; j++){
			matrizresultado[i][j] = ponteiro1[i][j] + ponteiro2[i][j];
		}
	}

	printf("Matriz resultante\n\n");

	//inicio do for que mostra a matriz resultante
	for(i = 0; i < linha1; i++){
	printf("|");
		for(j = 0; j < coluna1; j++){
			printf("%.1f \t",matrizresultado[i][j]);
		}
	printf("|");
	printf("\n");
	}
	printf("\n================================================= \n\n");

}

//Função para multiplicar as matrizes
void MultiplicarMatrizes(float **ponteiro1, int linha1, float **ponteiro2, int coluna2){

	printf("\n\n================================================= \n");
	printf("	      Multiplicar Matrizes\n");
	printf("================================================= \n\n");

	printf("================================================= \n\n");

	int i, j, l;
	float resultado = 0;

	//Criação de uma matriz qualquer para receber a multiplicação das matrizes
	float matrizresultado[linha1][coluna2];

	//inicio do for que preencherá cada elemento da matrizresultado seguindo a lógica de multiplicação de matrizes
	for(i = 0; i < linha1; i++){
		for(j = 0; j < coluna2; j++){
		matrizresultado[i][j] = 0;
			for(l = 0; l < coluna2; l++){
				resultado += ponteiro1[i][l] * ponteiro2[l][j];
			}
		matrizresultado[i][j] = resultado;
		resultado = 0;
		}
	}

	printf("Matriz resultante\n\n");

	//inicio do for que mostra a matriz resultante
	for(i = 0; i < linha1; i++){
	printf("|");
		for(j = 0; j < coluna2; j++){
			printf("%.1f \t",matrizresultado[i][j]);
		}
	printf("|");
	printf("\n");
	}
	printf("\n================================================= \n\n");

}

//Função para calcular a transposta da matriz
void TranspostaMatriz(float **ponteiro, int linha, int coluna){

	printf("\n\n================================================= \n");
	printf("	      Transposta Da Matriz\n");
	printf("================================================= \n\n");

	printf("================================================= \n\n");

	int i,j;

	printf("Matriz\n\n");

	//inicio do for para printar na tela a matriz
	for(i = 0; i < linha; i++){
	printf("|");
		for(j = 0; j < coluna; j++){
		printf("%.1f \t", ponteiro[i][j]);
		}
	printf("|");
	printf("\n");
	}

	printf("\n================================================= \n\n");

	printf("Matriz resultante\n\n");

	//inicio do for para printar na tela a transposta da matriz
	for(i = 0; i < coluna; i++){
	printf("|");
		for(j = 0; j < linha; j++){
			printf("%.1f\t", ponteiro[j][i]);
		}
	printf("|");
	printf("\n");
	}
	printf("\n================================================= \n\n");

}

//Função para calcular o determinante da matriz
void DetMatriz(float **ponteiro, int linha, int coluna){

	printf("\n\n================================================= \n");
	printf("	     Determinante da Matriz\n");
	printf("================================================= \n\n");

	int i,j;

	printf("================================================= \n\n");

	printf("Matriz\n\n");

	//inicio do for para printar na tela a matriz
	for(i = 0; i < linha; i++){
	printf("|");
		for(j = 0; j < coluna; j++){
		printf("%.1f \t", ponteiro[i][j]);
		}
	printf("|");
	printf("\n");
	}

	printf("\n================================================= \n\n");

	//inicio do if para saber qual a ordem da matriz e realizar os devidos cálculos e printa na tela o resultado
	if(linha == 1 && coluna == 1){
		printf("O determinante da matriz é: %.1f \n", ponteiro[0][0]);
	}else if(linha == 2 && coluna == 2){
		printf("O determinante da matriz é: %.1f \n", ponteiro[0][0] * ponteiro[1][1] -
		ponteiro[0][1] * ponteiro[1][0]);
	}else{
		printf("O determinante da matriz é: %.1f \n",
		(ponteiro[0][0] * ponteiro[1][1] * ponteiro[2][2] +
		ponteiro[0][1] * ponteiro[1][2] * ponteiro[2][0] +
		ponteiro[0][2] * ponteiro[1][0] * ponteiro[2][1]) -
		(ponteiro[0][2] * ponteiro[1][1] * ponteiro[2][0] +
		ponteiro[0][0] * ponteiro[1][2] * ponteiro[2][1] +
		ponteiro[0][1] * ponteiro[1][0] * ponteiro[2][2]));
	}

	printf("\n================================================= \n\n");
}

//Função para saber se a matriz é simétrica
void MatrizSimetrica(float **ponteiro, int linha, int coluna){

	printf("\n\n================================================= \n");
	printf("	     	 Matriz Simétrica\n");
	printf("================================================= \n\n");

	printf("================================================= \n\n");

	int i,j;

	printf("Matriz\n\n");

	//inicio do for para printar na tela a matriz
	for(i = 0; i < linha; i++){
	printf("|");
		for(j = 0; j < coluna; j++){
		printf("%.1f \t", ponteiro[i][j]);
		}
	printf("|");
	printf("\n");
	}

	printf("\n");

	printf("\nTransposta\n\n");

	//inicio do for para printar na tela a transposta da matriz
	for(i = 0; i < coluna; i++){
	printf("|");
		for(j = 0; j < linha; j++){
		printf("%.1f \t", ponteiro[j][i]);
		}
	printf("|");
	printf("\n");
	}

	printf("\n================================================= \n\n");

	//Criação de uma matriz qualquer para receber a transposta da matriz
	float matriztransposta[coluna][linha];

	//inicio do for que preencherá cada elemento da matrizresultado com a transposta da matriz dada pelo usuário
	for(i = 0; i < coluna; i++){
		for(j = 0; j < linha; j++){
			matriztransposta[i][j] = ponteiro[j][i];
		}
	}

	//teste para saber se a matriz é simétrica
	if(linha != coluna){
			printf("\nA matriz não é simétrica.\n");
		}else {
			int k = 1;
			for(i = 0; i < linha; i++){
				for(j = 0; j < coluna; j++){
					if(ponteiro[i][j] != matriztransposta[i][j]){
						k = 0;//se ponteiro[i][j] for diferente de matriztransposta[i][j] o valor zero é atribuido 							a "k".
					}
				}
			}
			if(k == 1){
				printf("\nA matriz é simétrica.\n");//no fim do teste se k é igual a 1, a matriz é simétrica
			}else{
				printf("\nA matriz não é simétrica.\n");//se não ela não será simétrica
			}
		}

	printf("\n================================================= \n\n");

}
