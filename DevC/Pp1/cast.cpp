
#include "cast.h"
#include <iostream>

Cast::Cast(){}

double Cast::int2double(int n1, int n2){
    double ns = (double) n1;
    double ns2 = (double) n2;
    return  ns/ns2;
}
