#include <bits/stdc++.h>
using namespace std;

int clumsy(int n) {
    
    //  10 x 9 / 8 + 7 - 6 x 5 / 4 + 3 - 2 x 1
    //   0   1   2   3   4   5   6   7   8   9
    // 90/8 + 7 - 30/4 + 3 - 2
    // 11 + 7 - 7 + 3 - 2
    // 18 - 10 - 2
    // 6
    
    vector<int> arr;
    for (int i=n; i>0; i--) {
        arr.push_back(i);
    }
    
    
    for (int i=0; i<n-1; i+=4) {
        arr[i] = arr[i]*arr[i+1];
        arr[i+1] = -1;
    }
    
    vector<int> temp;
    for(auto i: arr) {
        if(i != -1) {
            temp.push_back(i);
        }
    }    
    
    arr = temp;
    
    for(int i=0; i<arr.size()-1; i+=3) {
        arr[i] = arr[i]/arr[i+1];
        arr[i+1] = -1;
    }
    
    temp = {};
    for(auto i: arr) {
        if(i != -1) {
            temp.push_back(i);
        }
    }   
    
    arr = temp;
    
    
    for(int i=0; i<arr.size()-1; i+=2) {
        arr[i] = arr[i] + arr[i+1];
        arr[i+1] = -1;
    }
    
    temp = {};
    for(auto i: arr) {
        if(i != -1) {
            temp.push_back(i);
        }
    }   

    int s = temp[0];
    for(int i=1; i<temp.size(); i++) {
        s -= temp[i];
    }
    
    return s;

}
    
    
int main() {
    int n;
    cin >> n;
    cout << clumsy(n);
    return 0;
}
