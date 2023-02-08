#1)	 Criar um vetor com 10 elementos
#•	Inserir os elementos de 1 a 10 no vetor
#•	Após a inserção, somente após a inserção mostrar o vetor.

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont=0, idade[5];
	for(cont=0;cont<=4;cont=cont+1)
	{
		idade[cont]=0;	
	}
	for(cont=0;cont<=4;cont=cont+1)
	{
		cout<<"Numero: ";
		cin>>idade[cont];
	}
	for(cont=0;cont<=4;cont=cont+1)
	{
		cout<<idade[cont]<<"...";
	}
	return 0;
}
=============================================================================================
#2)	Criar um vetor de 20 elementos
#- Inserir somente os pares começando de 10
#- após a inserção dos elementos, mostrar o vetor e a somatória dos elementos.
  
  
=============================================================================================
#3)	Criar um vetor A com 10 elementos
#•	Inserir os elementos de 1 a 10 no vetor
#•	Criar um outro vetor B que conterá o elemento do vetor A multiplicado por 2
#•	Mostrar os dois vetores
=============================================================================================
#4)	Criar um vetor A de 5 elementos do tipo inteiro
#•	Solicitar os valores para o usuário e inserir no vetor A
#•	Após a inserção mostrar o vetor A
=============================================================================================
#5)	Criar um vetor A de 15 elementos
#•	Solicitar um valor inteiro positivo na base decimal
#•	Transformar em binário e para binário calculado inserir no vetor A
#•	Após o cálculo mostrar o binário na ordem correta
#•	OBS:Mostrar somente os elementos inseridos
=============================================================================================
#6)	Criar um vetor A do tipo inteiro de 5 elementos
#•	Solicitar os valores para o usuário e inserir no vetor A
#•	Criar um vetor B do tipo inteiro de 
#•	Ler o vetor A e para cada elemento lido calcular o fatorial e gravar no B
#•	Após de todos os elementos do vetor A, mostrar os dois vetores
=============================================================================================
#7)	Criar um vetor A de 20 elementos do tipo inteiro
#•	Solicitar para o usuário um número do termo da série de fibonacci
#•	Calcular a série até o termo informado e para cada termo calculado inserir no vetor A
#•	Após a inserção mostrar o vetor A (somente a serie calculada)

----------------------------------------------------------------------------------------------------------------------------------
#8)	Criar um vetor A de 10 elementos do tipo inteiro
#•	Solicitar os valores para o usuário e inserir no vetor A
#•	Criar um vetor B de 10 elementos do tipo inteiro
#•	Ler o vetor A e para cada elemento achar se é ou não primo e gravar no vetor B, (um) P para primo e (zero) para não primo
#•	Após o cálculo mostrar o valor do elemento do vetor A e o correspondente do vetor B (zero não primo, e um primo)
