#include <iostream>
using namespace std;
class Circle
{
    private:
        float radius;
        const float PI=3.14;
    public:
        Circle(float r){
            setRadius(r);
        }

        void setRadius(float r){radius=r;}

        int getRadius(){return radius;}

        void calculateArea(){
            cout<<"Area of circle : "<<PI*getRadius()*getRadius();
        }
};
int main(){
    float radius;
    cout<<"enter the radius of circle : ";
    cin>>radius;

    Circle c1(radius);
    c1.calculateArea();
}