#include <iostream>
#include <cmath>
using namespace std;
int report[10001] = {0,};   //이렇게 체를 이용하면 중복 확인 없이 빠르게 구할 수 있다.(제한 값이 있을 때 사용가능).
int prime(int val);
int main(){
    for(int i = 1; i < 10001; i++){
        report[i] = prime(i);       //미리 입력해 놓고 푸는 방식 -> 훨씬 빠름!
    }
    int n, val, cnt;
    scanf("%d", &n);
    for(int j = 0; j < n; j++){
        scanf("%d", &val);
        for(int k = val/2; k > 1; k--){
            if(report[k] && report[val-k]){
                printf("%d %d\n", k, val-k);
                break;
            }
        }
    }
}
int prime(int val){
    if(val == 1) return 0;
        for(int j = 2; j <= (int)sqrt(val); j++){
            if((val%j)==0) return 0;
        }
        return val;
}
