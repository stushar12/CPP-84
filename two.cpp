#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={10, 5, 11, 10, 20, 12};
    set<int> s;
    for(int i=0;i<6;i++)
    {
        if(s.lower_bound(arr[i])!=s.end())
        cout<<*s.lower_bound(arr[i])<<" ";
        else
        cout<<"-1"<<" ";
        s.insert(arr[i]);
    }
}