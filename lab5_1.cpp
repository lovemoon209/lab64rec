#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.h"

// Тестуємо функцію h(a,b)
TEST_CASE("h(a, b) basic tests", "[h]")
{
    SECTION("Test with positive values") {
        double result = h(4, 1);
        REQUIRE(result > 0);
    }

    SECTION("Test with known value h(1,2)") {
        double result = h(1, 2);
        // Очікуване значення ≈ 3.0705
        REQUIRE(result == Approx(3.0705).margin(0.001));
    }

    SECTION("Test with zero arguments") {
        double result = h(0, 0);
        REQUIRE(result == Approx(0.0).margin(0.0001));
    }
}

// Тестуємо формулу f(t,s)
TEST_CASE("Formula f(t,s) calculation", "[formula]")
{
    double t = 2.0;
    double s = 1.0;

    double f = (pow(h(t * t, 1), 3) + h(1, t * s * s)) / (1 + pow(h(s, t), 2));

    REQUIRE(f == Approx(201.89).margin(0.1));
}
