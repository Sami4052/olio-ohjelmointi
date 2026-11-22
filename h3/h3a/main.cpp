#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main()
{
    {
        Chef chef("Gordon Ramsay");
        chef.makeSalad();
        chef.makeSoup();
    }   // Gordonin destruktori ajetaan tässä

    {
        ItalianChef italian("Anthony Bourdain");
        italian.makeSalad();
        italian.makeSoup();
        italian.makePasta();
        std::cout << "name of the Italian Chef is " << italian.getName() << std::endl;
    }

    return 0;
}
