#include "trygonometria.h"
#include <cmath>

double getRadians(double degree) {
	return (degree * std::atan(1.0) * 4) / 180;
}

double degreemath::sin(double degree) {
	return std::sin(getRadians(degree));
}

double degreemath::cos(double degree) {
	return std::cos(getRadians(degree));
}

double degreemath::tg(double degree) {
	return std::tan(getRadians(degree));
}

double degreemath::ctg(double degree) {
	return (1 / degreemath::tg(degree));
}