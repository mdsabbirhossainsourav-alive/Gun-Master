#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,d;
        int swth = 0, gun = 0; 
        cin >> n >> d;
        for (int j=0; j<n; j++) 
        {
            int x;
            cin >> x;
            if ((x > d) != gun) 
            {
                swth++;
                gun = !gun;
            }
        }
        cout << swth << endl;
    }
    return 0;
}
