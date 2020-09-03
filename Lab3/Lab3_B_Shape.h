#include <iostream>
using namespace std;
#include <cmath>

class Shape {
private:
	double area;
public:
	void setArea(double ar) { area = ar;}
	double getArea() { return area;}
	virtual double findArea() {};
	virtual double findArea(double r) {return r * r * M_PI;}
	virtual double findArea(double a, double b) {return a*a;}
};

class Circle : public Shape{
	double centerX;
	double centerY;
	double radius;
public:
	Circle(double x, double y, double rad){
		double ar= this->findArea(rad);
		this->centerX=x;
		this->centerY=y;
		this->radius=rad;
		this->setArea(ar);
	}
	void setRadius(double r) 
	{radius = r;
	 setArea(r);
	}
	
};

//double Circle::findArea(int num){

class Square : public Shape{
	double side;
public:
	Square(double s1){
		side=s1;
		double s2=0;
		double ar=this->findArea(s1,s2);
		this->setArea(ar);
	}
	double getSide() {return side;}
	
};

