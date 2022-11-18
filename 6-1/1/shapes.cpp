#include "shapes.h"

#include <iostream>

Circle::Circle(double x, double y, double radius): 
    s_x(x), s_y(y), s_radius(radius) 
{
    // (Just here to make other codes functional)
};

Circle* Circle::InputCircle() {
    //Variables
    int x, y, radius;
    
    std::cin >> x >> y >> radius;

    return new Circle(x, y, radius);
};

double Circle::Area() const {
    return 3.14 * s_radius * s_radius;
};

double Circle::Round() const {
    return 2 * 3.14 * s_radius;
};

Rectangle::Rectangle(double ltx, double lty, double rbx, double rby):
    s_ltx(ltx), s_lty(lty), s_rbx(rbx), s_rby(rby)
{
    // (Just here to make other codes functional)
};

double Rectangle::Area() const {
    auto abs = [](int n) { 
        return n > 0 ? n : -n; 
    };
    return abs(s_ltx - s_rbx) * abs(s_lty - s_rby);
};

double Rectangle::Round() const { //use absolute
    auto abs = [](int n) { 
        return n > 0 ? n : -n; 
    };
    return 2 * (abs(s_ltx - s_rbx) + abs(s_lty - s_rby));
};

Rectangle* Rectangle::InputRectangle() {
    //Variables
    int ltx, lty, rbx, rby;
    
    std::cin >> ltx >> lty >> rbx >> rby; //User input

    return new Rectangle(ltx, lty, rbx, rby);
};