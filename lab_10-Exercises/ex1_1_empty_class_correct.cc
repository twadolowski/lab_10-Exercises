#include <iostream>
using namespace std;

class Circle {
    public:
        float radius;
        float area(){
            return 3.14*radius*radius;
        }	
};

int main(){
    Circle cir;
    cir.radius = 1;

	cout << cir.area() << endl;
}