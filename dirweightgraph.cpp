#include <bits/stdc++.h>
using namespace std;

int main(){
    //grafo direcionado com peso
    int n; cin >> n; //vetices
    int m; cin >> m; //arestas
    vector<vector<pair<int, int>>> lista(n);

    for(int i =0 ; i < m; i++){
        int x, y, peso;
        cin >> x >> y >> peso;
        lista[x].push_back(make_pair(y, peso));
    }

    return 0;
}
