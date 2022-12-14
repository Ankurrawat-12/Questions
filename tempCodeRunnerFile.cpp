#include<bits/stdc++.h>

using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;
    public:
        Time(){};
        Time(int, int, int);
        Time operator +(Time);
        void display();
};

Time::Time(int hours, int minutes, int seconds){
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

Time Time::operator +(Time t){
    Time temp;
    if(this->seconds + t.seconds > 60){
        temp.seconds = (this->seconds + t.seconds)%60;
        this->minutes += (this->seconds + t.seconds)/60;
    }
    else{
        temp.seconds = this->seconds + t.seconds;
    }
    if(this->minutes + t.minutes > 60){
        temp.minutes = (this->minutes + t.minutes)%60;
        this->hours += (this->minutes + t.minutes)/60;
    }
    else{
        temp.minutes = this->minutes + t.minutes;
    }
    temp.hours = this->hours + t.hours;
    return temp;
}

void Time::display(){
    cout<<this->hours<<" : "<<this->minutes<<" : "<<this->seconds<<endl;
}

int main() {
    Time t1, t2, t3;
    int h1, h2, m1, m2, s1, s2;
    cout<<"First Time"<<endl;
    cout<<"Enter the hours: -";
    cin>>h1;
    cout<<"Enter the minutes: -";
    cin>>m1;
    cout<<"Enter the seconds: -";
    cin>>s1;
    cout<<"Second Time"<<endl;
    cout<<"Enter the hours: -";
    cin>>h2;
    cout<<"Enter the minutes: -";
    cin>>m2;
    cout<<"Enter the seconds: -";
    cin>>s2;
    t1 = Time(h1, m1, s1);
    cout<<"Time 1: - "<<endl;
    t1.display();
    t2 = Time(h2, m2, s2);
    cout<<"Time 2: - "<<endl;
    t2.display();
    t3 = t1+t2;
    cout<<"Sum of Times :- "<<endl;
    t3.display();
}