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
        else bigger.push(val);                                  //���� �Է��� ������ bigger�� ��.

        if(!smaller.empty() && bigger.top() > smaller.top()){   //bigger�� ������� �� ����.

            maxVal = bigger.top();
            minVal = smaller.top();

            bigger.pop();
            smaller.pop();

            bigger.push(minVal);
            smaller.push(maxVal);
        }
        cout << bigger.top() << "\n";   //�׻� bigger�� top�� �߾Ӱ��� �ְ� ��.
    }
}
