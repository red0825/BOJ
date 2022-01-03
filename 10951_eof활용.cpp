#include <iostream>
using namespace std;

/*
cin에서 EOF가 검출되면 더 이상 값을 저장하지 않아 EOF 상태가 저장이 된 채로 넘어간다.
(eof()는 이 때 true를 리턴할 수 있다.)

즉, eof()함수가 올바른 시점에 true가 되려면 읽고 나서 eof()를 사용해야한다.

따라서 (cin >> su1 >> su2).eof() 라고 작성해야 한다.
*/

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int su1, su2;
    while(!(cin >> su1 >> su2).eof()){
        cout << su1+su2 << "\n";
    }
}
