#include <iostream>
#include <string>
#include <Windows.h>
#include "MathLibrary.h"
using namespace std;

namespace MathLibrary {
    Vector::Vector(int v_X, int v_Y, int v_Z)
    {
        x = v_X;
        y = v_Y;
        z = v_Z;
    }

    Vector::Vector(int vec_x, int vec_y)
    {
        x = vec_x;
        y = vec_y;
        z = 0;
    }

    Vector::Vector(int vector_x)
    {
        x = vector_x;
        y = 0;
        z = 0;
    }

    Vector::Vector()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Vector Vector::Add(Vector k)
    {
        Vector result;
        result.x = this->x + k.x;
        result.y = this->y + k.y;
        result.z = this->z + k.z;
        return result;
    }

    Vector Vector::Sub(Vector k)
    {
        Vector result;
        result.x = this->x - k.x;
        result.y = this->y - k.y;
        result.z = this->z - k.z;
        return result;
    }

    int Vector::Sk_Mul(Vector k)
    {
        int skalyar;
        skalyar = this->x * k.x + this->y * k.y + this->z * k.z;
        return skalyar;

    }

    Vector Vector::Mul(int k)
    {
        Vector result;
        result.x = this->x * k;
        result.y = this->y * k;
        result.z = this->z * k;
        return result;
    }

    int Vector::Lenght()
    {
        int length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
        return length;
    }

    void Vector::Equ(Vector k)
    {
        int len1 = sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
        int len2 = sqrt(pow(k.x, 2) + pow(k.y, 2) + pow(k.z, 2));
        if (len1 > len2)
            cout << "Вектор a > Вектор b\n";
        else if (len1 < len2)
            cout << "Вектор a < Вектор b\n";
        else if (len1 == len2)
            cout << "Вектор a = Вектор b\n";
    }

    //перевантаження операторів
    Vector Vector::operator+(Vector second)
    {
        return Vector(this->x + second.x, this->y + second.y, this->z + second.z);
    }

    Vector Vector::operator-(Vector second)
    {
        return Vector(this->x - second.x, this->y - second.y, this->z - second.z);
    }

    Vector Vector::operator*(int second)
    {
        return Vector(this->x * second, this->y * second, this->z * second);
    }
    //кінець

    void Vector::Display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    void Vector::Read()
    {
        cout << "Введіть координату Х: \t";
        cin >> x;
        cout << "Введіть координату Y: \t";
        cin >> y;
        cout << "Введіть координату Z: \t";
        cin >> z;
    }

    string Vector::toString()
    {
        string str_x, str_y, str_z, output;
        str_x = to_string(x);
        str_y = to_string(y);
        str_z = to_string(z);
        output = "(" + str_x + "," + str_y + "," + str_z + ")";
        return output;

    }

}