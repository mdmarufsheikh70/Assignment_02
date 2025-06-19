#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    if(n < 3)
    {
        cout << "GOLD" << endl;
    }
    else if(n >= 3 && n < 6)
    {
        cout << "SILVER" <<endl;
    }
    else if(n >= 6)
    {
        cout << "BRONZE" << endl;
    }

    return 0;
}