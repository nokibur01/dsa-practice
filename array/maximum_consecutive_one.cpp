#include<bits/stdc++.h>
using namespace std;

void solution(int arr[],int n){
    int freq=0,mxFreq=0;
    for(int i=0;i<n;i++){
        if(arr[i]) {
            freq++;
            mxFreq = max(mxFreq,freq);
        }
        else{
            freq=0;
        }
    }
    cout<<mxFreq<<endl;

    // Time complexity O(n)
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);

    int arr[9] = {1,1,0,1,1,1,0,1,1};
    solution(arr,9);

    return 0;
}