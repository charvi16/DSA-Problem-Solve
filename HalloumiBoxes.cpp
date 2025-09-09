//Codeforces Problem 1903-A Halloumi Boxes
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSorted(vector<int> arr)
{
    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] < arr[i + 1]) return false;
    }
    return true;
}

string SortBoxes(vector<int> arr, int k)
{
    if(isSorted(arr)) return "YES";
    if(k == 1) return "NO";
    else return "YES";
}

int main() {
    vector<int> arr;
    int k, num;
    string ans;
    cout<<"Enter Elements";
    while(cin >> num && num != -1)
    {
        arr.push_back(num);
    }
    cout<<"Enter the value of k";
    cin>>k;
    
    ans = SortBoxes(arr, k);
    cout<<"Ans: "<< ans<< endl;
    return 0;
}
