#include <stdio.h>

int main(){
    int i, j, matriz[6][6], soma=0;
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            scanf("%d ", &matriz[i][j]);
            soma+=matriz[i][j];
        }
    }
    printf("%d\n", soma);
    return 0;
}
