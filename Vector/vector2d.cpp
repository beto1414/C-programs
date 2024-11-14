#include "vector2d.h"
#include <cmath>

using namespace std; 

v2d::v2d(double a, double b) 
{
    x = a;
    y = b;
}

v2d::v2d(const v2d & v) {

    x = v.x;
    y = v.y;
}

v2d::~v2d() {}

v2d & v2d::operator=(const v2d &v) 
{
    if (this == &v){
        return *this;
    } 
    x = v.x;
    y = v.y;
    return *this;
}

v2d & v2d::operator+(const v2d &v) {
    // Write your code here
    x = x + v.x;
    y = y + v.y;
    return *this;
}

double v2d::operator*(const v2d &v) {
    // Write your code here
    return x*v.x + y*v.y;
}

v2d & v2d::operator*(double k) {
    // Write your code here
    x = k*x;
    y = k*y; 
    return *this;
}

double v2d::length() {
    // Write your code here
    return sqrt(x*x + y*y);
}

