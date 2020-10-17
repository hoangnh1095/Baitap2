#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
	int x, y;
	int kq;
	srand(time(NULL));
	x = rand() % (100 - 0 + 1);
	y = rand() % (100 - 0 + 1);
	int tong = x + y;

	cout << "x = " << x;
	cout << " y = " << y;
	cout << "tong = ";
	cin >> kq;
	if ((x + y) == kq)
		cout << "kq dung";
	if ((x + y) != kq)
		cout << "kq sai";

}
