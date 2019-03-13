#include <iostream>
#include <string>
#include "MainConfig.h";
using namespace std;

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h";
using namespace degreemath;
#else
#define _USE_MATH_DEFINES
#include "math.h"
#include <cmath>
#endif

void example() {
	#ifdef USE_TRIGONOMETRY_DEGREE
		std::cout << "Trygonometria w stopniach..." << std::endl;
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
	#else
		std::cout << "Trygonometria w radianach..." << std::endl;
		std::cout << "Sinus 30 stopni (pi/6): " << std::sin(M_PI / 6) << std::endl;
		std::cout << "Cosinus 60 stopni (pi / 3): " << std::cos(M_PI / 3) << std::endl;
		std::cout << "Tangens 180 stopni (pi): " << std::tan(M_PI) << std::endl;
		std::cout << "Cotangens 45 stopni (pi / 4): " << 1 / std::tan(M_PI / 4) << std::endl;
	#endif

	std::getchar();
}

int main (int argc, char* argv[]) {
	if (argc == 1) {
		example();
		return 0;
	}

	if (argc < 3) 
		std::cout << "Please provide math function type and argument" << std::endl;

	double degrees = atof(argv[2]);
	std::string arg(argv[1]);

	if (arg == "--sin") {
		std::cout << degreemath::sin(degrees);
	} else if (arg == "--cos") {
		std::cout << degreemath::cos(degrees);
	} else if (arg == "--tg") {
		std::cout << degreemath::tg(degrees);
	} else if (arg == "--ctg") {
		std::cout << degreemath::ctg(degrees);
	} else {
		std::cout << "Math function not recognized " << arg << std::endl;
	}

	return 0;
}