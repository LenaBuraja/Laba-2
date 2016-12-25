//Лабораторная работа №1 
//вариант 1 

#include <iostream> 
#include <vector>
#include "MainFile.h"

using namespace std;

void Vector::setCreate( string vname, int vx, int vy) { /*создание вектора*/
	cout << "Введите название вектора: \n";
	name = vname;
	cout << "Введите начальное значение координат по х: \n";
	x = vx;
	cout << "Введите начальное значение координат по у: \n";
	y = vy;
}

void Vector::setAdd(int vx, int vy) {/*сложение веторов*/

}

void Vector::setProduct () { /*произведение векторов*/

}

void Vector::getPrint () { /*вывод векторов*/

}

void Vector::setModule(int vmodule) { /*вычисление модуля вектора*/
	modul = vmodule;
	int sum;
	sum = x ^ 2 + y ^ 2;
	modul = sqrt(sum);
}

void main() {
	int numb;
	Vector objVector( string vname, int vx, int vy);
	for (;;) {
		cout << "Выберите действие: \n";
		cout << "1. Создание вектора.\n";
		cout << "2. Сложение векторов.\n";
		cout << "3. Произведение векторов.\n";
		cout << "4. Вывод векторов.\n";
		cout << "5. Вычисление модуля вектора.\n";
		//cout << "вектор";
		cin >> numb;
		switch (numb)
		{
		case 1: objVector.setCreate(vname, vx, vy);	break;
		case 2: objVector.setAdd(vx, vy);	break;
		case 3: objVector.setProduct();	break;
		case 4: objVector.getPrint();	break;
		case 5: objVector.setModule(vmodule);	break;
			return numb;
		}
	}
} 