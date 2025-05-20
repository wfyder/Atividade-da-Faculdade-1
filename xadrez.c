#include <stdio.h>
void moverTorre(int casas) {
	if( casas == 0){
		printf("Direita\n");
		moverTorre( casas - 1);
	}
}
	
	void moverBispo(int linhas, int colunas) {
	for( int i =0; i < linhas; i++){
	 for(int j = 0; j < colunas; j++){
	 	printf("Cima Direita\n");
	}
 }
}

void moverRainha(int casas) {
	if( casas == 0){
		printf("Direita\n");
		moverRainha( casas - 1);
	}
}
	
	void moverCavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {
        for (int i = 0, j = 0; i < 3 && j < 2; i++, j++) {
            if (i < 2) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
    }
}
int main()
{
int casasTorre = 5, casasRainha = 8, casasBispo = 5, casasCavalo = 3;

	printf("Movimentação da Torre:\n");
    moverTorre(casasTorre);
	 
	 	printf("Movimentação da Bispo:\n");
       moverBispo(casasBispo, casas Bispo);
       
	 	printf("Movimentação da Rainha:\n");
	    moverRainha(casasRainha);
				  
				  
				  printf("Movimento do Cavalo: \n");
		     moverCavalo(casasCavalo);
				return 0;
					
							
}