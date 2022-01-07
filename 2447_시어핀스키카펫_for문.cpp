#include <iostream>

using namespace std;

int main(){
    int n;
    bool check;                 //공백( )인지 별표(*)인지 확인 여부.
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){         //각 위치마다 공백인지 별표인지 직접 확인.
            check = true;
            for(int k = 3; k <= n; k *= 3){
                if(((k/3 <= j%k) && (j%k < 2*k/3)) && ((k/3 <= i%k) && (i%k < 2*k/3))){
                    printf(" ");
                    check = false;      //공백인 경우임.
                    break;
                }
            }
            if(check) printf("*");      //공백이 아니므로 별표.
        }
        printf("\n");
    }
}
