#include <iostream>
using namespace std;
class Employee
{
    private:
        string name;
        int Id;
        long salary;
    public:
        Employee(string n, int id, long salary){
            setName(n);
            setId(id);
            setSalary(salary);
        }
        void setName(string n){
            name=n;
        }
        void setId(int id){
            Id=id;
        }
        void setSalary(long s){
            salary=s;
        }
        string getName(){
            return name;
        }
        int getId(){
            return Id;
        }
        long getSalary(){
            return salary;
        }
        void displayEmployeeDetails(){
            cout<<"Employee's Name : "<<getName()<<endl;
            cout<<"Employee's Id : "<<getId()<<endl;
            cout<<"Employee's Salary : "<<getSalary()<<endl;
        }
};
int main(){
    string name; int id; long salary;
    cout<<"Enter employee's Name , Id and Salary : ";
    cin>>name>>id>>salary;
    Employee E1(name,id,salary);
    E1.displayEmployeeDetails();
}