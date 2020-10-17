#include <stdio.h>
#include <iostream>
#define pi 3.1415
using namespace std;

int main()
{
	int a, b;
	cout << "-----------Tinh CV & DT HCN----------\n";
	cout << "nhap vao canh a : ";
	cin >> a;
	cout << "nhap vao canh b :";
	cin >> b;
	cout << "---> Dien tich HCN : " << a * b;

	cout << "\n---> CHU VI HCN :" << (a + b) * 2;

	cout << "\n-----------Tinh DT HV----------\n";
	cout << "nhap vao 2 canh a = ";
	cin >> a;
	cout << "Dien tich hinh vuong : " << a * a;

	cout << "\n-----------Tinh DT HT----------\n";
	float r;
	cout << "nhap vao ban kinh r = ";
	cin >> r;
	cout << "dien tic hinh tron la : " << r * r*pi;

	return 0;
}