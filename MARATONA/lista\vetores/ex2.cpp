#include <bits/stdc++.h>
using namespace std;

int main(){
    string  g, a;
    int r, p = 0;  
    cin >> r >> a >> g;

    for (int i = 0; i < r; i++){
        if(a[i] == g[i]){
            p++;
        }
    }
    
    cout << p;

}

    
    
