/*William Felicio dos Santos*/
#include <stdio.h>

main() {
  float matriza[3][3], matrizb[3][3], matrizr[3][3], multi;
  int i, j, w;
  
  printf("\n==============MATRIZ 3x3==============\n");
  
/*OBTENÇÃO DA PRIMEIRA MATRIZ*/
printf("\nDigite a matriz A:\n");
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
    	printf("\nDigite um valor para Linha[%d]Coluna[%d]: ", i+1, j+1);
    	scanf("%f", &matriza[i][j]); 
   } 
  } 
 
 
/*EXIBINDO A PRIMEIRA MATRIZ DIGITADA*/
printf("\n");
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
    	printf("%f ", matriza[i][j]);  
		}
    printf("\n");
	}
  
  
/*OBTENÇÃO DA SEGUNDA MATRIZ*/
printf("\nDigite a matriz B:\n");  
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
		printf("\nDigite um valor para Linha[%d]Coluna[%d]: ", i+1, j+1);
    	scanf("%f", &matrizb[i][j]); 
		} 
	}
  
  
/*EXIBINDO A SEGUNDA MATRIZ DIGITADA*/
printf("\n");
	for (i=0; i<3; i++) {
    	for (j=0; j<3; j++) {
    	printf("%f ", matrizb[i][j]);  
   		}
	printf("\n");
	}	
  
  
/*CALCULANDO O PRODUTO DAS 2 MATRIZES DIGITADAS ANTERIORMENTE*/
	for (i=0; i<3; i++) {
    	for (j=0; j<3; j++) {
    		multi=0.0;
			for (w=0; w<3; w++){
    		multi=multi+matriza[i][w]*matrizb[w][j];	
			} 
	matrizr[i][j]=multi;
		}
	}


/*EXIBINDO O RESULTADO FINAL(PRODUTO DAS 2 MATRIZES DIGITADAS PELO USUARIO)*/  
printf("\nO PRODUTO DAS DUAS MATRIZES 3x3 DIGITADAS E:\n\n");
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
		printf("%f ", matrizr[i][j]);  
		}
	printf("\n");  
	}

return 0;

}
