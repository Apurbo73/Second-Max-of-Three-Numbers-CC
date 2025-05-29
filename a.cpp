#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        vector < int > v;
        for (int i = 0; i < 3; i++) {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        cout << v[1] << endl;

    }
}