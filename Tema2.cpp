// Tema2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    using namespace std;
    // Declaram variabilele pentru cele 3 preturi
    float pret1, pret2, pret3;

    // Citim cele 3 preturi de la utilizator
    cout << "Introduceti primul pret: ";
    cin >> pret1;
    cout << "Introduceti al doilea pret: ";
    cin >> pret2;
    cout << "Introduceti al treilea pret: ";
    cin >> pret3;

    // Calculam pretul total
    float pret_total = pret1 + pret2 + pret3;

    // Calculam media preturilor
    float pret_mediu = pret_total / 3;

    // Afisam pretul total si pretul mediu
    cout << "Pretul total este: " << pret_total << endl;
    cout << "Pretul mediu este: " << pret_mediu << endl;

    return 0;
}




