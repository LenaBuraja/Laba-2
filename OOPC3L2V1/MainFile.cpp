//������������ ������ �1 
//������� 1 

#include <iostream> 
#include <vector>
#include "MainFile.h"

using namespace std;

void Vector::setCreate( string vname, int vx, int vy) { /*�������� �������*/
	cout << "������� �������� �������: \n";
	name = vname;
	cout << "������� ��������� �������� ��������� �� �: \n";
	x = vx;
	cout << "������� ��������� �������� ��������� �� �: \n";
	y = vy;
}

void Vector::setAdd(int vx, int vy) {/*�������� �������*/

}

void Vector::setProduct () { /*������������ ��������*/

}

void Vector::getPrint () { /*����� ��������*/

}

void Vector::setModule(int vmodule) { /*���������� ������ �������*/
	modul = vmodule;
	int sum;
	sum = x ^ 2 + y ^ 2;
	modul = sqrt(sum);
}

void main() {
	int numb;
	Vector objVector( string vname, int vx, int vy);
	for (;;) {
		cout << "�������� ��������: \n";
		cout << "1. �������� �������.\n";
		cout << "2. �������� ��������.\n";
		cout << "3. ������������ ��������.\n";
		cout << "4. ����� ��������.\n";
		cout << "5. ���������� ������ �������.\n";
		//cout << "������";
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