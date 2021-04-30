#include <stdio.h>

int main(){
    int grau, i, j, soma=0, aux;;
    scanf("%d", &grau);
    int matriz[grau][grau];
    int matriztransposta[grau][grau];
    for(i=0; i<grau; i++) {
        for (j = 0; j < grau; j++) {
            scanf("%d", &matriz[i][j]);
            if(i==j){
                soma+=matriz[i][j];
            }
            matriztransposta[i][j]= matriz[i][j];
        }
    }
    for (i = 0; i < grau; i++) {
        for (j = i+1; j < grau; j++) {
            if (j != i) {
                aux = matriztransposta[i][j];
                matriztransposta[i][j] = matriztransposta[j][i];
                matriztransposta[j][i] = aux;
            }
        }
    }


    for(i=0; i<grau; i++) {
        for (j = 0; j < grau; j++) {
            printf("%d ", (matriz[i][j]*soma)+matriztransposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}


