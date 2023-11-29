#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    bool flag = false;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            flag = true;
        }
        if(flag == true) {
            break;
        }
    }
    return(flag==false);
}


bool special(int n) {
    bool s = true;
    while (n!=0) {
        int l = n%10;
        if(prime(l) == false) {
            s = false;
        }
        n/=10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    bool f = false;
    while(n-- > 0 && f == false) {
        if(special(n)) {
            cout << n;
            f = true;
        }
    }
    
    return 0;
}
                                                                                                                            
