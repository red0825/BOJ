#include <iostream>
using namespace std;

/*
cin���� EOF�� ����Ǹ� �� �̻� ���� �������� �ʾ� EOF ���°� ������ �� ä�� �Ѿ��.
(eof()�� �� �� true�� ������ �� �ִ�.)

��, eof()�Լ��� �ùٸ� ������ true�� �Ƿ��� �а� ���� eof()�� ����ؾ��Ѵ�.

���� (cin >> su1 >> su2).eof() ��� �ۼ��ؾ� �Ѵ�.
*/

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int su1, su2;
    while(!(cin >> su1 >> su2).eof()){
        cout << su1+su2 << "\n";
    }
}
