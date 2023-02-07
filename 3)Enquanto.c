
#1-	Mostrar o intervalo de inteiros de 0 a 100

Int main
{
   int =cont;

   cout<<“Intervalo de inteiro de 0 a 100: \n”
    While (cont<=100)

  {
       cout<<cont<<”\n”.
       cont=cont+1
   }
}

================================================================================================================================
#2- Mostrar os impares de inteiros entre 0 e 100

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont=1;

	while(cont<=100)
		{
			cout<<cont<<"\n";
			cont=cont+2;
		}

	
	return 0;
}
================================================================================================================================
#3- Mostrar os pares entre 10 e 100 e a somatória dos pares, após mostrar os pares, mostrar a somatória

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont=10, soma=0;
	
	while(cont<=100)
	{
		cout<<cont<<"\n";
		soma=soma+cont;
		cont=cont+2;
	}
		cout<<"Somatoria: "<<soma<<"\n";
	return 0;
}
================================================================================================================================
#4- Ler dois valores inteiros negativos (consistir se é negativo), multiplicar e mostrar o resultado
   
================================================================================================================================ 
#5- Ler 10 valores inteiros, um de cada vez, e contar quantos deles estão no intervalo [10,20] e quantos deles estão fora do 
#intervalo, ao final mostrar estas informações.

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont=1, num=0, foraIntervalo=0, dentroIntervalo=0;
	
	while(cont<=10)
	{
		cout<<"Digite o "<<cont<<"o valor: ";
		cin>>num;
		cont=cont+1;
		if(num>=10 and num<=20)
		{
			dentroIntervalo=dentroIntervalo+1;
		}
			foraIntervalo=foraIntervalo+1;
	}
	
		cout<<"Qtd de valores dentro do intervalo: "<<dentroIntervalo<<"\n";
		cout<<"Qtd de valores fora do intervalo: "<<foraIntervalo;
	return 0;
}
================================================================================================================================
#6- Ler três notas de 50 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: 
#MP = (n1*2 + n2*4 + n3*3) / 10
#Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou 
#igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.
   
================================================================================================================================
#7-Escreva um algoritmo que gere os números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.
   
================================================================================================================================  
#8- Solicitar um número inteiro positivo (consistir), calcular o fatorial e mostrar
   
================================================================================================================================  
#9- Solicitar um número inteiro na base decimal positivo (consistir) calcular o binário e mostrar

================================================================================================================================
#10- Solicitar um número inteiro positivo (consistir) e mostrar se é ou não primo
