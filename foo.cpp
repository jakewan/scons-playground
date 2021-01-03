#include <iostream>
#include "foo.h"

void Foo::saySomething(const std::string &what) const
{
    std::cout << "Hello, world!" << std::endl;
};
