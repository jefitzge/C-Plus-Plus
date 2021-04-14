//Section 11 Default Argument Value
#include <iostream>
#include <iomanip>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
	return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
	cout << "Hello " + prefix + " " + name + " " + suffix << endl;
}
int main() {

	double cost{ 0 };
	cout << fixed << setprecision(2);

	cost = calc_cost(100.0,0.08,4.25);	//Will use no defualts
	cout << "Cost is: " << cost << endl;

	cost = calc_cost(100.0, 0.08);		//Will use default shipping
	cout << "Cost is: " << cost << endl;

	cost = calc_cost(200.0);			//Will use defualt tax and shipping 
	cout << "Cost is: " << cost << endl;

	greeting("Glenn Jones", "Dr.", "Ph.D");
	greeting("Jessica Beck", "Professor", "Ph.D");
	greeting("Mellisa Johnson", "Dr.");
	greeting("William Smith");

	return 0;
}
