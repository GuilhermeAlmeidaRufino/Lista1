#include <stdio.h>
#include <math.h>
int main(){
	 float n ;
	 
	 printf("informe o angulo:");
	 scanf("%f", &n);
		if(0<n, n<90){
			printf("O angulo e agudo");
			
			
		}else{
			
			if(n=90){
				printf("Esta com angulo reto");
				
			}else{
				if(90<n, n<180 ){
					
				printf("Esta  com angulo agudo");
				
				}else{
					if(n=180){
						
						printf("E angulo raso");
						
					} else{
						printf("Nao esta contido em nada ");
					}
					
				}
			}
			
		}
		  
























return 0;
}
