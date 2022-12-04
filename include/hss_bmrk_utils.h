#ifndef HSSBMRKUTILS_H
#define HSSBMRKUTILS_H

#include <iostream>
#include <limits>
#include <random>

namespace hssUtils {
class BmrkUtils
{
public:
    static float getRandomFloatUsingWholeRange()
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        return std::uniform_real_distribution<float>(
            std::numeric_limits<float>::max(), std::numeric_limits<float>::min())(gen);
    }

    static float getRandomFloatUsingRange1minus1()
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        return std::uniform_real_distribution<float>(
            1.0, -1.0)(gen);
    }
};
}//end namespace.
#endif // HSSBMRKUTILS_H