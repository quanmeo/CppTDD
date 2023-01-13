#include "fizzbuzz.h"

std::string fizzbuzz(int n)
{
    if (n < 1 || n > 100) return "";

    if (n % 15 == 0) {
        return "FizzBuzz";
    } else if (n % 3 == 0) {
        return "Fizz";
    } else if (n % 5 == 0) {
        return "Buzz";
    }
    return std::to_string(n);
}