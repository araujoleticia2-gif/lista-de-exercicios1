#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float cotacao, dolares, reais;
	
	cin >> cotacao >> dolares;
	reais = cotacao * dolares;
	
	cout << "valor em reais: " << reais;
	return 0;
}