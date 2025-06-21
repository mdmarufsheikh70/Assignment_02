#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int w, x, y, z;
    cin >> w >> x >> y >> z;

    int result_1 = (w * 2) + (x * 1);
    int result_2 = (y * 2) + (z * 1);

    if(result_1 > result_2)
    {
        cout << "Messi" << endl;
    }
    else if(result_1 < result_2)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}