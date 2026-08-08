#include<bits/stdc++.h>
using namespace std;

void solution(int arr[],int n){
    int missingNum = 0;
    for(int i=0;i<n;i++) missingNum^=arr[i];
    cout<<"The number appear once is : "<<missingNum<<endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);

    int arr[7] = {1,1,2,3,3,4,4};
    solution(arr,7);

    return 0;
}