#include <iostream>
#include <string>

using namespace std;

int main() {
	string n;
	string np;
	char s;
	int k;

	cin >> n >> s >> k;
	np=n+n;

	if (s == 'L') {
		int idx = k;
		for (int i = 0; i < n.size(); i++) {
			if (idx >= n.size()) idx %= n.size();
			cout << n[idx++];
		}
	}
	else if(s == 'R'){
		for (int i = n.size()-k; i < np.size()-k ; i++) {
			cout << np[i];
		}
	}


	return 0;
}