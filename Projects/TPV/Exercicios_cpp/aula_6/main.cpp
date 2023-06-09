#include <iostream>
#include <chrono>

class Vector{
    private:
        int x;
        int y;

    public:
        Vector (int x = 0, int y = 0 : x(x), y(y)){}

        Vector operator+(const Vector& other)const{
                return Vector(x + other.x, y + other.y);
        }
        void print(){
            std::cout << "("<< x <<","<< y <<")" << std::endl;

        }
    
};
int main (){
    Vector v1(1,2);
    Vector v2(3,4);

    Vector v3 = v1+v2;
    v3.print();
    return 0;
}