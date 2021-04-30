#include <stdio.h>

int main(){
    int i, j, x, linha=2, coluna=2;
    double matriz[linha][coluna], mult[linha][coluna];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    for (i = 0; i < linha; i++)
        for (j = 0; j < coluna; j++){
            mult[i][j] = 0;
            for (x = 0; x < coluna; x++)
                mult[i][j] = mult[i][j] + matriz[i][x] * matriz[x][j];
        }
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++)
            printf("%.3lf ", mult[i][j]);
        printf("\n");
    }
    return 0;
}


