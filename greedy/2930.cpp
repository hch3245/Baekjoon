#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

string sang;
vector<string> friends;

int main() {
	int R;
	cin >> R;
	cin >> sang;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		friends.push_back(temp);
	}
	int currentP = 0;
	int maxP = 0;
	for (int i = 0; i < R; i++) {
		int rock = 0, scissors = 0, paper = 0;
		for (int j = 0; j < N; j++) {
			switch (friends[j][i]) {
			case 'S':
				rock += 2;
				scissors++;
				break;
			case 'P':
				scissors += 2;
				paper++;
				break;
			case 'R':
				paper += 2;
				rock++;
				break;
			}
		}
		switch (sang[i]) {
		case 'S':
			currentP += scissors;
			break;
		case 'P':
			currentP += paper;
			break;
		case 'R':
			currentP += rock;
			break;
		}
		maxP += max(rock, max(paper, scissors));
	}
	cout << currentP << "\n";
	cout << maxP << "\n";
}