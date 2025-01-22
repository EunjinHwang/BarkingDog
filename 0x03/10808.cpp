#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    string s;
//    cin >> s;
//    for (char i = 'a'; i <= 'z'; i++) {
//        int count = 0;
//        for (int j = 0; j < s.length(); j++) {
//            if (s[j] == i) count++;
//        }
//        cout << count << " ";
//    }
//
//    return 0;
//}

int freq[26];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for (auto c : s)
		freq[c - 'a']++;
	for (int i = 0; i < 26; i++) {
		cout << freq[i] << ' ';
	}

	return 0;
}