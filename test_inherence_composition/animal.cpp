#include <iostream>
#include "animal.h"

animal::animal()
{

    std::cout << "This is a animal." << std::endl;

}

animal::~animal()
{
    std::cout << "The animal is dead." << std::endl;    
}