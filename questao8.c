#include<stdio.h>

main(){

//Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: 
//• Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 


int idade, tempTrabalho;

printf("Qual a idade do trabalhador? ");
scanf("%d", &idade);

printf("Quantos anos de contribuicao o trabalhador possui? ");
scanf("%d", &tempTrabalho);

if ( idade >= 65, tempTrabalho >= 30, (idade = 60 && tempTrabalho >= 25)){

    printf("o trabalhador pode se aposentar\n");

}else{

    printf("O trabalhador ainda nao pode se aposentar\n");
}

return 0;

}
     



     
