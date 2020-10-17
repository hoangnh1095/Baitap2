#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

int main()
{
	int x;
	int y;
	int kq;
	srand(time(NULL));
	x = rand() % (100 - 0 + 1);
	y = rand() % (100 - 0 + 1);
	int tong = x + y;
	cout << " Tong cua " << x << "+" << y << " = ";
	cin >> kq;
	if (tong == kq)
	{
		cout << " Ket qua dung !";
	}
	else
	{
		cout << " Ket qua sai!";
	}
	return 0;
}