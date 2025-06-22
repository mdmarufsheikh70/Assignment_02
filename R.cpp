#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    long long int N;
    cin >> N;

    if (N < 1000) {
        cout << N << endl;
    } else if (N < 10000) {
        cout << (N / 10) * 10 << endl;
    } else if (N < 100000) {
        cout << (N / 100) * 100 << endl;
    } else if (N < 1000000) {
        cout << (N / 1000) * 1000 << endl;
    } else if (N < 10000000) {
        cout << (N / 10000) * 10000 << endl;
    } else if (N < 100000000) {
        cout << (N / 100000) * 100000 << endl;
    } else {
        cout << (N / 1000000) * 1000000 << endl;
    }
    return 0;
}