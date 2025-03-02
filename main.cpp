#include "dog.cpp"
#include "cat.cpp"
#include "cow.cpp"
#include "horse.cpp"
int main()
{
    Dog dog;
    Cat cat;
    Cow cow;
    Horse horse;

    dog.voice();
    std::cout << dog.touch() << std::endl;
    std::cout <<  dog.ride() << std::endl;
    
    cat.voice();
    std::cout << cat.touch() << std::endl;
    std::cout << cat.ride() << std::endl;

    cow.voice();
    std::cout << cow.touch() << std::endl;
    std::cout << cow.ride() << std::endl;

    horse.voice();
    std::cout << horse.touch() << std::endl;
    std::cout << horse.ride() << std::endl;
    return 0;
}
