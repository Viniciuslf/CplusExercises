#include <iostream>
 
using namespace std;
 
int main() {

int day;
int year;
int month;
int dayout;

cin >> day;
year = day / 365;
month = (day % 365) / 30;
dayout =  (day % 365) % 30;

cout << year << " ano(s)"<< endl;
cout << month << " mes(es)"<< endl;
cout << dayout << " dia(s)"<< endl;
 
    return 0;
}