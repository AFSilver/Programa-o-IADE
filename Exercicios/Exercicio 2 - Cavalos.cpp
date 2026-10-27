#include <iostream>
using namespace std;

int main() {
    int cavalos;
    int ferraduras;

    cout << "Inserir numero de cavalos: ";
    cin >> cavalos;

    ferraduras = cavalos * 4;

    cout << "Total de cavalos: " << cavalos << endl;
    cout << "Ferraduras necessarias: " << ferraduras << endl;

    return 0;
}