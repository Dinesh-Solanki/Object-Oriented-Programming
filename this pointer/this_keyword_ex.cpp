#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int x, int y){
            this -> x = x;
            this -> y = y;
        } 
        void print(){
            cout<<x<<" "<<y<<"\n";
        }
};

int main()
{
    Point p1(10, 20), p2(5, 5);
    p1.print();
    p2.print();
    return 0;
}



/*
output::
10 20
5 5
