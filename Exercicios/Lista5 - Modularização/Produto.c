/*Fazer uma função que recebe um número inteiro n, um real x e retorna o produto dos n
primeiros termos da sequência acima. Utilize a função desenvolvida na questão anterior.*/

#include <stdio.h>
#include <math.h>

int EhPar(int n){
    
    int resul = 2 * n;

    return resul;
}

double UmSobreImpar(int n){

    
    double seq = 0.0;

    int cont = 0;

    for(int i = 3; cont < n; i +=2){
        
        seq = 1.0/i;

        cont++;
    }

    return seq; 
}

double parSobreImpar(int n){
    
    int par = EhPar(n);
    double impar = UmSobreImpar(n);

    float seq = 0.0;

        for(int i = 0; i < n; i ++){

        seq = impar*par;

        }

    return seq;
}

double sequencia(int n, double x){

    double seq = parSobreImpar(n);
    double resul;

    for(int i = 0; i < n; i ++){

        resul = seq * pow(x, i+1);

    }

    return resul;
}

double produto(int n, double x) {
   
    double somaProduto = 1.0;

    for (int i = 1; i <= n; i++) {  
        
        somaProduto *= sequencia(i,x);
       
    }

    return somaProduto;
}




int main(){

   printf("\nDigite qual termo da sequencia voce quer saber: ");
   int n;
   scanf("%d", &n);

   printf("\nDigite o valor de x: ");
   double x;
   scanf("%lf", &x);

   int resul = EhPar(n);

   printf("\nO termo %d da sequencia é: %d", n, resul);
  

   double resul2 = UmSobreImpar(n);

   printf("\nImpar: %.2lf", resul2);

   double resul3 = parSobreImpar(n);

   printf("\nResultado: %.2lf", resul3);

   double resulSeq = sequencia(n, x);
   printf("\nResultado Sequencia: %.2lf", resulSeq);

   double resulProduto = produto(n, x);
   printf("\nResultado Produto: %.2lf", resulProduto);
}
