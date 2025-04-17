#include <iostream>
using namespace std;
class Book
{
    private:
        string title;
        string author;
        int price;
    public:
        Book(string t, string a, int p){
            setTitle(t);
            setAuthor(a);
            setPrice(p);
        }
        void setTitle(string t){title=t;}
        void setAuthor(string a){author=a;}
        void setPrice(int p){price=p;}

        string getTitle(){return title;}
        string getAuthor(){return author;}
        int getPrice(){return price;}

        void displayDetails(){
            cout<<"Book's Title : "<<getTitle()<<endl;
            cout<<"Book's Author : "<<getAuthor()<<endl;
            cout<<"Book's Price : "<<getPrice()<<endl;
        }
};
int main(){
    string title,author;
    int price;
    cout<<"enter book's title : ";
    getline(cin,title);
    cout<<"enter book's author : ";
    getline(cin,author);
    cout<<"enter book's pricce : ";
    cin>>price;
    Book b1(title,author,price);
    b1.displayDetails();
    return 0;

}