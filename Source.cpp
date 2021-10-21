#include <iostream>
using namespace std;
int main() {
	setlocale (LC_ALL, "Russian");
	int a, b;
	cin >> a >> b;
	if (a == 20 && b == 42)cout << "принят\n";
	else if (a != 20 && b != 42)cout << "не принят\n";




}