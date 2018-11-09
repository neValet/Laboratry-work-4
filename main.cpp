//hello Zenoviy Evgenovich!
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main(){
	char a;
	cin >> a;
	insect insect1(a, 2.2, 3.6, 2, 4);
	insect1.getname();
	insect1.getvelocity();
	insect1.getweight();
	insect1.getlenght();
	insect1.getwingSize();

	cin >> a;
	insect insect2(a, 3.1, 2, 5, 3);
	insect2.getname();
	insect2.getvelocity();
	insect2.getweight();
	insect2.getlenght();
	insect2.getwingSize();

	cin >> a;
	insect insect3(a, 4, 1.3, 4, 2);
	insect3.getname();
	insect3.getvelocity();
	insect3.getweight();
	insect3.getlenght();
	insect3.getwingSize();

	system("pause");

	return 0;
}
/* �������� ���� �������� ������ ������ ����:
- �����
- �������� (����� �� �������)
- ���� (� ������) */