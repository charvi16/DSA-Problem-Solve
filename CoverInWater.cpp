#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minmumOnePerforms(string s, int n)
{
    bool three_empty_cont = false;
    int total_empty = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 1] == '.'){
            three_empty_cont = true;
            break;
        }
        if(s[i] == '.') total_empty++;
    }

    if(three_empty_cont) return 2;
    else return total_empty;
}

int main()
{
    int t;
    cin>>t;
    string s;
    int n;
    while(t--)
    {
        cin>> n;
        cin>>s;
    }

    int result = minmumOnePerforms(s,n);
    cout<<result;

    return 0;
}
