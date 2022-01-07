#include <iostream>
#include <set>
#include <string>

using namespace std;

struct compare{
    bool operator()(const string &a, const string &b) const {       //c++17 ����!!
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    }
};

set<string, compare> report;

int main(){
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        report.insert(s);           //c++17 ����, ���Լ� �߰� �ۼ� �� const �ʼ���.
    }
    for(auto x : report){
        cout << x << "\n";
    }
}
