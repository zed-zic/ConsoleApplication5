#include <iostream>

std::pair <int, int> inputNumbers();
int max(std::pair <int, int> numbers);
void printAnswer(int maxNumber);

int main() {
    printAnswer(max(inputNumbers()));
    return 0;
}

std::pair <int, int> inputNumbers() {
    std::pair <int, int> numbers;
    std::cin >> numbers.first >> numbers.second;
    return numbers;
}

int max(std::pair <int, int> numbers) {
    return numbers.first > numbers.second ? numbers.first : numbers.second;
}

void printAnswer(int maxNumber) {
    std::cout << maxNumber;
}
