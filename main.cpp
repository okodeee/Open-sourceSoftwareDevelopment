#include <iostream>
using namespace std;

int main() {

	int dan;
	cout << "구구단 몇 단?";
	cin >> dan;

	for (int i = 1; i < 10; i++) {
		cout << dan << " * " << i << " = " << dan * i << endl;
	}


	return 0;
}