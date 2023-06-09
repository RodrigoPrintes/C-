#include <iostream>

using namespace std;

class Daite {
    private:
        float kcalday, nrefs, n_protei, n_fat, n_cab;
        string n_ref;
        
    public:
        Daite() {
           // num1 = 0;
           // num2 = 0;
        }
    /*
        void setNum1(float num) {
            num1 = num;
        }

        void setNum2(float num) {
            num2 = num;
        }

        float add() {
            return num1 + num2;
        }

        float subtract() {
            return num1 - num2;
        }

        float multiply() {
            return num1 * num2;
        }

        float divide() {
            if (num2 == 0) {
                cout << "Não é possível dividir por zero." << endl;
                return 0;
            } else {
                return num1 / num2;
            }
        }*/
};

int main() {
    Daite calc;
    char op;
    float num1, num2, result;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    //calc.setNum1(num1);

    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;

    cout << "Digite o segundo número: ";
    cin >> num2;
    /*calc.setNum2(num2);

    switch (op) {
        case '+':
            result = calc.add();
            break;
        case '-':
            result = calc.subtract();
            break;
        case '*':
            result = calc.multiply();
            break;
        case '/':
            result = calc.divide();
            break;
        default:
            cout << "Operador inválido." << endl;
            return 1;
    }

    cout << "Resultado: " << result << endl;
    */
    return 0;
}