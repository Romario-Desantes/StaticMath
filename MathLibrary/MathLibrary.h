#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace MathLibrary {
	class Vector {
    private:
        int x = 0, y = 0, z = 0; //координати вектора
    public:
        Vector(); //конструктор за замовчування
        Vector(int v_X, int v_Y, int v_Z);// конструктор з параметрами
        Vector(int vec_x, int vec_y); // конструктор з двома параметрами
        Vector(int vector_x); // кунструктор з одним параметром
        void Display();
        void Read();
        string toString();
        Vector Add(Vector k); //додавання
        Vector Sub(Vector k); //віднімання
        int Sk_Mul(Vector k);//скалярний добуток
        Vector Mul(int k);//множення на скаляр
        int Lenght();//довжина вектора
        void Equ(Vector k);//порівняння довжин векторів
        //ПЕРЕВАНТАЖЕННЯ ОПЕРАТОРІВ
        Vector operator+(Vector second);//перевантаження оператора +
        Vector operator-(Vector second);//перевантаження оператора 
        Vector operator*(int second);//перевантаження оператора *
	};
}