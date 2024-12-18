#include <iostream>
#include <cmath>

namespace Shapes {
    const double Pi  = 3.14159;
    double radius;
    double length;
    double width;

    double circleArea = 0;
    double rectangleArea = 0;

    void getCircleArea(){
        circleArea = Pi * pow(radius , 2);
    }
    void getRectangleArea(){
        rectangleArea = length * width;
    }
}

int main(){
    using namespace Shapes;

    char choice;

    std::cout << "What shape are you trying to calculate its area?" << '\n';
    std::cout << "a. Circle" << '\n';
    std::cout << "b. Rectangle" << '\n';
    std::cin >> choice;

    switch(choice){
        case 'a':
            std::cout << "Please type the radius of the circle:" << '\n';
            std::cin >> radius;

            getCircleArea();

            std::cout << "The circle area is: " << circleArea << '\n';
            break;
        

        case 'b':
            std::cout << "Please type the length of the rectangle:" << '\n';
            std::cin >> length;
            
            std::cout << "Please type the width of the rectangle:" << '\n';
            std::cin >> width;

            getRectangleArea();

            std::cout << "The rectangle area is: " << rectangleArea << '\n';

            break;
    }

    system("pause");

    return 0;

}