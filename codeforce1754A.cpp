#include<iostream>
#include<stack>
using namespace std;

int main()
{
    #ifndef codeforce
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<char>c;
        for(int i = 0;i < n; i++)
        {
            if(c.size())
                if(s[i] == 'A')
                c.pop();

            if(s[i] == 'Q')
                c.push(s[i]);
        }
        
        if(c.size())
            cout << "no" << endl;
        else
        cout << "yes" << endl;
    }
    return 0;
}
