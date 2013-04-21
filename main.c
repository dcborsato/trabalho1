 /*!
 \file trabalho1.c
 \brief Esse é o arquivo principal do sistema.
 \author Diego Conci Borsato
 \date 17/04/13
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

float media = 0, vetor[20];

/*!
 \brief Essa função solicita ao usuário que o mesmo digite 20 valores.
 \param vetor[20], vetor onde é armazenado os valores digitados.
 \return Retorna o vetor preenchido.
 */

int carrega_lista(float vetor[20]){

    int i; /// Declara i como variável local

    for (i=0; i<20; i++){       /// Faz um laço até que sejam digitados os 20 valores
	
        printf("\nInforme o valor %d de 20 : ",i+1);  /// Solicita que o usuário digite os valores
        scanf("%f",&vetor[i]);  /// Armazena os valores digitados
	printf("\n\n%d\n",vetor[i]);
    }
}

/*!
 \brief Essa função ordena os 20 valores adiquiridos.
 \param vetor[20], vetor onde é armazenado os valores digitados.
 \return Retorna o um novo vetor ordenado.
 */

int ordena(float vetor[20]){


}


/*!

 \brief Essa função calcula a média dos 20 valores obtidos.
 \param vetor[20], vetor onde é armazenado os valores digitados.
 \return Retorna a média dos valores obtidos.
 */

int media_fnc(float vetor[20]){

    int i, cont = 0;
    float media, media1 = 0;
    char aux[10];

    for (i = 0; i < 20; i++){

        media1 = vetor[i] + media1;
        printf("%d - %d ,",i, vetor[i]);
	cont++;

    }

    media = (media1/cont);
    printf("\n\nA media dos valores lidos eh : %.4f\n", media);

}

/*!
 \brief Essa função calcula a variancia dos 20 valores obtidos.
 \param vetor[20], vetor onde é armazenado os valores digitados.
 \return Retorna a variancia dos valores obtidos.
 */

int variancia(float vetor[20], float media){

    int i, cont = 0;
    float variancia = 0, calc_var_desv = 0, desvio = 0;

    for (i = 1; i < 21; i++){

        calc_var_desv = (vetor[i]-media)*(vetor[i]-media) + calc_var_desv;
        cont++;

    }

    variancia = calc_var_desv/cont;
    desvio = sqrt(variancia);
    printf("\n\nA variancia dos valores lidos eh : %.4f\n", variancia);
    printf("\n\nO desvio padrao dos valores lidos eh : %.4f\n\n\n", desvio);

}

/*!
 \brief Função principal do sistema
 \param argc Indica número de argumentos repassados ao programa
 \param argv Ponteiro para o valor dos parametros repassados na forma de texto
 \return Código de falha ou sucesso
 */

int main(int argc, char** argv){

    carrega_lista(vetor);

    media_fnc(vetor);

    variancia(vetor,media);

    ordena(vetor);

return(0);

}


