#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float milhas, km;
	
	cin >> milhas;
	km = milhas * 1.852;
	
	cout << "Km: " << km;
	return 0;
}