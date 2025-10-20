#include <gtest/gtest.h>
#include <cmath>

// Оголошення функції з lab51.cpp
double h(const double a, const double b);

// Тестуємо відому поведінку функції
TEST(FunctionHTest, BasicValues) {
    EXPECT_NEAR(h(0, 0), 0.0, 1e-9);
    EXPECT_NEAR(h(1, 0), std::pow(1, 2) * std::sin(0) + std::pow(0, 2) * std::cos(1), 1e-9);
    EXPECT_NEAR(h(1, 1), std::pow(1, 2) * std::sin(1) + std::pow(1, 2) * std::cos(1), 1e-9);
}
