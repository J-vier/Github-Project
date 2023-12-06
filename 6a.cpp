#include <iostream>



using namespace std;

double returnLarger(double a, double b)

{
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}



int main()
{


	double a, b, c, d, e, f, g;

	

	cout << "Enter seven numbers: ";
	cin >> a >> b >> c >> d >> e >> f >> g;



	double largestNumber = returnLarger(a, returnLarger(b, returnLarger(c, returnLarger(d, returnLarger(e, returnLarger(f, g))))));
	cout << "Largest number is: " << largestNumber << endl;

	

	return 0;
}
