#include "vetores.h"
#include <iostream>
using namespace std;

Vetores::Vetores(){}

int Vetores::vetor(int index){
	
	int v[10];
	
	for (int i = 0; i<10; i++){
		
		v[i] = (i+1)*5;
	}
	if (index >= 0 & index <=9){
		return v[index];
	}else{
		cout <<"Index out of vetor";
		return -1;
	}		
}
