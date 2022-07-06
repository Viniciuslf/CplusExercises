#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x; //input
	double s = 0; //Sum
	double repetitions = 0;
	int n = 0;

	cin >> x;

	while(s <= 10000)
	{
		s = (x + (1.0 * n)) / (1.0 * (n + 1)) + s;
		repetitions++;
		n++;
	}

	cout << fixed << setprecision(2);

	cout << "S = " << s << endl;
	cout << repetitions << " Repetições" << endl;

	return 0;
}
