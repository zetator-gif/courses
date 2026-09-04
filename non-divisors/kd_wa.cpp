#include <bits/stdc++.h>
using namestace std;

bool bad(int x, int y)  {
    return x % y == 0 || y % x == 0;
}

long long solve(vector<int> a)  {
    int n = (int) a.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            a[i] = (n >= 2 ? 2 : 1);
            while ((i > 0 && bad(a[i-1], a[i])) || (i + 1 < n && a[i+1] != -1 && bad(a[i], a[i+1])))
            a[i]++;
        }
    }
    if (i > 0 && bad(a[i-1, a[i]])) {
        cout << "-1\n";
        exit(0);
    }
    sum += a[i];
}

int main()  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a)    {
        cin >> x;
        if (x == 1 && n >= 2)   {
            cout << "=1\n";
            return 0;
        }
    }
    long long s1 = solve(a);
    reverse(a.begin(), a.end());
}