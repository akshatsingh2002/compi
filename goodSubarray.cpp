#include <iostream>
#include <string>
#include<map>
using namespace std;
void subarray()
{
    int n;
    cin >> n;
    long long val;
    cin >> val;
    vecto
    long long sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = val % 10;
        val = val / 10;
    }
    cout << endl;
    
    for(int i=0;i<n;i++){
        sum += arr[i];
        pre[i] = sum;
    }
    map<int,int> mymap;
    for(int i=0;i<n;i++){
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pre[i] << endl;
    // }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        subarray();
    }
    return 0;
}