//Section 11 Function Prototyping
#include <iostream>

using namespace std;
//Function Prototypes
double calc_area_circle(double r);
double calc_vol_cylinder(double r, double h);
void area_circle();
void volume_cylinder();

const double pi{ 3.14159 };

int main() {

	area_circle();
	volume_cylinder();

	return 0;
}

double calc_area_circle(double r) {
	return pi * (r * r);
}

double calc_vol_cylinder(double r, double h) {
	//return pi * (r * r)* h;
	return calc_area_circle(r)* h;
}

void area_circle() {
	double radius{ 0 };
	cout << "\nEnter the radius of the circle: ";
	cin >> radius;

	cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
	double radius{ 0 };
	double height{ 0 };
	cout << "\nEnter the radius of the cylinder: ";
	cin >> radius;
	cout << "\nEnter the height of the cylinder: ";
	cin >> height;

	cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_vol_cylinder(radius, height) << endl;
}
