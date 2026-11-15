#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle();

    double getArea() const;
    double getCircum() const;
    void setWidth(double w);
    void setHeight(double h);

private:
    double width;
    double height;

};

#endif // RECTANGLE_H
