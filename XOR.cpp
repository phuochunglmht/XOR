#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

using namespace std;

void process(int t) {
	int c = t % 4;
	if (t == 1) {
		cout << 1 << "\n" << 1 << "\n";
		return;
	}
	if (t == 2) {
		cout << 1 << "\n" << 2 << "\n";
		return;
	}
	switch (c)
	{
	case 0: 
		cout << t << "\n";
		for (int i = 1; i <= t; ++i) {
			cout << i << " ";
		}
		break;
	case 1:
		cout << t - 1 << "\n";
		for (int i = 1; i <= t; ++i) {
			if (i != t - 1) cout << i << " ";
		}
		break;
	case 2:
		cout << t - 1 << "\n";
		for (int i = 2; i <= t; ++i) {
			cout << i << " ";
		}
		break;
	case 3:
		cout << t - 1 << "\n";
		for (int i = 1; i < t; ++i) {
			cout << i << " ";
		}
		break;
	default:
		break;
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//freopen("XOR.INP", "r", stdin);
	//freopen("XOR.OUT", "w", stdout);
	int n;
	cin >> n;
	while (n--) {
		int t;
		cin >> t;
		process(t);
	}
	return 0;
}