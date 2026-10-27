#include <iostream>
using namespace std;

int main() {
    double largura;
    double comprimento;
    double area;

    cout << "Inserir largura do terreno (metros): ";
    cin >> largura;

    cout << "Inserir comprimento do terreno (metros): ";
    cin >> comprimento;

    area = largura * comprimento;

    cout << "Area do terreno: " << area << " m2" << endl;

    return 0;
}