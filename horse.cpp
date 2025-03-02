#include "animal.h"
#include <iostream>

class Horse: public Animal
{
public:
    void voice()
    {
        std::cout << "Frr!" << std::endl;
    }

    bool touch()
    {
        return false;
    }

    bool ride()
    {
        return true;
    }
};
