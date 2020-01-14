#include <iostream>
using namespace std;

class Circle {
    public:
    float radius_;

public:
    Circle(float R)
    {
        radius_ = R;
        cout << "Parameters inside the constructor: " << radius_ << endl;
    }

};
int main(){
    Circle cir(78);
}