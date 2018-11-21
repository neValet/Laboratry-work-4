#pragma once
#include <iostream>
#include <string>
using namespace std;
class Insect {

	char nameOfInsect;
	double velocityOfInsect;
	double weightOfInsect;
protected:
	double lengthOfInsect, wingSizeOfInsect;
public:
	Insect() {

	}
	insect(char NameOfInsect, double VelocityOfInsect, double WeightOfInsect, double LengthOfInsect, double WingSizeOfInsect) {
		nameOfInsect = NameOfInsect;
		velocityOfInsect = VelocityOfInsect;
		weightOfInsect = WeightOfInsect;
		lenghtOfInsect = LenghtOfInsect;
		wingSizeOfInsect = WingSizeOfInsect;
	}
	void getName() {
		cout << nameOfInsect;

	}
	void getVelocity() {
		cout << " velocity = " << velocityOfInsect;

	}
	void getWeight() {
		cout <<" weight = "<< weightOfInsect;

	}
	void getLength() {
		cout <<" length = " <<lenghtOfInsect;
	}
	void getWingSize() {
		cout <<" wingSize = "<< wingSizeOfInsect << "\n";
	}


};