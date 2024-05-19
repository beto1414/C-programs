#include "shapes.h"
#include <cmath>

using namespace std;

Shape::Shape() {}
Shape::~Shape() {}

double Shape::area() const {
    return 0.0;
}

double Shape::perimeter() const {
    return 0.0;
}

void Shape::rotate() {
    
}

double Shape::width() const {
    return 0.0;
}

double Shape::height() const {
    return 0.0;
}

Rectangle::Rectangle(double h, double w) : _height(h), _width(w) {

}

Rectangle::~Rectangle() {

}

double Rectangle::area() const {
    return _height * _width;
}

double Rectangle::perimeter() const {
    return 2 * (_height + _width);
}

void Rectangle::rotate() {
    _height = _height + _width;
    _width = _height - _width;
    _height = _height - _width;
}

double Rectangle::width() const {
    return _width;
}
double Rectangle::height() const {
    return _height; 
}

Square::Square(double h) : Rectangle(h, h) {
}

Circle::Circle(double r) : _radius(r) {

}

Circle::~Circle() {

}

double Circle::area() const {
    return M_PI * _radius * _radius;
}

double Circle::perimeter() const {
    return 2 * M_PI * _radius;
}

double Circle::width() const {
    return 2 * _radius;
}

double Circle::height() const {
    return 2 * _radius;
}



