#include <bits/stdc++.h>
#define MAX 200

using namespace std;

char report[MAX][MAX];

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (s.length()/n); j++) report[j][i] = s[cnt++];
    }
    for(int i = 0; i < (s.length()/n); i++){
        if(i%2 == 0){
            for(int j = 0; j < n; j++) cout << report[i][j];
        }
        else{
            for(int j = n-1; j >= 0; j--) cout << report[i][j];
        }
    }

}
