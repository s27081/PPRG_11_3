#include <iostream>
#include <string>
using namespace std;


int main() {
    int A;
    int B;
    int C;

    cout << "Postac ogolna funkcji kwadratowej" << endl;
    cout << "Podaj parametr A: ";
    cin >> A;
    if (A == 0) {
        while (A == 0) {
            cout << "A nie moze byc rowne 0, podaj inna wartosc: ";
            cin >> A;
        }
    }
    cout << endl << "Podaj parametr B: ";
    cin >> B;
    cout << endl << "Podaj parametr C: ";
    cin >> C;
   
    string func = to_string(A) +"x^2+" + to_string(B) + 'x' + '+' + to_string(C);

    cout << "Postac ogolna funkcji kwadratowej z parametrami A,B i C: " << func << endl;

    int delta = (B * B) - (4 * A * C);

    if (delta > 0) {
        float x1 = (B * (-1) - sqrt(delta)) / (2 * A);
        float x2 = (B * (-1) + sqrt(delta)) / (2 * A);


    }
    else if (delta == 0) {
        float x = B * (-1) / (2 * A);
    }

   


    return 0;
}