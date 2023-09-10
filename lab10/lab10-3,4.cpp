#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
    private:
    point center;
    double radius;

    public:
    explicit Circle(point center, double radius){
        this->center = center;
        this->radius = radius;
    }
    
    double area(){
        return M_PI * pow(radius, 2);
    }

    double distanceFromCenter(point pt){
        return sqrt((pow((pt.xPosition - center.xPosition), 2)) + (pow((pt.yPosition - center.yPosition), 2)));
    }

    double contains(point pt){
        if(distanceFromCenter(pt) <= radius){
            return 1;
        }else{
            return 0;
        }
    }
};

int main()
{
    double xcheck, ycheck;
    point center;
    double radius;
    cout << "Center of Circle: ";
    cin >> center.xPosition >> center.yPosition;
    cout << "Radius of Circle: ";
    cin >> radius;
    Circle circle(center, radius);
    
    point check;
    cout << "Point to Check: ";
    cin >> check.xPosition >> check.yPosition;
    
    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << check.xPosition << ", " 
    << check.yPosition  << ")" << " is " 
    << circle.distanceFromCenter(check) << endl;
    
    if(circle.contains(check) == 0){
        cout << "This point is not in this circle.";
    }else{
        cout << "This circle contains this point.";
    }
}