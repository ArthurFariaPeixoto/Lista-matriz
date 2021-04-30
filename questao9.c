#include <stdio.h>

int main(){
    int linha, coluna, i, j, cont=0;
    scanf("%d %d", &linha, &coluna);
    int matriz[linha][coluna];
    for(i=0; i<linha; i++){
        for(j=0;j<coluna;j++){
            if(i%2==0 && j%2==0){
                matriz[i][j]=0;
            }
            if(i%2==0 && j%2!=0){
                matriz[i][j]=1+cont;
                cont++;
            }
            if(i%2!=0 && j%2==0){
                matriz[i][j]=1+cont;
                cont++;
            }
            if(i%2!=0 && j%2!=0){
                matriz[i][j]=0;
            }

        }

    }
    for(i=0; i<linha; i++) {
        for (j = 0; j<coluna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

