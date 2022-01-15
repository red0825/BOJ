#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t, n, val;
    char a;
    bool left, check;
    string command;
    cin >> t;
    for(int i = 0; i < t; i++){
        left = true;
        check = true;
        string s;
        cin >> command >> n >> a;
        deque<int> report;
        string temp;
        for(int j = 0; j < n; j++){
            cin >> val >> a;
            report.push_back(val);
        }
        if(n == 0) cin >> a;            //이거 생각을 못했다....
        for(auto x : command){
            if(x == 'R') left = !left;
            else if(x == 'D'){
                if(report.empty()){
                    check = false;
                    break;
                }
                else if(left) report.pop_front();
                else report.pop_back();
            }
        }
        if(!check) cout << "error" << "\n";
        else if(report.empty()) cout << "[]\n";
        else if(left){
            cout << "[";
            while (!report.empty()){
              cout << report.front();
              report.pop_front();
              if (!report.empty())cout << ",";
            }
            cout << "]\n";
        }
        else{
            cout << "[";
            while (!report.empty()){
              cout << report.back();
              report.pop_back();
              if (!report.empty())cout << ",";
            }
            cout << "]\n";
        }
    }
}
