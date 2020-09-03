#include <iostream>
#include "Lab3_B_Shape.h"
using namespace std;
#include <cmath>

int main(){
	Circle c(1,2,3);
	cout << "Circle area is " << c.getArea()<< endl;
	
	Square s(5);
	cout << "Square area is " << s.getArea()<< endl;
	
	cout << "Square side = "<< s.getSide() << endl;
	return 0;
}
