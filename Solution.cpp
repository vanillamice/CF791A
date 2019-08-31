#include <iostream>
#include <string>
#include <cstddef>


using namespace std;

int main()
{
	int a; //limak's weight
	int b; // Bob's weight
	int c; // number of years
	c = 0;
	cin >> a;
	cin >> b;
	
	while(a <= b){
		a *= 3;
		b *= 2;
		c++;

		}
	cout << c << endl;


	
	return 0;
}
