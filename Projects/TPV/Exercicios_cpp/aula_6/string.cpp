#include <iostream>
#include <string>

using namespace std;
int main (){

   int* pInt = new int;

   *pInt = 42;
/*
    std::cout << "Value: "<< *pInt << std::endl;

    int size = 5;

    int *pArray = new int[size];
    for (int i =0 ; i  < size; i++){
        pArray[i] = i;

    }
    std::cout <<"Valores array";

     for (int i =0 ; i  < size; i++){
       std::cout << pArray[i] <<" ";
        
    }

    std::cout << std::endl;

    delete pInt;
    delete[] pArray;
    return 0;
}*/