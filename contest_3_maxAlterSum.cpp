#include <bits/stdc++.h>
using namespace std;

int max_sum = INT_MIN;

void check(vector<int> curr) {
    int temp = 0;
    int l = curr.size();
    for(int i=0; i<l; i+=2) {
        temp+=curr[i];
    }
    for(int i=1; i<l; i+=2) {
        temp -= curr[i];
    }
    max_sum = max(max_sum, temp);
}



void backtrack(vector<int> arr, vector<int> curr, int arrlen, int ind) {
    if(ind > arrlen) {
        return;
    }
    check(curr);
    curr.push_back(arr[ind]);
    backtrack(arr, curr, arrlen, ind+1);
    curr.pop_back();
    backtrack(arr, curr, arrlen, ind+1);
}


int main() {
    string user;
    getline(cin, user);
    vector<int> arr;
    for (char i: user) {
        if(i >= '0' && i <= '9') {
            arr.push_back(i - '0');
        }
    }
    
    
    backtrack(arr, {}, arr.size(), 0);
    cout << max_sum;
    
    return 0;
}
