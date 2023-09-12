#include<stdio.h>

main(){

//Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual, e o tempo de serviço de cada funcionário.
//Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, 
//e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
//o valor do salario atual do funcionário; o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

int tempServico;
float salarioAtu, salarioReaj, bonus;

printf("Qual o salario atual do funcionario? ");
scanf("%f", &salarioAtu);

printf("Quantos anos de contribuicao o funcionario possui? ");
scanf("%d", &tempServico);

if ( salarioAtu <= 500 && tempServico < 1 ) {
        salarioReaj = salarioAtu * 1.25;  

} else if ( salarioAtu <= 1000 && tempServico >= 1 && tempServico <= 3 ) {
        salarioAtu = salarioAtu * 1.20;  
        bonus = 100; 

} else if ( salarioAtu <= 1500 && tempServico >= 4 && tempServico <= 6 ) {
        salarioReaj = salarioAtu * 1.15;  
        bonus = 200;  

} else if ( salarioAtu <= 2000 && tempServico >= 7 && tempServico <= 10 ) {
        salarioReaj = salarioAtu * 1.10;  
        bonus = 300;  

} else if ( salarioAtu > 2000 && tempServico > 10 ) {
        salarioAtu = salarioAtu;  
        bonus = 500;  

} else {
        salarioReaj = salarioAtu;  
}

printf("O salario apos o reajuste e: %.2f\n", salarioReaj);
printf("O bonus e de: %.2f\n", bonus);


return 0;

}






