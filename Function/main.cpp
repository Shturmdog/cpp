#include <iostream>
#include "Function.h"
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    // Создаём параболу
    Parabola p(1, -3, 2);

    // Вывод информации о функции
    p.printInfo();
    cout << endl;

    // Вычисляем значения в точках
    cout << "Значения функции:" << endl;
    p.printResult(0);
    p.printResult(1);
    p.printResult(2);
    p.printResult(3);
    cout << endl;

    // Поиск минимума и максимума на интервале [0, 3]
    double left = 0, right = 3;
    cout << "На интервале [" << left << ", " << right << "]:" << endl;
    cout << "Минимум: " << p.findMin(left, right) << endl;
    cout << "Максимум: " << p.findMax(left, right) << endl;
    cout << "\n";

    //Интегрирование
    cout << "Интегрирование" << endl;
    cout << "Интеграл от 0 до 2: " << p.integrate(0, 2) << endl;
    cout << "\n";

    // Дифференцирование
    cout << "Дифференцирование" << endl;
    cout << "Производная в x=1: " << p.diff(1) << endl;
    cout << "Производная в x=2: " << p.diff(2) << endl;

    return 0;
}