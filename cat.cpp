#include "animal.h"
#include <iostream>

class Cat: public Animal
{
public:
    void voice()
    {
        std::cout << "Meow!" << std::endl;
    }

    bool touch()
    {
	void voice();
        return true;
    }

    bool ride()
    {
        return false;
    }
};
