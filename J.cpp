#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int x, y, z;
    cin >> x >> y >> z;
    vector<int> A = {x, y, z};
    int n = A.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            int temp;
            if(A[j] > A[j+1])
            {
                temp = A[j+1];
                A[j+1] = A[j];
                A[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << A[i];
        if(i != n - 1)
        {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}