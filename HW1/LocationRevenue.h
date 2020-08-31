#ifndef LOCATIONREVENUE_H
#define LOCATIONREVENUE_H
#include <iostream>
using namespace std;

class LocationRevenue {

    static double grossIncome;
    double qtrIncome[4];

public:
    void setQincome(int);
    void setYincome(double);
    double getYincome();
    double getQincome(int);
};


double LocationRevenue::grossIncome=0;

void LocationRevenue::setQincome(int k){
	double qmoney=0;
	
	for (int i = 0 ; i < 4 ; i++){
		cout << "How much did location #" << k+1 << " make in q" << i+1 << "?\n";
		cin >> qmoney;
			while (qmoney < 0 || cin.fail() ){
			cout << "Error: entered revenue must be >= 0";
			cin >> qmoney;
			}
			qtrIncome[i]=qmoney;
			grossIncome+=qmoney;
	}
}
				
void LocationRevenue::setYincome(double inc){

}

double LocationRevenue::getYincome(){
	double total =0;
	for (int i = 0 ; i < 4 ; i++){
			total+=qtrIncome[i];
	}
    return total;
}

double LocationRevenue::getQincome(int b) {
	return qtrIncome[b];
}


#endif
