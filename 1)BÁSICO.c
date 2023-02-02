#01. Faça um algoritmo que receba 2 números inteiros e apresente a soma desses números.
#Entrada-> 2 números inteiros
#Processamento-> soma dos 2 números inteiros
#Saída  -> resultado da soma

int main()
{
    int n1=0, n2=0, soma=0;
  cout << "\nSoma de dois numeros\n";	// barra n é para pular de linha
  cout<< "Digite um numero:";
  cin>> n1;
  cout << "Digite outro numero:";
  cin>> n2;
  soma = n1 + n2;
  cout << "Resultado da soma: " << soma;



}


===================================================================================================================================================

#02. Faça um algoritmo que receba 2 números inteiros e mostre os dois números.
      #Entrada ->  2 números inteiros
      #Processamento ->  não
      #Saída ->  2 números inteiros
 Int main()
{
   int n1=0, n2=0;

  cout<<“\nExibição de números Inteiros\n”;
  cout<<“Digite um número: “;
  cin>> n1;
  cout<< “Digite outro número: “;
  cin>> n2;
  cout<< n1<< n2;

}

===================================================================================================================================================

#03. Faça um algoritmo que receba 2 números e apresente a multiplicação dos dois números
int main ( )
{
    int num1=0, num2=0;
    float mult=0;

    cout<< “Digite um número: “;
    cin>> num1;
    cout << “Digite outro número: ”;
    cin>> num2;

    mult=num1*num2;

    cout<< mult;




}

 ===================================================================================================================================================

#04. Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: 
#VOLUME <-- 3.14159 * RAIO2  * ALTURA.
   
 Int main( )
{
	
	float r=0, h=0, volume=0;
	const double pi = 3.1415;
	
	cout<< "\nCalculo de Volume de um Cilindro\n";
	cout<< "Raio: ";
	cin>> r;
	cout<< "Altura: ";
	cin>> h;
	
	r= r*r;
	volume= pi*r*h;
	
	cout<< "Volume: "<< volume;
}
  
===================================================================================================================================================

#05. Ler dois valores inteiros para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável 
#B e a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.
 
Int main ( ){
  	int a=0, b=0;
  
	cout<<"\nTroca de valores\n";
	cout<<"Digite um número para A: ";
	cin>>a; 
	cout<<"Digite outro número para B: ";
	cin>>b;
    
   
	cout<<"\nA: "<<b;
  cout<<"\nB:"<<a;
}

===================================================================================================================================================
#06. Efetuar a leitura de um número inteiro e apresentar o resultado do quadrado desse número.
Int main ()
{
   int  num=0;

   cout<< “Encontrar o quadrado de um número”;
   cout<< “Digite um número inteiro: “;
   cin>> num;
   num= num*num;

  cout<< “Resultado: “, num;

}


===================================================================================================================================================

#07. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
===================================================================================================================================================

#08. Faça um algoritmo que leia a idade de uma pessoa expressa em ano, mês e dia e mostre-as em dias.
===================================================================================================================================================

#09. Faça um programa que calcule a área da circunferência.
#A=3.14159*15²
#A =706,858
  
Int main ()
{
   float a=0, r=0;

   cout<< “Area da Circunferência”;
   cout<< “Raio: “;
   cin>> r;

   r = r * r; 

    a = 3.14159*r;

    cout<< “Resultado: “<< a;


}
  
===================================================================================================================================================
#10. Faça um programa que receba um número e mostre o resto da divisão por 6.
  
Int main( ){
  float num=0, resto=0;
  

cout<< “Resto de divisão”;
cout<<“Digite um número: “;
cin>> num;

resto=num mod 6;

cout<<“Resto: “<<resto;

}

===================================================================================================================================================

#11. Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula
#PRESTAÇÃO <-- VALOR + (VALOR * (TAXA/100) * TEMPO)
===================================================================================================================================================

#12. Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar. O programa deve solicitar o valor da 
#cotação do dólar e também a quantidade de dólares disponível com o usuário, para que seja apresentado o valor em moeda brasileira.

  
 # FALTAM 7-8-11-12
