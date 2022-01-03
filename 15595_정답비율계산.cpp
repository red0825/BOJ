#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
    https://www.acmicpc.net/problem/15595

    BOJ���� ���� ������ ������ ���� ������ ���ؼ� ����Ѵ�.

    ���� ���� = (������ ���� ����� ��) / (������ ���� ����� �� + (������ ���� �� ����� �� ������ �±� ������ Ʋ�� Ƚ���� �� ��)) �� 100

    Ʋ�� Ƚ���� "�¾ҽ��ϴ�!!" �̿��� ����� ���� Ƚ���� �ǹ��Ѵ�.
    ������ ���� ����� �������� ������ �����ϰ� ����ؾ� �Ѵ�.
    ����, ���� ����� �����ڸ� �����ϰ� ���� ��� (�и� 0), ���� ������ 0�̴�.

    � ������ ���� ��Ȳ�� �־����� ��, ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

/*
    �ڷᱸ�� map�� Ȱ���� Ǯ���̴�.
*/

map<string, pair<int, int>> report;
int main(){
    int n, id, result, memory, t, lang, length, cnt = 0, total = 0;
    double answerRatio = 0;
    string userId;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> id >> userId >> result >> memory >> t >> lang >> length;
        if(userId != "megalusion" && report[userId].second != 1){   //������ id �Ǵ� �̹� ���� �������� ���� ����
            if(result == 4){
                report[userId].first += 1;
                report[userId].second = 1;
            }
            else{
                report[userId].first += 1;
            }
        }
    }
    for(auto x : report ) {
        if(x.second.second == 1){
            total += x.second.first;
            cnt += x.second.second;
        }
   }
    if(total != 0) answerRatio = (double)cnt / total * 100; //divisor by 0 ����
    printf("%.10f", answerRatio);
}
