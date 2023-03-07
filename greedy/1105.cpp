#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long L, R;
	cin >> L >> R;
	int i = 0;
	while (true) {
		long long temp = pow(10, i);
		if (L / temp == R / temp) {
			long long LT = L / temp;
			int j = 0;
			int cnt = 0;
			while (true) {
				temp = pow(10, j);
				if (LT / temp == 0) break;
				if (LT / temp % 10 == 8) cnt++;
				j++;
			}
			cout << cnt << "\n";
			break;
		}
		if (L / temp == 0) {
			cout << "0\n";
			break;
		}
		i++;
	}
}