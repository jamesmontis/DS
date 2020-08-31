// James Montis
// DS 2437 - Prof Hassan
// Homework 1 - Due Sept 4, 2020

// This is circle Class, accepts a radius input from user
// an array of objects is dynamically allocated
// <cmath> is used for M_PI constant for area calculation
// program tracks largest circle and returns it at the end

#include <iostream>
#include <cmath>
using namespace std;

class Circle{
    double area; // is calculated in main

    public:

    void setArea(double a)  { area = a;    }
    double getArea()        { return area; }
};

int main(){

    int circles;
    double rad, math=0, largest=0;
    cout << endl << endl;

    cout << "How many circles are there?\n>";
    cin >> circles;
    if (!circles){
        while (!circles){
            cout << "\nEnter a real number of circles\n>";
            cin >> circles;
        }
    }

    Circle* arr = new Circle[circles];

    for (int i = 0 ; i < circles ; i++){
        cout << "For circle #" << i+1 << " enter the radius\n>";
        cin >> rad;
        math = M_PI * rad * rad;
        arr[i].setArea(math);
        if (largest < math){ largest = math;}
    }
    cout << "\nThe largest circle is " << largest << " units squared for area.\n";

    delete [] arr;
return 0;
}