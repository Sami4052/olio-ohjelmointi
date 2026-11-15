#include "car.h"
#include <iostream>

Car::Car() : yearModel(0) {}

void Car::setBrand(std::string b)
{
    brand = b;
}

void Car::setModel(std::string m)
{
    model = m;
}

void Car::setYearModel(int ym)
{
    yearModel = ym;
}

void Car::printData() const
{
    std::cout << "Auton merkki: "<< brand << "\n" << "Auton malli: "<< model << "\n" << "Auton valmistusvuosi: "<< yearModel << "\n";
}
