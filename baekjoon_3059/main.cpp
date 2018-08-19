#include <iostream>
#include <string.h>
using namespace std;

int t, al[26], r, i, j;
char i1[1001];
int main() {
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> i1;
		r = 2015;
		memset(al, 0, sizeof(al));
		for (j = 0; j < strlen(i1); j++){
			if (al[i1[j] - 'A'] == 0) r -= i1[j];
			al[i1[j] - 'A']++;
		}
		cout << r << endl;
	}
	return 0;
}