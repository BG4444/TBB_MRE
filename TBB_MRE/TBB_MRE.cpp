#include "stdafx.h"
#include <windows.h>
#include <vector>
#include <iostream>

int foo()
{
    return -1;
}

int main()
{
    std::vector<int> vs(foo() + 1);
    std::cout << vs.size() << std::endl;
    return 0;
}
