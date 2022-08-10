#include <iostream>
using namespace std;

int rec(int r, int n, int p) {
	if (p == 0) {
		return r;
	}

	return rec(r * n, n, p - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int rec_arr[10] = {};
	
	int ttc = 10;
	for (int tc = 0; tc < ttc; tc++) {
		int tcn;
		cin >> tcn;

		int n, p;
		cin >> n >> p;

		rec_arr[tc] = rec(1, n, p);
	}

	for (int i = 0; i < 10; i++) {
		cout << "#" << i + 1 << " " << rec_arr[i] << + "\n";
	}
}
