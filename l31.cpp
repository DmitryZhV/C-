#include <iostream>
#include <cmath>
using namespace std;

struct Point {
	Point(){
		x=y=0;
	}
	Point(double x, double y){
		this->x=x;
		this->y=y;
	}
	
	double x;
	double y;

	void shift(double x, double y);
	
};


void Point::shift(double x, double y){
                this->x+=x;
                this->y+=y;
        }

struct Segment {
	Point p1;
	Point p2;
	double length(){
	double dx=p1.x-p2.x;
	double dy=p1.y-p2.y;
	return sqrt(dx*dx+dy*dy);
     }


};


bool intersects(Segment s1, Segment s2, Point *p);

int main()
{
	Point p1 ={0.4,1.4};
	Point p2 ={1.2,6.3};
	Segment a={p1,p2};
	p1.shift(1.1,1.3);
	cout<<p1.x<<" "<<a.p2.x<<" "<<a.p1.x<<endl;
	double i=a.length();
	cout<<i<<endl;
	return 0;
}
