#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int rating;
        cin >> rating;
        if(1900<=rating)
        cout<<"Division 1\n";
        else if(1600<=rating&&rating<=1899)
        {
            cout<<"Division 2\n";
        }
        else if(1400<=rating&&rating<=1599)
        {
            cout<<"Division 3\n";
        }
        else 
        {
            cout<<"Division 4\n";
        }
    }
}
