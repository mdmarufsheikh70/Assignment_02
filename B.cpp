#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int a , b;
    cin >> a >> b;

    if(a < b)
    {
        cout << "a < b" << endl;
    }
    else if(a > b)
    {
        cout << "a > b" << endl;
    }
    else
    {
        cout << "a == b" << endl;
    }
    return 0;
}