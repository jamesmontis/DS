// James Montis
// Part B - HW 1 Data Structures - Prof. Hassan
// LocRevMain.cpp - Due Sept 4th 2020

// ****************************************
// This part B program is a revenue accountant program for restaurants
// There are 4 restaurant locations

// tasks 
// [ ] member array to hold quarter incomes
// [ ] static member for restaurant gross income
// [ ] member fx for setting 4 quarterly values
// [ ] fx accepts integer arg and returns the quarterly income of the loc
// [ ] validate inputs

#include <iostream>
#include <string>
#include "LocationRevenue.h"
using namespace std;

int main(){
	int size=4;
	
	double qnum=0;
	LocationRevenue locs[size]; // array of LocationRevenue objects which each will hold quarterly income
		
	cout << "************************\n";
	cout << " Welcome to Location Revenue Accounter\n\nWe will begin by entering quarterly income for the restaurants 1-4\n";
	cout << "************************\n";
	
	// call setQincomes to begin building array for each of 4 objects
	
	// in each j loop it will call setYincome to increment the static grossincome
	
	for (int i = 0 ; i < size ; i++){
			cout << " Enter restaurant #" << i+1 << "'s quarter revenue\n";
			locs[i].setQincome(i);
		 // pass quarter income and location #i to setter
		}
	
	for (int k = 0 ; k < size ; k++){
		cout << "Restaurant #" << k+1 << "'s gross income for the year was " << locs[k].getYincome() << endl;
	}
	
	
	int a=0,b=0;
	
	cout << "Which location and quarter's revenue would you like to check\nEnter location.\n>";
	cin >> a;
	cout << "quarter?\n>";
	cin >> b;
	qnum = locs[a-1].getQincome(b-1);
	cout << "Location "<<a<<" made " << qnum << " in quarter "<< b<<".\n";
	
	
	cin.get();
	
	return 0;
}



