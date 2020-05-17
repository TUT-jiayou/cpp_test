// #include "dog.h"
#include <unistd.h>
#include "cat.h" 

int main()
{
    cat* cat1 = new cat();
    sleep(5);
    delete cat1;
    return 0;
}