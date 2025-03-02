#include "animal.h"
#include <iostream>

class Cow: public Animal
{
public:
    void voice()
    {
        std::cout << "Moo!" << std::endl;
    }

    bool touch()
    {
        return true;
    }

    bool ride()
    {
        return false;
    }
};
