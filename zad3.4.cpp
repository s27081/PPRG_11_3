#include <iostream>
#include <string>
using namespace std;


int main() {

    int rows;
    int content = 1;

    cout << "Podaj rozmiar trojkata Pascala: ";
       cin >> rows;

       for (int i=0; i <= rows; i++) {
           content = 1;
           for (int k = rows - i; k > 0; k--) {
               cout << " ";
           }
           for (int j = 1; j <= i; j++) {
               cout << content << " ";
               content = content*(i - j)/j;
               }
           cout << endl;
           }

     return 0;
    }