
#include <iostream>
#include <string>
using namespace std;

#include "cast.h"
#include "Ponteiro.h"
#include "vetores.h"
int main(){
	
	/*
	Exercício TPV

main.cpp onde vou declarar dois ints, um de 10 e um de 20. Então vou passar eles pra classe Cast,
que vai retornar os os dois ints divididos, 10/20, em double. Printa essa divisão no main.

Depois, cria uma classe Ponteiros que
Recebe um ponteiro int e retorna o valor desse int. Printa esse valor.

Por fim, cria uma classe Vetores que cria um vetor de tamanho 10 com valores qualquer.
A classe recebe um int índice que indica qual numero do vetor retornar. 
Printa esse valor retornado.
	
	*/
    Cast cast;
    Ponteiro ponteiro;
    Vetores vetor;
    
    double d = cast.int2double(10,20);

    cout << "Resultado: "<< d << endl;
    cout << "\n";
    
    //#####################################
    int num = 10;
    
    int ptr = ponteiro.ponteiros(&num);
   
    cout << "Resultado: "<< ptr << endl;
    cout << "\n";
    
    //######################################
    
    
    int n = vetor.vetor(5);
   
    cout << "Resultado: "<< n << endl;
    cout << "\n";
    
	
	//######################################

    return 0;
}

   
