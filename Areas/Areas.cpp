#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	double A;
	double B;
	double C;
	double tri;
	double cir;
	double trap;
	double square;
	double rec;

	cin >> A >> B >> C;
	
	tri = (A*C)/2;
	cir = 3.14159*C*C;
	trap = (A+B) * C / 2;
	square = B*B;
	rec = A*B;
	
	cout << fixed << setprecision(3);
	
	cout << "TRIANGULO: " << tri << endl;
	cout << "CIRCULO: " << cir << endl;
	cout << "TRAPEZIO: " << trap << endl;
	cout << "QUADRADO: " << square << endl;
	cout << "RETANGULO: " << rec << endl;
	

	return 0;
}
