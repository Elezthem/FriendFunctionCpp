#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

class Car;
class Per {
private:
	string name;
public:
	Per(string name) {
		this->name = name;
	}

	friend void info_car(Car& car, Per& person);
};

class Car {
private:
	string name;
public:
	Car(string name) {
		this->name = name;
	}

	friend void info_car(Car& car, Per& person);
};

void info_car(Car& car, Per& person) {
	cout << "Человек с именем: " << person.name << " имеет машину " << car.name << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	Car lamborghini("lamborghini");
	Per ElezthemDev("ElezthemDev");
	info_car(lamborghini, ElezthemDev);

	return 0;
}