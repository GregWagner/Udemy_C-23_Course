#include <fmt/format.h>
import utilities;

auto main() -> int {
    auto value1 {10};
    auto value2{ 20 };

    fmt::print("Hello, World! via print\n");
    fmt::print("One\n");
    fmt::print("Two\n");
    fmt::print("Three\n");
    fmt::print("The values are {} and {}\n", value1, value2);
}