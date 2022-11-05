#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    float x;
    float y;

    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << endl << "Podaj liczbe y: ";
    cin >> y;

    cout << "Suma x i y: " << setprecision(2) << x + y << fixed <<endl;
    cout << "Roznica x i y: " << setprecision(2) << x - y << fixed << endl;
    cout << "Iloczyn x i y: " << setprecision(2) << x * y << fixed << endl;
    cout << "Iloraz x i y : " << setprecision(2) << x + y << fixed << endl;

    return 0;
}