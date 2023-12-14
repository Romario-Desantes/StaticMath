#include <iostream>
#include <string>
#include <Windows.h>
#include "MathLibrary.h"
using namespace std;
using namespace MathLibrary;
int main()
{
    SetConsoleCP(1251);//підключення української мови
    SetConsoleOutputCP(1251);
    int skalyar;//змінна для збеоігання значення скалярного добутку
    Vector res;//об'єкт для ініціалізації результату
    Vector a(4, 7, 5);//вектор a
    cout << "Вектор заданий відразу в програмі: " << a.toString() << endl;// виведення на екран через метод toString()
    Vector b;//вектор b
    b.Read();//Метод Read(), через нього задаєм вектор b
    res = a.Add(b);//додавання векторів
    cout << "Додавання: ";
    res.Display();//виведення на екран
    res = a.Sub(b);//віднімання
    cout << "Віднімання: ";
    res.Display();
    skalyar = a.Sk_Mul(b);//скалярний добуток
    cout << "Скалярний добуток: " << skalyar << endl;
    res = a.Mul(skalyar);//множення на скаляр вектора а
    cout << "Множення на скаляр вектора а: " << res.toString() << endl;
    res = b.Mul(skalyar);//множення на скаляр вектора b
    cout << "Множення на скаляр вектора b: " << res.toString() << endl;
    cout << "Довжина вектора а: " << a.Lenght() << endl;
    cout << "Довжина вектора b: " << b.Lenght() << endl;
    a.Equ(b);//порівняння довжини векторів
    //ПЕРЕВАНТАЖЕННЯ ОПЕРАТОРІВ
    cout << "______________________________________________________________" << endl;
    cout << endl;
    cout << "ПЕРЕВАНТАЖЕННЯ ОПЕРАТОРІВ: " << endl;
    cout << "Додавання: ";
    res = a + b;
    res.Display();
    cout << "Віднімання: ";
    res = a - b;
    res.Display();
    res = a * skalyar;
    cout << "Множення на скаляр вектора а: " << res.toString() << endl;
    res = b * skalyar;
    cout << "Множення на скаляр вектора b: " << res.toString() << endl;

}

