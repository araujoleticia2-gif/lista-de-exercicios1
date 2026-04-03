#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float celsius, farenheit;
	
	cin >> celsius;
	farenheit = (celsius * 9/5) + 32;
	
	cout << "farenheit; " << farenheit;
	return 0;
}