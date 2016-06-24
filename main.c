#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Sistema de Classe
Desenvolvedor: Melque Henrique Lemes de Castro
*/




/*Declaraзгo da variaveis clobais de controle...*/
int cont,cont2;
/*Declaraзгo da Struct alunos onde estгo guardadas todas a veriaveis ultilizadas no Programa...*/
struct aluno{
        char nome[50],situ[50];
        int freq,mat;
        float prova1,prova2,trab1,trab2,trabF,media;


}typedef aluno;;


/*Funзгo para o cadastro*/
void cadastro(aluno *alunos,int cont2){

int cont;

for(cont=0;cont < cont2;cont++){

	printf("Cadastre a Matricula do aluno: ");
	scanf("%d",&alunos[cont].mat);
	printf("Cadastre o aluno: ");
	fflush(stdin);/*unзгo se for ultilizar o programa no windows*/
	/*_purge(stdin); //Funзгo se for ultilizar o programa no linux*/
	fgets(alunos[cont].nome, sizeof(alunos[cont].nome), stdin);
	printf("Cadastre a frequencia:\n ");
	scanf("%d", &alunos[cont].freq);
	printf("Cadastre a nota da primeira prova:\n ");
	scanf("%f",&alunos[cont].prova1);
/*condiзгo para nгo digitar notas erradas...*/
	while (alunos[cont].prova1>30){
		printf ("valor da nota da primeira prova e superior a nota permitida, por favor, escreva novamente\n");
		scanf ("%f", &alunos[cont].prova1);
		}
	printf("Cadastre a nota da segunda prova:\n ");
	scanf("%f",&alunos[cont].prova2);
/*condiзгo para nгo digitar notas erradas...*/
	while (alunos[cont].prova2>50){
	printf ("valor da nota da Segunda Prova e superior a nota permitida, por favor, escreva novamente:\n");
	scanf ("%f", &alunos[cont].prova2);
	}

	printf("Cadastre a nota do primeiro trabalho:\n ");
	scanf("%f",&alunos[cont].trab1);
/*condiзгo para nгo digitar notas erradas...*/
	while (alunos[cont].trab1>5){
	printf ("valor da nota do primeiro Trabalho e superior a nota permitida, por favor, escreva novamente:\n");
	scanf ("%f", &alunos[cont].trab1);
	}

	printf("Cadastre a nota do segundo trabalho:\n ");
	scanf("%f",&alunos[cont].trab2);
/*condiзгo para nгo digitar notas erradas...*/
	while (alunos[cont].trab2>5){
	printf ("valor da nota do Segundo Trabalho e superior a nota permitida, por favor, escreva novamente:\n");
	scanf ("%f", &alunos[cont].trab2);
	}

	printf("Cadastre a nota do trabalho final:\n ");
	scanf("%f",&alunos[cont].trabF);
/*condiзгo para nгo digitar notas erradas...*/
	while (alunos[cont].trabF>10){
	printf ("valor da nota do Trabalho Final e superior a nota permitida, por favor, escreva novamente:\n");
	scanf ("%f", &alunos[cont].trabF);
	}

}




printf("\n------------------------------------\n");
printf("\nInformacoes cadastradas com sucesso...\n");
printf("\n------------------------------------\n");
system("\npause\n");


}


/*Funзгo para a formaзгo da nota e verificaзгo da situaзгo do aluno...*/
void verifica(aluno *alunos,int cont2){
/*Calculo da media...*/
for(cont=0;cont<cont2;cont++){

alunos[cont].media = (alunos[cont].prova1 + alunos[cont].prova2 + alunos[cont].trab1 + alunos[cont].trab2 + alunos[cont].trabF);

}
/*verificaзгo da situaзгo do aluno...*/
for(cont=0;cont<cont2;cont++){
if(alunos[cont].media>=70 && alunos[cont].freq >=48){

strcpy(alunos[cont].situ, "Aprovado");

}
else{

strcpy(alunos[cont].situ, "Reprovado");
}

}



}
/*Funзгo responsavel pela busca de um aluno em especifico...*/
void busca(aluno *alunos,int cont2){
    int nmat;
printf("\n------------------------------------\n");
printf("Sistema de Busca.\n");
printf("\n------------------------------------\n");
printf("Digite a matricula do aluno: \n");
scanf("%d",&nmat);
/*For para impressгo...*/
for(cont=0;cont<cont2;cont++){
if(nmat==alunos[cont].mat){
    printf("\n------------------------------------\n");
    printf("\nMatricula: %d\n", alunos[cont].mat);
    printf("Nome: %s", alunos[cont].nome);
    printf("Media: %f\n", alunos[cont].media);
    printf("Situacao: %s\n", alunos[cont].situ);
    printf("Frenquencia: %d\n", alunos[cont].freq);
    printf("\n------------------------------------\n");
  }
 }
}

/*Funзгo para Imprimir o Relatorio Geral dos alunos...*/
void lista(aluno *alunos,int cont2){
int cont;
printf("\n------------------------------------\n");
printf("\nRelatorio Completo.\n");
for(cont=0;cont<cont2;cont++){

printf("\nMatricula: %d\n",alunos[cont].mat);
printf("Nome: %s",alunos[cont].nome);
printf("Frequencia: %d\n",alunos[cont].freq);
printf("Situacao: %s\n", alunos[cont].situ);
printf("Media: %f\n",alunos[cont].media);
}
printf("\n------------------------------------\n");

}
/*Funзгo para imprimir o Relatorio de Alunos Aprovados...*/
void relatorio1(aluno *alunos,int cont2){

printf("\n------------------------------------\n");
printf("Relatorio de Aprovados.\n");
for(cont=0;cont<cont2;cont++){
if(alunos[cont].media>=70 && alunos[cont].freq >=48){


    printf("\nMatricula: %d\n", alunos[cont].mat);
    printf("Nome: %s", alunos[cont].nome);
    printf("Media: %f\n", alunos[cont].media);
    printf("Situacao: %s\n", alunos[cont].situ);
    printf("Frenquencia: %d\n", alunos[cont].freq);

}

else printf("Nenhum Aprovado.\n");
}


printf("\n------------------------------------\n");
}
/*Funзгo para imprimir o Relatorio dos alunos Reprovados...*/
void relatorio2(aluno *alunos,int cont2){
printf("\n------------------------------------\n");
printf("Relatorio de Reprovados.\n");
for(cont=0;cont<cont2;cont++){
if(alunos[cont].media<70 || alunos[cont].freq <48){



    printf("\nMatricula: %d\n", alunos[cont].mat);
    printf("Nome: %s", alunos[cont].nome);
    printf("Media: %f\n", alunos[cont].media);
    printf("Situacao: %s\n", alunos[cont].situ);
    printf("Frenquencia: %d\n", alunos[cont].freq);

  }
else printf("Nenhum Reprovado.\n");
}


printf("\n------------------------------------\n");
}




/*Funзгo Principal Responsavel pela chamadas das de mais funзхes...*/

int main(){
int menu;


/*Linha para imformar a quantidade de alunos que deseja cadastrar...*/

printf("Digite a quantidade de alunos que deseja cadastrar:\n ");
scanf("%d",&cont2);

/*instanciaзгo da struct no main...*/
aluno alunos[cont2];



/*impressгo do Menu...*/
       printf("\n------------------------------------\n");
       printf("Sistema para Cadastro de alunos e Notas.\n");
       printf("\n------------------------------------\n");
       printf("Informaзoes do Sistema:\n Prova 1 = 30\n Prova 2 = 50\n Trabalho 1 = 5\n Trabalho 2 = 5\n Trabalho Final = 10\n");


while(menu!=6){

       printf("Menu:\n|1|-Para Cadastro.\n|2|- para Buscas.\n|3|-Relatorio.\n|4|-Para Relatorio de Aprovados.\n|5|- Para Relatorio de Reprovados.\n|6|- Para Sair");
       printf("\n------------------------------------\n");
       scanf("%d",&menu);



switch (menu){



          case 1 : cadastro(alunos,cont2);/*chamada da funзгo cadastro...*/
	verifica(alunos,cont2);

       break;

         case 2 : busca(alunos,cont2);/*Chamada da funзгo busca...*/
       break;

          case 3 : lista(alunos,cont2);/*Chamada da funзгo lista...*/
       break;

         case 4 : relatorio1(alunos,cont2);/*Chamada da funзгo Relatorio1...*/
       break;

        case 5 : relatorio2(alunos,cont2);/*Chamada da funзгo Relatorio2...*/
       break;

       case 6 : printf("Finalizando o Sistema...\n\nSoftware Desenvolvido por Melque Henrique Lemes de Castro\n\nGraduando em Ciencia da Computacao.\n\nTodos os direitos reservados\n\n");/*Finaliza do Programa...*/
       break;

          default: printf("Opзгo invalida...\n");
          break;
 }
}

system("pause");
}