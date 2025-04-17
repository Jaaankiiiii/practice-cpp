#include <iostream>
using namespace std;
class Car
{
    private:
        string carName;
        string carNumber;
        int rentPerDay;
    public:
        Car(string n, string c, int r){
            setCarName(n);
            setCarNumber(c);
            setRentPerDay(r);
        }
        void setCarName(string n){
            carName=n;
        }
        void setCarNumber(string n){carNumber=n;}
        void setRentPerDay(int r){rentPerDay=r;}

        string getCarName(){return carName;}
        string getCarNumber(){return carNumber;}
        int getRentPerDay(){return rentPerDay;}

        void totalRent(int totalDays){
            cout<<"total rent for "<<totalDays<<" days : "<<totalDays*getRentPerDay()<<endl;
        }
};
int main(){
    string carName, carNum; int rentPerDay;
    cout<<"enter car name : ";
    getline(cin,carName);
    cout<<"enter car number : ";
    cin>>carNum;
    cout<<"enter rent per day : ";
    cin>>rentPerDay;

    Car c1(carName,carNum,rentPerDay);

    int days;
    cout<<"enter number of days you want to rent the car  : ";
    cin>>days;

    c1.totalRent(days);
    return 0;
}