#include <iostream>
using namespace std;

class Movie
{
    private:
        string title;
        int duration;
        int ticketPrice;
        int seats;
    public:
        Movie(string t,int d, int p){
            setTitle(t);
            setDuration(d);
            setTicketPrice(p);
        }
        void setTitle(string t){title=t;}
        void setDuration(int d){duration=d;}
        void setTicketPrice(int p){ticketPrice=p;}
        void setSeats(int s){seats=s;}

        string getTitle(){return title;}
        int getDuration(){return duration;}
        int getTicketPrice(){return ticketPrice;}
        int getSeats(){return seats;}

        void bookTicket(int numTickets){
            if(numTickets<=seats){
                seats-=numTickets;
                cout<<"Ticket booked."<<endl;
                cout<<"Total amount : ₹ "<<numTickets*getTicketPrice()<<endl;
            }else{
                cout<<"Sorry, not enough seats available."<<endl;
            }
        }
};
int main(){
    string title; int duration, ticketPrice;
    cout<<"Enter movie title : ";
    getline(cin,title);
    cout<<"Enter movie duration : ";
    cin>>duration;
    cout<<"Enter ticket price : ";
    cin>>ticketPrice;

    Movie m1(title,duration,ticketPrice);
    m1.setSeats(100);
    m1.bookTicket(3);
    cout<<"left num of seats : "<<m1.getSeats()<<endl;
    return 0;
}