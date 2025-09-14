//CodeForces Problem : Doremy's Paint 3
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        map<long long, long long>freq_map;
        for(int i = 0; i < n; i++)
        {
            freq_map[a[i]]++;
        }

        if(freq_map.size() >= 3) cout<<"NO";
        else{
            long long freq_1 = freq_map.begin() -> second;
            long long freq_2 = freq_map.rbegin() -> second;
            if(freq_1 == freq_2) cout<<"YES";
            else if(n %2 == 1 && abs(freq_1 - freq_2) == 1) cout<<"YES";
            else cout<<"NO";
        }
    }
    return 0;
}