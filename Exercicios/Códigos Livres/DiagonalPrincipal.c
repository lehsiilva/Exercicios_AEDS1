#include <stdio.h>
const int linha = 3;
const int coluna = 3;

void ler(int m[linha][coluna]){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void diagonal(int m[linha][coluna]){
    
    printf("\nDiagonal principal: ");
    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){
            
            if(i == j){
                printf("%d ",m[i][j]);
            }
           
        }
         
        
    }
    
}

int main(){
    int m[linha][coluna];
    ler(m);
    diagonal(m);
}