#include "animal.h"
#include <iostream>

class Dog: public Animal
{
public:
    void voice()
    {
	std::cout << "Woof Woof!" << std::endl;
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
