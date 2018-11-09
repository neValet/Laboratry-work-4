#pragma once
#include <iostream>
#include <string>
using namespace std;
class insect {

	char name;
	double velocity;
	double weight;
  protected:
	double lenght, wingSize;
  public:
	insect() {

	}
	insect(char Name, double Velocity, double Weight, double Lenght, double WingSize) {
		name = Name;
		velocity = Velocity;
		weight = Weight;
		lenght = Lenght;
		wingSize = WingSize;
	}
	void getname() {
		cout << name;
		
	}
	void getvelocity() {
		cout << " velocity=" << velocity;
		
	}
	void getweight() {
		cout <<" weight="<< weight;
		
	}
    void getlenght() {
		   cout <<" lenght=" <<lenght;
	}
	void getwingSize() {
		   cout <<" wingSize="<< wingSize << "\n";
	}
 

};