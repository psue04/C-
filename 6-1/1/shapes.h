#ifndef SHAPES_H
#define SHAPES_H

//CLASSES (Circle, Rectangle, Shapes)

class Shapes {
public:
    virtual double Area() const = 0;
    virtual double Round() const = 0;
    virtual ~Shapes() {}
};

class Circle : public Shapes {
public:
    Circle(double x, double y, double radius); //Call
    
    static Circle* InputCircle();

    double Round() const override;
    double Area() const override;

private:
    double s_x;
    double s_y;
    double s_radius;
};

// lt : left top, rb: right bottom
class Rectangle : public Shapes {
public:
    Rectangle(double ltx, double lty, double rbx, double rby); //Call

    static Rectangle* InputRectangle();

    double Round() const override;
    double Area() const override;

private:
    double s_ltx;
    double s_lty;
    double s_rbx;
    double s_rby;
};

#endif