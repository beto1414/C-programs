#ifndef __v2d__
#define __v2d__

class v2d {

public:
  
    v2d(double a, double b);

   
    v2d(const v2d & v);

    
    ~v2d(void);

    
    v2d & operator=(const v2d &v);

    
    v2d & operator+(const v2d &v);

 
    v2d & operator*(double k);

    
    double operator*(const v2d &v);

   
    double length(void);

private:
    double x;
    double y;
};

#endif

