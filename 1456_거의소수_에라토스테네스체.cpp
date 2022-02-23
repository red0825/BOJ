#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;

int primeNum[MAX+1];

void eratosthenesSieve(){
    for (int i = 2; i <= MAX; i++){
        primeNum[i] = i;
    }

    for (int i = 2; i*i <= MAX; i++){
        if (primeNum[i] == 0)
            continue;
        for (int j = i * i; j <= MAX; j += i)
            primeNum[j] = 0;
    }
}

int main(){
    long long a, b, cnt = 0;
    eratosthenesSieve();
    cin >> a >> b;
    for(long long i = 2; i*i <= b; i++){
        if(primeNum[i] != 0){
            int n = 2;
            while(a > pow(i, n)) n++;
            while(pow(i, n) <= b){
                cnt++;
                n++;
            }
        }
    }
    cout << cnt;
}
