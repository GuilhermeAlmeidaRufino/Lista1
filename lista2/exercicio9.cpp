//Descrição: Dada a idade de uma pessoa, classifique-a em uma faixa etária: criança, adolescente, adulto ou idoso.
//Condições:
//Criança: até 12 anos.
//Adolescente: 13 a 18 anos.
//Adulto: 19 a 60 anos.
//Idoso: mais de 60 anos.
//Entradas: Idade.
//Saída: Faixa etária.



#include <stdio.h>

int main(){
	int idade1;
	
	printf("Bem vindos a circular Bem Estar\n");
	printf("porfavor informe sua idade para que possamos falar sua condicoes de uso\n");
	printf("porfavor informe aqui sua idade...\n\n");
	printf("por favor informe numeros de 1 a 100\n\n");	
	printf("por favor digite sua idade:\n");
	scanf("%d", &idade1);
	
	
printf("\n");
	if (idade1 >= 1 &&idade1 <=13){
	printf ("voce e Crianca, adultos aatencao com elas \n\n");
}
	 else if(idade1 >=14 &&idade1 <=29){
	 
	  printf("voce e Adolecente, por favor de a preferencia \n\n");
	  }
	     else if(idade1 >=30 &&idade1 <=59){
	   printf("voce e Adulto, por favor de a preferencia \n\n");
}
	     else if(idade1 >=60 &&idade1 <=100){
		  printf("voce e idoso, por fovor procure um acento  \n");
}else{

printf("credenciais incorretas\n");	
}
	return 0;
}
