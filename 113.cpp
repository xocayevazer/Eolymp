#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n;
    b = n;
    vector<long> v;

    while (n--) {
        cin >> a;
        v.push_back(a);
    }

    int count[10] = {0}; 
    for (int i = 0; i < b; i++) {
        count[v[i]]++;
    }

    int most_common = max_element(count, count + 10) - count;

    cout << b - count[most_common] << endl;

    return 0;
}
