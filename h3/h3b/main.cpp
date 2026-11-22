#include <memory>
#include "animal.h"
#include "dog.h"

int main()
{
    std::unique_ptr<Animal> animal = std::make_unique<Animal>();
    std::unique_ptr<Animal> dog = std::make_unique<Dog>();   // polymorfismi

    animal->callOut();   // Eläin ääntelee.
    dog->callOut();      // Koira haukkuu!

    return 0;   // unique_ptr tuhoaa oliot automaattisesti
}
