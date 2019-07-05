#include<iostream>
#include<vector>
using namespace std;
#define MAX_v 1001

vector<int> joy(MAX_v);
vector<int> lose(MAX_v);
vector<int> d(MAX_v);
int _max;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin>>lose[i];

	for (int i = 0; i < n; i++) 
		cin>>joy[i];

	for (int j = 0; j < n; j++) {
		for (int i = lose[j]; i <= 100; i++) {
			if (d[i-lose[j]] < d[i] + joy[j]) {
				d[i-lose[j]] = d[i] + joy[j];
			}
		}
	}

	for (int i = 1; i <= 100; i++) {
		if (_max < d[i])_max = d[i];
	}

	cout << _max << endl;
	return 0;
}