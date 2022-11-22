#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    string S;
    for (int i = 0; i < n; i++)
    {
        cin >> S;
        if (S[1] == '+')
        {
            x++;
        }else
        {
            x--;
        }
        
    }
    cout << x;
    return 0;
    
}