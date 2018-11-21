#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main(){
	char insectsName;
	cin >> insectsName;
	Insect insect1(insectsName, 2.2, 3.6, 2, 4);
	insect1.getName();
	insect1.getVelocity();
	insect1.getWeight();
	insect1.getLenght();
	insect1.getWingSize();

	cin >> insectsName;
	Insect insect2(insectsName, 3.1, 2, 5, 3);
	insect2.getName();
	insect2.getVelocity();
	insect2.getWeight();
	insect2.getLenght();
	insect2.getWingSize();

	cin >> insectsName;
	Insect insect3(insectsName, 4, 1.3, 4, 2);
	insect3.getName();
	insect3.getVelocity();
	insect3.getWeight();
	insect3.getLenght();
	insect3.getWingSize();

	system("pause");

	return 0;
};