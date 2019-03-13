#include <iostream>
#include "trygonometria.h";
using namespace std;
using namespace degreemath;

int main () {
	std::cout << "Sinus 0 stopni: " << degreemath::sin(0) << std::endl;
	std::cout << "Sinus 30 stopni: " << degreemath::sin(30) << std::endl;
	std::cout << "Sinus 90 stopni: " << degreemath::sin(90) << std::endl;
	std::cout << "Cosinus 0 stopni: " << degreemath::cos(0) << std::endl;
	std::cout << "Cosinus 60 stopni: " << degreemath::cos(60) << std::endl;
	std::cout << "Cosinus 90 stopni: " << degreemath::cos(90) << std::endl;
	std::cout << "Tangens 0 stopni: " << degreemath::tg(0) << std::endl;
	std::cout << "Tangens 45 stopni: " << degreemath::tg(45) << std::endl;
	std::cout << "Tangens 180 stopni: " << degreemath::tg(180) << std::endl;
	std::cout << "Cotangens 30 stopni: " << degreemath::ctg(30) << std::endl;
	std::cout << "Cotangens 45 stopni: " << degreemath::ctg(45) << std::endl;
	std::cout << "Cotangens 90 stopni: " << degreemath::ctg(90) << std::endl;

	std::getchar();
	return 0;
}