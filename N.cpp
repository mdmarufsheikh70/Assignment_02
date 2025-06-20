#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int x, y;
    cin >> x >> y;

    if(x < y)
    {
        cout << "Old" << endl;
    }
    else if(y < x)
    {
        cout << "New" << endl;
    }
    else
    {
        cout << "Same" << endl;
    }
    return 0;
}