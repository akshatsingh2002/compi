#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,count=1,max=1;
    cin>>n;
    long long arr[n];
     for(long long i=0;i<n;i++){
         cin>>arr[i];
     }
    for(long long i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
            if(count>max)
            max=count;
        }
        else
        count=1;
    }
    cout<<max;
    return 0;
}