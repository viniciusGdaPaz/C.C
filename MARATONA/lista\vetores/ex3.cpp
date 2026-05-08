#include <bits/stdc++.h>
using namespace std;

int main(){
    string  g;
    int  p = 0, r;  
    cin  >> g;

    for (int i = 0; i < g.length(); i++){
        
        if(g[i] == g[i+1]){
           if(p == 0){
            p = p +2;
           } else {
            p++;
           }
        } else{
           if(p > r){
                r = p;
           }
           p = 0;
        } 
    }

    cout << r;

}

    
    
