#include<stdio.h>
#include<locale.h>

  int main(){
  	    float r1, r2, r3, req;
  	    
  	    printf("informe a resistencia 1:");
  	    scanf("%f", &r1);
  	    printf("informe a resistencia 2:");
  	    scanf("%f", &r2);
  	    printf("informe a resistencia 3:");
  	    scanf("%f", &r3);
  	    req = r1+ r2+ r3;
  	    printf("a req e de %f", req);
  	    return 0;
  }
