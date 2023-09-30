#include <iostream>
#include <iomanip>
class WeatherData {
private:
    double temperatureCelsius;
public:
    WeatherData(double tempC) : temperatureCelsius(tempC) {}
    double getTemperatureCelsius() const {
        return temperatureCelsius;
    }
    double operator+() const {
       return (temperatureCelsius * 9.0 / 5.0) + 32.0;
    }
    double operator-() const {
        return (-((temperatureCelsius * 9.0 / 5.0) + 32.0) * 9.0 / 5.0) + 32.0;
    }
};
int main() {
    double temperatureCelsius;
    std::cin >> temperatureCelsius;
    WeatherData weatherData(temperatureCelsius);
    double temperatureFahrenheit1 = +weatherData;
    double temperatureFahrenheit2 = -weatherData;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << temperatureFahrenheit1 << "°F" << std::endl;
    std::cout << temperatureFahrenheit2 << "°F" << std::endl;
    return 0;
}
