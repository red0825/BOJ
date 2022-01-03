#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
    https://www.acmicpc.net/problem/15595

    BOJ에서 정답 비율은 다음과 같은 공식을 통해서 계산한다.

    정답 비율 = (문제를 맞은 사람의 수) / (문제를 맞은 사람의 수 + (문제를 맞은 각 사람이 그 문제를 맞기 전까지 틀린 횟수의 총 합)) × 100

    틀린 횟수는 "맞았습니다!!" 이외의 결과를 받은 횟수를 의미한다.
    문제를 맞은 사람은 관리자의 제출은 제외하고 계산해야 한다.
    만약, 맞은 사람이 관리자를 제외하고 없는 경우 (분모가 0), 정답 비율은 0이다.

    어떤 문제의 제출 현황이 주어졌을 때, 정답 비율을 계산하는 프로그램을 작성하시오.
*/

/*
    자료구조 map을 활용한 풀이이다.
*/

map<string, pair<int, int>> report;
int main(){
    int n, id, result, memory, t, lang, length, cnt = 0, total = 0;
    double answerRatio = 0;
    string userId;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> id >> userId >> result >> memory >> t >> lang >> length;
        if(userId != "megalusion" && report[userId].second != 1){   //관리자 id 또는 이미 정답 제출자인 경우는 제외
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
    if(total != 0) answerRatio = (double)cnt / total * 100; //divisor by 0 방지
    printf("%.10f", answerRatio);
}
