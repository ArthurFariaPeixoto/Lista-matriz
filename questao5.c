#include <stdio.h>

int main(){
    int linha, coluna, i, j;
    scanf("%d %d", &linha, &coluna);
    int matriz[linha][coluna];
    for(i=0; i<linha; i++){
        for(j=0;j<coluna;j++){
            if(i%2==0 && j%2==0){
                matriz[i][j]=1;
            }
            if(i%2==0 && j%2!=0){
                matriz[i][j]=0;
            }
            if(i%2!=0 && j%2==0){
                matriz[i][j]=0;
            }
            if(i%2!=0 && j%2!=0){
                matriz[i][j]=1;
            }

        }
    }
    for(i=0; i<linha; i++) {
        for (j = 0; j<coluna; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


