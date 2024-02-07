#include <iostream>
using namespace std;
double Pi = 3.14;
double calculateArea(double innerRadius, double outerRadius) {
    double innerArea = Pi * innerRadius * innerRadius;
    double outerArea = Pi * outerRadius * outerRadius;
    return outerArea - innerArea;
}

double calculateArea(double radius) {
    return Pi * radius * radius;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    double innradius, radius;
    cout << "Введите внутренний радиус кольца: ";
    cin >> innradius;

    cout << "Введите внешний радиус кольца: ";
    cin >> radius;

    double ringArea = calculateArea(innradius, radius);
    double circleArea = calculateArea(radius);

    cout << "Площадь кольца: " << ringArea << endl;
    cout << "Площадь круга с внешним радиусом: " << circleArea << endl;
}

