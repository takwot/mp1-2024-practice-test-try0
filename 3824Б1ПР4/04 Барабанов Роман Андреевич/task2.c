// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    unsigned long long result = (unsigned long long)a * b;
    if (result >= UINT_MAX) {
        return UINT_MAX;
    }
    return (unsigned int)result;
}
