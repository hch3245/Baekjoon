#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int main() {
	int N, S;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	cin >> S;
	int starti = 0;
	while (S > 0) {
		int range;
		if (S > N - starti) {
			range = N - 1;
		}
		else {
			range = starti + S;
		}
		int maxi = starti, max = arr[starti];
		for (int i = starti + 1; i <= range; i++) {
			if (max < arr[i]) {
				max = arr[i];
				maxi = i;
			}
		}
		S -= maxi - starti;
		int temp = max;
		arr.erase(arr.begin() + maxi);
		arr.insert(arr.begin() + starti, max);
		starti++;
		if (starti >= N) break;
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i];
		if (i < N - 1) cout << " ";
	}
	cout << "\n";
}