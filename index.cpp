//Finding roots of Equation.
#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    double root1, root2;

    std::cout << "Enter the coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Root 1: " << root1 << std::endl;
        std::cout << "Root 2: " << root2 << std::endl;
    } else {
        std::cout << "The equation has no real roots." << std::endl;
    }
    return 0;
}
