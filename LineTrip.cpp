//codeforces LineTrip Problem
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

long long maxDistance(vector<long long> arr)
{
    long long max_distance = 0;
    for(int i = 1; i < arr.size(); i++)
    {
        if(i == arr.size() -1)
            max_distance = max(max_distance, 2 * (arr[i] - arr[i - 1]));
        else 
            max_distance = max(max_distance, arr[i] - arr[i - 1]);
    }
    return max_distance;
}

int main()
{
    long long n, x;
    vector<long long> arr;
    cin>>n>>x;
    arr.push_back(0);
    for(int i = 0; i < n; i++)
    {
        long long point;
        cin>>point;
        arr.push_back(point);
    }
    arr.push_back(x);
    long long result = maxDistance(arr);
    cout << result;
    return 0;

}