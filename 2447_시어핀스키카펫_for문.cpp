#include <iostream>

using namespace std;

int main(){
    int n;
    bool check;                 //����( )���� ��ǥ(*)���� Ȯ�� ����.
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){         //�� ��ġ���� �������� ��ǥ���� ���� Ȯ��.
            check = true;
            for(int k = 3; k <= n; k *= 3){
                if(((k/3 <= j%k) && (j%k < 2*k/3)) && ((k/3 <= i%k) && (i%k < 2*k/3))){
                    printf(" ");
                    check = false;      //������ �����.
                    break;
                }
            }
            if(check) printf("*");      //������ �ƴϹǷ� ��ǥ.
        }
        printf("\n");
    }
}
