#include<stdio.h>
#include<stdlib.h>

//Questão 3 - Arthur cleiton
int main () { 
	int valor = 10;//quantidade de valores do array
    int vetor[valor];//vetor[10]
    int i;//declarando contador
    for(i = 0; i < valor; i++){//criamos o contador
    	printf("Digite os valores do vetor: ");//entramos com os valores do vetor
    	scanf("%d",&vetor[i]);//armazenando os valores no vetor[valor]
	}
	printf("Soma dos valores do vetor e: %d\n", soma(vetor, 10));//imprimindo a soma da chamada recursiva
	
    return 0;
}

int soma(int vetor[], int tamanho){//declaramos a função soma
    if(tamanho == 0) // caso o vetor estiver vazio
        return 0;
    else//senão
        return vetor[tamanho - 1] + soma(vetor, tamanho - 1); //aqui fazemos a chamada recursiva
}



