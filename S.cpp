#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    string x, y;
    cin >> x >> y;

    if((x == "AB" || x == "BC" || x == "CD" || x == "DE" || x == "EA") && (y == "AB" || y == "BC" || y == "CD" || y == "DE" || y == "EA"))
    {
        cout << "Yes" << endl;
    }
    else if((x == "AD" || x == "AC" || x == "BE" || x == "BD" || x == "CA" || x == "CE" || x == "DA" || x == "DB" || x == "EB" || x == "EC") && (y == "AD" || y == "AC" || y == "BE" || y == "BD" || y == "CA" || y == "CE" || y == "DA" || y == "DB" || y == "EB" || y == "EC") )
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}