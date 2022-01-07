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
        /*lower_bound 함수를 통해 원본 벡터의 i 번째 원소가 복사본 벡터에서 몇번째에 위치 하는지 확인한다.
          이때 lower_bound는 주소값을 반환한다.

          find함수는 시간 초과하였다. 이게 더 빠른듯....
        */
    }
}
