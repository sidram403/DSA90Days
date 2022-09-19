#include<bits/stdc++.h>
using namespace std;


int maximumSum(int arr[], int n){
    int best = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(best<sum){
            best = sum;
        }
        if(sum < 0){
            sum =0;
        }
    }
    return best;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum = maximumSum(arr,n);
    cout<<maxSum;
    return 0;
    
}
