#include <iostream>

int main() {
    int a1, a2, a3;
    int positiveCount = 0, negativeCount = 0;
    double sum = 0, average;

    std::cout << "Enter three numbers: ";
    std::cin >> a1 >> a2 >> a3;

    if (a1 > 0) positiveCount++;
    else if (a1 < 0) negativeCount++;
    sum += a1;

    if (a2 > 0) positiveCount++;
    else if (a2 < 0) negativeCount++;
    sum += a2;

    if (a3 > 0) positiveCount++;
    else if (a3 < 0) negativeCount++;
    sum += a3;

    if (positiveCount + negativeCount > 0) {
        average = sum / (positiveCount + negativeCount);
    } else {
        average = 0;
    }

    std::cout << "Number of positive numbers: " << positiveCount << std::endl;
    std::cout << "Number of negative numbers: " << negativeCount << std::endl;
    std::cout << "Average: " << average << std::endl;

    return 0;
}