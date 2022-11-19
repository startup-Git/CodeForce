#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    #ifndef codeforce
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t, sum, f, j;
    
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        
        sum=0;
        f=0;
        for(ll i = 0; i < n; i++)
            cin>>a[i];
                
        j=a[0];
        sort(a, a + n);
        
        if(a[0] == j)
        cout<<"Bob"<< endl;
        else
        cout<<"Alice" << endl;  
    }
    return 0;
    
}