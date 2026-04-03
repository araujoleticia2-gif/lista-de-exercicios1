#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	float a, b, media;
	cin >> a >> b;
	media = sqrt(a * b);
	
	cout << "Media geometrica: " << media;
	return 0;
}