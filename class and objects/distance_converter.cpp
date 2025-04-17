#include <iostream>
using namespace std;
class DistanceConverter
{
    private:
        long meter;
    public:
        DistanceConverter(long m){
            setMeter(m);
        }
        void setMeter(int m){meter=m;}
        int getMeter(){return meter;}

        void convertTokm(){
            cout<<"converted distance into km : "<<(float)getMeter()/1000<<" Km"<<endl;
        }
        void convertToCm(){
            cout<<"converted distance into cm : "<<getMeter()*100<<" Cm"<<endl;
        }
};
int main(){
    long meter;
    cout<<"enter distance (in m) : ";
    cin>>meter;

    DistanceConverter d1(meter);
    d1.convertTokm();
    d1.convertToCm();
    return 0;
}