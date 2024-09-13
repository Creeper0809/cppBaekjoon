#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

using namespace std;

int main(){
    fastio;
    vector<int> A;
    vector<int> B;
    int n;
    cin >> n;
    int num;
    for(int i = 0; i < n;i++){
        cin >> num;
        A.push_back(num);
    }
    for(int i = 0; i < n;i++){
        cin >> num;
        B.push_back(num);
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<int>());
    int sum = 0;
    for(int i = 0; i < n;i++){
        sum += A[i] * B[i];
    }
    cout << sum;
}