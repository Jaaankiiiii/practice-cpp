#include <iostream>
#include<string>
using namespace std;

float calculatePercentage(int sum){
    float percentage =(float)(sum*100)/500;
    return percentage;
}
string assignGrade(int p){
    string grade;
    if(p>90 && p<100){
        grade="A+";
    }
    else if(p<90 && p>=80){
        grade="A";
    }
    else if(p<80 && p>=70){
        grade="B";
    }
    else if(p<70 && p>=60){
        grade="c";
    }
    else if(p<60 && p>=50){
        grade="D";
    }
    else if(p<50){
        grade="FAIL";
    }
    return grade;
}
int main(){
    int sub1, sub2, sub3, sub4, sub5;
    cout<<"enter marks of subject 1 : ";
    cin>>sub1;
    cout<<"enter marks of subject 2 : ";
    cin>>sub2;
    cout<<"enter marks of subject 3 : ";
    cin>>sub3;
    cout<<"enter marks of subject 4 : ";
    cin>>sub4;
    cout<<"enter marks of subject 5 : ";
    cin>>sub5;

    int total_marks = sub1 + sub2 + sub3 + sub4 + sub5;

    float percentage = calculatePercentage(total_marks);
    string grade = assignGrade(percentage);

    cout<<"percentage : "<<percentage<<"%"<<endl;
    cout<<"grade : "<<grade<<endl;
    return 0;
}