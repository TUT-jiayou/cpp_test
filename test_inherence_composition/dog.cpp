#include <iostream>
#include "dog.h"

dog::dog()
{
    std::cout<< "This is a dog" << std::endl;
}

dog::~dog()
{
    std::cout<< "The dog is dead." << std::endl;
}