#include <iostream>
using namespace std;
class Student
{
    private:
        string name;
        int rollNo;
        double marks;
    public:
        void setName(string n){
            name=n;
        }
        string getName(){
            return name;
        }
        void setRollNo(int r){
            rollNo=r;
        }
        int getRollNo(){
            return rollNo;
        }
        void setMarks(double m){
            marks=m;
        }
        double getMarks(){
            return marks;
        }
        Student(string n="", int r=0, double m=0){
            setName(n);
            setRollNo(r);
            setMarks(m);
        }
        void display(){
            cout<<"students name : "<<getName()<<endl;
            cout<<"roll no : "<<getRollNo()<<endl;
            cout<<"marks : "<<getMarks()<<endl;
        }
};
int main(){
    Student s1;
    string name; int rollNo; double marks;
    cout<<"enter students name : ";
    getline(cin,name);
    s1.setName(name);

    cout<<"enter roll no : ";
    cin>>rollNo;
    s1.setRollNo(rollNo);

    cout<<"enter marks : ";
    cin>>marks;
    s1.setMarks(marks);

    cout<<endl;
    s1.display();
    return 0;
}