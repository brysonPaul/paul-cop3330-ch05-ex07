#include <iostream>
#include <string>
#include "std_lib_facilities.h"

void quadratic(int a,int b, int c){
	double result1, result2;

	double discriminant = (b*b) - (4*a*c);
	if(discriminant < 0){
		cout << "no real roots... exiting \n";
		return;
	}
	else if (discriminant == 0)
	{
			result1 = (-1*b)/(2*a);
			cout << "one real root, which is " << result1;	
	}
	else if(discriminant > 0){
		 result1 = ((-1 * b) + sqrt(discriminant)) / (2 * a);
		 result2 = ((-1 * b) - sqrt(discriminant)) / (2 * a);
		 cout << "two real roots, which are " << result1 << " and " << result2;	
	}
}

int main() {
  double a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	quadratic(a,b,c);
} 