#include<stdio.h>
#include<math.h>

main(){

//calcule as raízes da equação de 2º grau. Lembrando que:
//a variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 
//Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz, se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única, se ∆ > 0, imprima as duas raízes reais.  

double numA, numB, numC, delta, sqrtdelta, x1, x2;

printf("Qual é o valor dos numeros:");
scanf("%lf %lf %lf", &numA, &numB, &numC);

delta = 2 * numB - 4 * numA  * numC;
sqrtdelta = sqrt(delta);

printf("%lf", sqrtdelta);

if(numA == 0 ){

    printf("o programa terminou\n");
    
}else if(delta < 0){

    printf("não é existe raiz\n");

}else{

    if(delta == 0){
     x1 = (-numB + sqrtdelta)/ (2*numA);
     printf("raiz unica %lf\n", x1);
    }else{
     x1 = (-numB + sqrtdelta)/ (2*numA);
     x2 = (-numB - sqrtdelta)/ (2*numA);
     printf("x1 %lf\n", x1);
     printf("x2 %lf\n", x2);
    }
  }
  
return 0;

}
