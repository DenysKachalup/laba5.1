#include <iostream>
#include <cmath>


using namespace std;

double g(double a, double b)
{
	return (a * a) + a * b + (b * b);
}


int main() 
{

	double s,t,c;


	cout << "s= "; cin >> s;
	cout << "t= "; cin >> t;

	c = g(1, s) + (1 + (g(t, 1) * (t, 1)) * (1 + (g(t, 1) * (t, 1))) / 1 + g(s + t, 1) * (s + t, 1) * (s + t, 1));
	cout<<"c= " << c << endl;
	return 0;

}

