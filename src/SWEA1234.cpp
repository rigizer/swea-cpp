#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ttc = 10;
	string result_arr[10];

	for (int tc = 0; tc < ttc; tc++) {
		int n = 0;
		cin >> n;

		vector<int> data;

		string input;
		cin >> input;

		for (int i = 0; i < n; i++) {
			data.push_back(stoi(input.substr(i, 1)));
		}

		stack<int> s;
		if (data.size() > 0) {
			s.push(data[0]);
		}
		for (int i = 1; i < n; i++) {
			if (s.size() > 0) {
				if (s.top() == data[i]) {
					s.pop();
					continue;
				}
			}
			
			s.push(data[i]);
		}

		string temp = "";
		int s_size = s.size();
		for (int i = 0; i < s_size; i++) {
			result_arr[tc] = to_string(s.top()) + result_arr[tc];
			s.pop();
		}
	}

	for (int i = 0; i < ttc; i++) {
		cout << "#" << i + 1 << " " << result_arr[i] << + "\n";
	}
}
