#include <stdio.h>

int main(){
    int grau, i, j;
    scanf("%d", &grau);
    int matriz[grau][grau];
    for(i=0; i<grau; i++){
        for(j=0; j<grau; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<grau; i++){
        for(j=0; j<grau; j++) {
            if (i == j) {
                printf("%d\n", matriz[i][j]);
            }
        }
    }

    return 0;
}


