
#include <iostream>
#include <string>
using namespace std;

#include "cast.h"

int main(){
    Cast cast;
    double d = cast.int2double(10,20);

    cout << "Resultado: "<< d << endl;
    return 0;
}