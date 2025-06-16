#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int w, x, y, z;

    cin >> w >> x;
    cin >> y >> z;

    int result_1 = y + w;
    int result_2 = z + x;

    if(result_1 > result_2)
    {
        cout << "Dominater" << endl;
    }
    else
    {
        cout << "Everule" << endl;
    }
    return 0;
}