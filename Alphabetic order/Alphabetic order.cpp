#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char first[100];
	char second[100];
	char third[100];

	cin.getline(first, 100);
	cin.getline(second, 100);
	cin.getline(third, 100);

	if(strcmp(first, second) ==  1 and strcmp(first, third) == 1)
	{
		if(strcmp(second, third) == 1)
			cout << third << " " << second << " " << first << endl;
		else
			cout << second << " " << third << " " << first << endl;
	}
	else if(strcmp(second, first) ==  1 and strcmp(second, third) == 1)
	{
		if(strcmp(first, third) == 1)
			cout << third << " " << first << " " << second << endl;
		else
			cout << first << " " << third << " " << second << endl;
	}
	else
	{
		if(strcmp(second, first) == 1)
			cout << first << " " << second << " " << third << endl;
		else
			cout << second << " " << first << " " << third << endl;
		
	}

	return 0;
}
