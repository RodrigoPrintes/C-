#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <queue>
#include <vector>
using namespace std;


int main (){

    std::vector<int> numeros = {10,20,30,40,50};
    
    auto it = std::find(numeros.begin(), numeros.end(), 30);

    if (it != numeros.end()){

        cout << "Valor encotrado em: "<< std::distance(numeros.begin(), it)<<endl;

    }else{
        cout << "valor não encntrado";
    }

    return 0 ;
}