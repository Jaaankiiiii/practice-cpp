#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        //constructor
        Rectangle(int l,int b){
            setLength(l);
            setBreadth(b);
        }

        //setters || mutators
        void setLength(int l){
            length=l;
        }
        void setBreadth(int b){
            breadth=b;
        }
        
        //getters ||accessers
        int getLength(){return length;}
        int getBreadth(){return breadth;}

        //facilitator
        int calculateArea(){
            return getLength()*getBreadth();
        }
};
int main(){
    int l,b;
    cout<<"enter length and breadth of a rectangle : ";
    cin>>l>>b;
    Rectangle r1(l,b);
    int area=r1.calculateArea();
    cout<<"area of rectangle is  : "<<area<<endl;
    return 0;
}