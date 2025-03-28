# include <stdio.h>
 //Verificação de idade para classificação étaria.
 //Programa que classifica a idade de uma pessoa em categorias:criança, adolescenta, adulto ou idoso. 
 //Para isso seram usadas estruturas encadeadas.
int main(){
  int idade;
  printf("Digite sua idade: \n");
  scanf("%d, &idade");

  if(idade < 12){                                    //Criança < 12
                                                     //Adolescente 12 <= x < 18 
                                                     //Adulto 18 <= x < 60
                                                     //Idoso > 60
    printf("Você é uma criança\n");
  } else if (idade >= 12 &&idade < 18)
   {
    printf("Você é um adolescente\n");
   } else if (idade >= 18 &&idade < 60)
   {
    printf("Você é um adulto\n");
   } else {
    printf("Você é um idoso\n");
   }   
  
    return 0;
}