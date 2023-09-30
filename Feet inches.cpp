#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f, int i) : feet(f), inches(i) {}

    void operator-() {
        if (inches == 0) {
            if (feet > 0) {
                feet--;
                inches = 11; // Set inches to 11 instead of 12 to account for the decrement
            }
        } else {
            inches--;
        }
    }

    void display() {
        std::cout << feet-1 << "'" << inches << std::endl;
    }
};

int main() {
    int feet, inches;
    std::cin >> feet>> inches;

    Distance distance(feet, inches);

    // Apply the unary decrement operator
    -distance;

    // Display the updated distance
    distance.display();

    return 0;
}
