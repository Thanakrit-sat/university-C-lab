#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D{
    public:
        virtual float volumn() = 0;
        virtual float surfaceArea() = 0;
};

class RightRectangularPyramid:public Shape3D {
    private:
        float width, length, height;
    public:
        RightRectangularPyramid()
            : width(0), length(0), height(0) {}
 
        RightRectangularPyramid(float width, float length, float height)
            : width(width), length(length), height(height) {}
 
        float volumn() {
            return width * length * height / 3;
        }
        float surfaceArea() {
            float slant_heightA = sqrt(pow(height, 2) + pow(length / 2, 2));
            float slant_heightB = sqrt(pow(height, 2) + pow(width / 2, 2));
            return width * length + width * slant_heightA + length * slant_heightB;
        }
};
 
class Sphere : public Shape3D {
    private:
        float radius;
    public:
        Sphere():radius(0) {}
        Sphere(float radius):radius(radius){}
        float volumn(){
            return M_PI * pow(radius, 3) * 4 / 3;
        }
        float surfaceArea(){
            return M_PI * pow(radius, 2) * 4;
        }
};

int main(){
    int tc;
    cin >> tc;
    if(tc == 1){
        Shape3D **shapes = new Shape3D*[3];
        shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
        shapes[1] = new Sphere(10.6);
        shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
        for (int i = 0; i < 3; i++) {
            cout << "Volumn: " << (*shapes)->volumn() << endl;
            cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
            cout << "--------------------\n";
            *shapes++;
        }
    }else if (tc == 2) {
        RightRectangularPyramid rectangle;
        Sphere sphere;
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    }else if (tc == 3) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
    }else if (tc == 4) {
        Sphere sphere(34.25);
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    }else if (tc == 5) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        Sphere sphere(34.25);
        Shape3D *shape = &rectangle;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
        shape = &sphere;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
    }
}