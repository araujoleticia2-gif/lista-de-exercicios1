#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	float x, y, resultado;
	
	cin >> x >> y;
	resultado = pow(x, y);
	
	cout << "Resultado: " << resultado;
	return 0;
}