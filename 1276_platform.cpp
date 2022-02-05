#include<iostream>
#define f first
#define s second

using namespace std;

pair<int, pair<int,int>> report[101];

int main(){
    int n, result = 0, pos1, pos2;
    cin >> n ;
    for(int i = 0; i < n; i++){
        cin >> report[i].f >> report[i].s.f >> report[i].s.s;
    }
    for(int i = 0; i < n; i++){
        pos1 = 0;
        pos2 = 0;
        for(int j = 0; j < n; j++){
            if(j == i) continue;
            if(report[j].s.f >= report[i].s.s || report[j].s.s <= report[i].s.f) continue;
            if(report[j].f < report[i].f){
                if(report[j].s.s > report[i].s.f && report[j].s.f <= report[i].s.f && pos1 < report[j].f)
                    pos1 = report[j].f;
                if(report[j].s.f < report[i].s.s && report[j].s.s >= report[i].s.s && pos2 < report[j].f)
                    pos2 = report[j].f;
            }
        }
        result += report[i].f - pos1;
        result += report[i].f - pos2;
    }
    cout << result;
    return 0 ;
}
