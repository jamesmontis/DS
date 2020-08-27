// James Montis
// DS 2437 - Lab 2, part A
// Aug 27, 2020

// merge set2 into set1
// look for largest numbers and fill null spots first
// then use sorter fx

#include <iostream>
#include "sorter.h"
#include "partB.h"
#include "Measure.h"

using namespace std;

void sorter(int arr[],int arr2[], int sz, int sz2);
void summer(int n);

int main() {

    Measure m1(4,5,6), m2(7,8,9);
    int set1[]={11,24,31,0,0,0};
    int set2[]={21,51,61};

    cout << "\n First filling empty spaces\n";
    cout << "\n Then sorting\n\n>";

    int size1 = sizeof(set1) / sizeof(set1[0]);
    int size2 = sizeof(set2) / sizeof(set2[0]);

    sorter(set1, set2,size1, size2);

    cout << endl;

    summer(10);
    cout << "Part B runtime is O(n)\n\n";

    cout << "2a. O(n)\n";
    cout << "2b. O(n)\n";
    cout << "2c. O(n^2)\n";
    cout << "2d. O(n^3)\n";


    cout << "Part 3:";
    cout << "Measure 1 = " << m1 << "\tMeasure 2 = " << m2 << endl;
    cout << "\n\nMeasure 1 + Measure 2 = ";
    cout << m1+m2; //overloaded << and + here for Measure objects
    cout << endl;
    cout << "Measure 2 - Measure 1 = ";
    cout << m2-m1;
    cout << "\n0 for false, 1 for true\nIs M1 == M2? > ";
    cout << (m1==m2);
    cout << "\nIs M1 < M2? > ";
    cout << (m1<m2);
    cout << "\nIs m2 > m1 > ";
    cout << (m2 > m1);
   // cout << "\nDoes m1+=m2 ? > " << m1+=m2;
   cout << m1.getYards() << " " << m1.getFeet() << " " << m1.getInch();
}
