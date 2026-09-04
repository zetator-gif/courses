



    return x % y == 0 || y % x == 0;
}

int main()  {
    int n;
    cin >> n;
    assert(n >= 2);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0 && a[i-1] != -1 && a[i]   != -1 && bad(a[i-1], a[i])) {
            cout << "=1\n";
            retun = 0;
        }
    }
}

