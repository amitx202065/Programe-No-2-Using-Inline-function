#include <iostream>
using namespace std;
class Calculation
{
	int x,y,plus,subtract,mult;
	float divi;
public:
	void getValue();
	void addition();
	void subtraction();
	void multiplication();
	void division();
};
inline void Calculation :: getValue()
{
	cout << "Enter first value:";
	cin >> x;
	cout << "Enter second value:";
	cin >> y;
}

inline void Calculation :: addition()
{
	plus = x+y;
	cout << "Addition of two numbers: " << x+y << "\n";
}

inline void Calculation :: subtraction()
{
	subtract = x-y;
	cout << "Difference of two numbers: " << x-y << "\n";
}

inline void Calculation :: multiplication()
{
	mult = x*y;
	cout << "Product of two numbers: " << x*y << "\n";
}

inline void Calculation ::division()
{
	divi=x/y;
	cout<<"Division of two numbers: "<<x/y<<"\n" ;
}

int main()
{
	cout << "Program using inline function\n";
	Calculation m;
	m.getValue();
	m.addition();
	m.subtraction();
	m.multiplication();
	m.division();
	return 0;
}