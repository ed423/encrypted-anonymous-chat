#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

int main() {
    using namespace boost::multiprecision;

    // Define a 128-bit unsigned integer
    uint128_t num1 = (uint128_t(1) << 64) + 123456789012345; // 2^64 + 123456789012345
    uint128_t num2 = 9876543210987654321; // A 64-bit integer assigned to a 128-bit uint

    // Perform arithmetic operations
    uint128_t sum = num1 + num2;
    uint128_t product = num1 * num2;

    // Output results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
