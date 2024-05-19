#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    Shape();

    ~Shape();

    virtual double area() const;

    virtual double perimeter() const;

    virtual void rotate();

    virtual double width() const;

    virtual double height() const; 

};

class Rectangle : public Shape {
private:
  double _height;
  double _width;

public:
  Rectangle(double h, double w);

  ~Rectangle();

  double area() const override;

  double perimeter() const override;

  double height() const override;

  double width() const override;

  void rotate() override;

};


class Square : public Rectangle {
private:
    double _height;
public:
    Square(double h);
};

class Circle : public Shape {
private:
    double _radius;

public:
    Circle(double r);

    ~Circle();

    double area() const override;

    double perimeter() const override;

    double height() const override;

    double width() const override;
};

#endif