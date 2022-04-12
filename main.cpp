#include <iostream>
#include <string>

int main() {
    std::string text_part_1, text_part_2;
    double result;
    std::cout << "Enter the first part of the number";
    std::cin >> text_part_1;
    std::cout << "Enter the second part of the number";
    std::cin >> text_part_2;

    result = std::stod(text_part_1 + "." + text_part_2);
    std::cout << result;
    return 0;
}
