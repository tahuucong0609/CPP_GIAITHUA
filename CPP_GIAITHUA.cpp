#include <iostream>
using namespace std;

int main() {
	cout << "Ung dung tinh giai thua";
	int so, gt = 1;
	cout << "\nNhap so";
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		gt *= i;
	}
	cout << "Giai thua" << so << "!=" << gt;
	cout << "\n Su dung WHILE\n";
	gt = 1;
	int j = 1;
	while (j <= so)
	{
		gt *= j;
		j++;
	}
	cout << "Giai thua" << so << "!=" << gt;
	cout << "\n Su dung DO WHILe\n";
	gt = 1;
	int k = 1;
	do {
		gt *= k;
		k++;
	} while (k <= so);
	cout << "Giai thua" << so << "!=" << gt;
	return 0;
}