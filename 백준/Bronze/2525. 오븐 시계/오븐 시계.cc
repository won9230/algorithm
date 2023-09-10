#include <iostream>

using namespace std;

int main()
{
	int A;
	int B;
	int C;
	int ans;
	cin >> A;
	cin >> B;
	cin >> C;

	B += C;

	while (B >= 60)
	{
		B -= 60;
		A += 1;
	}
	while (A >= 24) {
		A -= 24;
	}

	cout << A <<" "<< B;
	return 0;
}