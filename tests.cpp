#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.h"

// Тестуємо функцію sum
TEST_CASE("Перевірка функції sum", "[sum]") {
    REQUIRE(sum(2, 3) == 5);
    REQUIRE(sum(-1, 1) == 0);
    REQUIRE(sum(0, 0) == 0);
}
