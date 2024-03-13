#include<stdio.h>
#include<locale.h>

  int main(){
  	    float tentrada, tsaida, r1, r2;
  	    
  	    printf("informe a r1:");
  	    scanf("%f", &r1);
  	    printf("informe a r2 :");
  	    scanf("%f", &r2);
  	    printf("informe a tentrada:");
  	    scanf("%f", &tentrada);
  	    tsaida = tentrada*(r2/(r1+r2));
  	    printf("a tsaida de %f",tsaida);
  	    return 0;
  }
