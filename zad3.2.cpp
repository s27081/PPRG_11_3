#include <iostream>

using namespace std;


int main() {
    char chr = 'x';
        while (chr != 't') {
            cout << "Wpisz znak: ";
            cin >> chr;
            cout << chr << endl;
    }

    return 0;
}
