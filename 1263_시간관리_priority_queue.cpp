#include <bits/stdc++.h>

using namespace std;

struct compare{
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }
};

priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

bool solution(int n, priority_queue<pair<int, int>, vector<pair<int, int>>, compare> npq){
    while(!npq.empty()){
        int nT = npq.top().first;
        int nS = npq.top().second;
        npq.pop();
        n += nT;
        if(n > nS) return false;
    }
    return true;
}

int main() {
    int n, t, s, limit, now = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t >> s;
        pq.push({t, s});
    }
    limit = pq.top().second;
    for(int i = 0; i < limit; i++){
        if(!solution(now, pq)) break;
        now++;
    }
    cout << --now;
}
