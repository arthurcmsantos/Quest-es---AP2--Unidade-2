#include <stdio.h>
//Arthur Cleiton
int main (){//principal
	int x = 0;//declarando x
	printf ("Digite o nome para fazermos a soma recursiva: ");//entrando com o valor de x
	scanf("%d",&x); //armazenando X
	printf ("O resultado da soma e: %d ",somatorio(x));//imprimindo o resultado 
}

int somatorio(int x) {//declarando a função somatória
        if(x == 1)//se X == 1
            return 1; //retorne 1
        return x + somatorio(x - 1);//senão retornar o somatório do valor
}


