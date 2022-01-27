#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#define MAX 100

using namespace std;

bool check[MAX];
bool val[MAX];

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string target, guess;
    cin >> target;
    while(target != "#"){
        memset(val,false,sizeof(val));
        memset(check,false,sizeof(check));
        int b = 0, g = 0, w = 0;
        cin >> guess;
        for(int i = 0; i < target.length(); i++){
            if(target[i] == guess[i]){
                val[i] = true;
                check[i] = true;
                b++;
            }
        }
        if((target[1] == guess[0]) && !check[1] && !val[0]){    //변경 할 때 확인은 필수임!!! 안해서 오래걸렸음...
                val[0] = true;
                check[1] = true;
                g++;
        }
        for(int i = 1; i < target.length()-1; i++){
            if((target[i-1] == guess[i]) && !check[i-1] && !val[i]){
                val[i] = true;
                check[i-1] = true;
                g++;
            }
            else if((target[i+1] == guess[i]) && !check[i+1] && !val[i]){
                val[i] = true;
                check[i+1] = true;
                g++;
            }
        }
        if((target[target.length()-2] == guess[target.length()-1]) && !check[target.length()-2] && !val[target.length()-1]){
                val[target.length()-1] = true;
                check[target.length()-2] = true;
                g++;
        }
        for(int i = 0; i < target.length(); i++){
            if(!check[i]){
                for(int j = 0; j < target.length(); j++){
                    if(!val[j] && (target[i] == guess[j])){
                        val[j] = true;
                        w++;
                        break;
                    }
                }
            }
        }
        cout << guess << ": " << b << " black, " << g <<" grey, " << w << " white\n";
        cin >> target;
    }
}
