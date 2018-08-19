#include <iostream>
#include <string.h>
using namespace std;

int t, al[26], r;
char i1[1001];
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> i1;
		for (int j = 0; j < strlen(i1); j++) al[i1[j] - 'A']++;
		for (int j = 0; j < 26; j++) {
			if (al[j] == 0) r += j + 'A';
			al[j] = 0;
		}
		cout << r << endl;
		r = 0;
	}
	return 0;
}