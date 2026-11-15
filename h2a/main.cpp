#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

int main()
{
    // Car: pinomuisti
    Car auto1;
    auto1.setBrand("Toyota");
    auto1.setModel("Corolla");
    auto1.setYearModel(2018);
    auto1.printData();
    std::cout << "\n";

    // Rectangle: kekomuisti
    Rectangle *rect = new Rectangle();
    rect->setWidth(4.0);
    rect->setHeight(2.5);
    std::cout << "Pinta-ala: " << rect->getArea() << "\n";
    std::cout << "Ymparysmitta: " << rect->getCircum() << "\n";
    delete rect;
    rect = nullptr;
    std::cout << "\n";

    // Student: smart pointer
    std::unique_ptr<Student> opiskelija = std::make_unique<Student>();
    opiskelija->setName("Sami");
    opiskelija->setStudentNumber(123456);
    opiskelija->setAverage(4.2);
    std::cout << "Nimi: " << opiskelija->getName() << "\n";
    std::cout << "Opiskelijanumero: " << opiskelija->getStudentNumber() << "\n";
    std::cout << "Keskiarvo: " << opiskelija->getAverage() << "\n";

    return 0;
}
