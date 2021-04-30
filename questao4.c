#include <stdio.h>

int main(){
    int linha, coluna, i, j;
        scanf("%d", &linha);
    while(linha<=0 || linha>10) {
        scanf("%d", &linha);
    }
        scanf("%d", &coluna);
    while(coluna<=0 || coluna>10){
        scanf("%d", &coluna);
    }

    int matriz[linha][coluna];

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0;i<linha;i++){
        printf("linha %d: ", i+1);
        for(j=0;j<coluna;j++){
            printf("%d", matriz[i][j]);
            printf(",");
        }
        printf("\n");
    }
    return 0;
}


