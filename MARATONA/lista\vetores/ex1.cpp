#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,i, m=0;
    cin >> n;

    vector <int> vetor;

    for (int h = 0; h < n; h++)
    {
        cin >> i;
        vetor.push_back(i);
        

    }
    
    for (int t = 1; t < n; t++)
    {
        if(vetor[t] < vetor[t-1]){
            while(vetor[t] < vetor[t-1]){
                vetor[t] = vetor[t] + 1;
                m++;
                
            }
        }
    }


    cout << m;
}

    
    
