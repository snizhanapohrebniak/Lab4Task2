#include <iostream>
#include <cmath> // Для математичних обчислень

using namespace std;

// Константа для значення π
const double PI = 3.14;

// Функція перевірки коректності введених даних
bool validateInput(double R) {
    if (R > 0) {
        return true; // Радіус коректний
    }
    else {
        cout << "Radius dolzhen byt polozhitelnym chislom!" << endl;
        return false; // Радіус некоректний
    }
}

// Функція обчислення площі круга
double CircleS(double R) {
    return PI * pow(R, 2); // S = π * R^2
}

int main() {
    // Змінні для радіусів трьох кіл
    double R1, R2, R3;

    // Введення радіусів
    cout << "Vvedite radius pervogo kruga: ";
    cin >> R1;
    cout << "Vvedite radius vtorogo kruga: ";
    cin >> R2;
    cout << "Vvedite radius tretyego kruga: ";
    cin >> R3;

    // Перевірка коректності даних
    if (validateInput(R1) && validateInput(R2) && validateInput(R3)) {
        // Якщо всі радіуси коректні, обчислюємо площі
        double S1 = CircleS(R1);
        double S2 = CircleS(R2);
        double S3 = CircleS(R3);

        // Виведення результатів
        cout << "Ploshchad pervogo kruga: " << S1 << endl;
        cout << "Ploshchad vtorogo kruga: " << S2 << endl;
        cout << "Ploshchad tretyego kruga: " << S3 << endl;
    }
    else {
        // Якщо радіуси некоректні, розрахунок не виконується
        cout << "Vychisleniya ne vypolnyayutsya iz za nekorrektnykh dannykh." << endl;
    }

    return 0;
}