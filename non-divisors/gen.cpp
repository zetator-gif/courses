



int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    ios_base::sync_with_stdio(0);
    cin.tie();

    rnd.next();

    int n = atoi(argv[1]);
    println(n);
    vector<int> a(n);
    for (int& x : a) {
        if (rnd.next[2]) {
            x = -1;
        }
        else {
            x = rnd.next(1, atoi(argv[2]));
        }
    }
    println(a);
}































