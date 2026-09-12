#include <bits/stdc++.h>
using namespace std;

bool custcomp(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first != b.first) return a.first > b.first;
    else return a.second > b.second;
}

int main(){
    int n;
    cin >> n;

    priority_queue<int, vector<pair<int, int>>, custcomp> pq;
    for(int i =0; i < n; i++){
        int x, y; cin >> x >> y;
        pq.push(make_pair(x,y));
    }

    for(auto pair : pq){
        cout << pair.top().first << " " << pair.top().second;
        cout << endl;
    }

    return 0;
}
