#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int X;
	cin >> X;
	float Y;
	cin >> Y;
	cout << setprecision(5);
	double kml = X/Y;
	cout << kml << " km/l" << endl;
	
	
	return 0;
}
