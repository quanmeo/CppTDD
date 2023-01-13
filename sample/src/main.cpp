#include <iostream>
#include <string>
#include "fizzbuzz.h"

int main()
{
    for (int i = 0; i <= 101; i++) {
        std::cout << fizzbuzz(i) << '\n';
    }
}