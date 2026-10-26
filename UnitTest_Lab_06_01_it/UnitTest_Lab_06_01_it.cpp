
#include "pch.h"
#include "CppUnitTest.h"

#define UNIT_TEST
#include "../Lab_06_01_it/Lab_06_01_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
    TEST_CLASS(UnitTest61)
    {
    public:

        TEST_METHOD(TestSum)
        {
            int t[10] = {
                -5, -4, 3, -6, -2,
                 0, -7, -1, 8, -9
            };

            int expected = -7;

            int actual = Sum(t, 10);

            Assert::AreEqual(expected, actual);
        }
    };
}
