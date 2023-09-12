#include<stdio.h>

main(){

//Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
//A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
//mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
//A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 

float prova1, prova2, prova3, media;

printf("digite a nota das tres provas: ");
scanf("%f %f %f", &prova1, &prova2, &prova3);

media = ( prova1 + prova2 + prova3 * 2)/4;

if(media >= 7.0){
    
   printf("media: %.2f\n", media);
   printf("aluno aprovado\n");

}

return 0;

}
