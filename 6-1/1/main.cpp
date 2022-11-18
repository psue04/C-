#include "shapes.h" 

#include <iostream>

int main() {
    //Variables
    char shapeInfo = '\0'; //Empty string
    
    //Loop
    while (1) {
        //Ask shape and get user input
        std::cout << "shape?" << std::endl;
        std::cin >> shapeInfo;

        Shapes* shapes = nullptr;
        
        //Use switch statement to differenciate user input
        switch (shapeInfo) {
        case 'R':
            shapes = Rectangle::InputRectangle();
            break;
        case 'C':
            shapes = Circle::InputCircle();
            break;
        case 'Q':
            return 0;
        default:
            continue;
        }

        //Print area and perimeter results
        std::cout << "area: " << shapes->Area() << ", perimeter: " << shapes->Round() << std::endl;
        
        delete shapes; //REMEMBER TO DELETE! (ignore)
    }

    return 0;
}
