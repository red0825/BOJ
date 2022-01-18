#include <bits/stdc++.h>

using namespace std;

priority_queue<int, vector<int>, greater<int>> smaller;
priority_queue<int> bigger;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, val, minVal, maxVal;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;
        if(bigger.size() > smaller.size()) smaller.push(val);
        else bigger.push(val);                                  //시작 입력은 무조건 bigger에 들어감.

        if(!smaller.empty() && bigger.top() > smaller.top()){   //bigger는 비어있을 수 없음.

            maxVal = bigger.top();
            minVal = smaller.top();

            bigger.pop();
            smaller.pop();

            bigger.push(minVal);
            smaller.push(maxVal);
        }
        cout << bigger.top() << "\n";   //항상 bigger의 top에 중앙값이 있게 됨.
    }
}
