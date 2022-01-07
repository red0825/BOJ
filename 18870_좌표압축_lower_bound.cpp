#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> vect;
set<int> s;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, val;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;
        vect.push_back(val);
        s.insert(val);
    }
    vector<int> vect2(s.begin(), s.end());
    for(auto x : vect){
        cout << lower_bound(vect2.begin(), vect2.end(), x) - vect2.begin() << " ";
        /*lower_bound �Լ��� ���� ���� ������ i ��° ���Ұ� ���纻 ���Ϳ��� ���°�� ��ġ �ϴ��� Ȯ���Ѵ�.
          �̶� lower_bound�� �ּҰ��� ��ȯ�Ѵ�.

          find�Լ��� �ð� �ʰ��Ͽ���. �̰� �� ������....
        */
    }
}
