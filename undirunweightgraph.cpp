#include <bits/stdc++.h>
using namespace std;
//usando lista ligada para representar grafos que sao nao direcionados e sem peso
int main(){

    int n, m; cin >> n >> m; //n = quantidade de nos
                             //m == quantidade de arestas
    vector<vector<int>> adj_list(n);

    for(int i = 0; i < m; i++){
        int vertice1, vertice2;
        adj_list[vertice1].push_back(vertice2);
        adj_list[vertice2].push_back(vertice1);
    }

    return 0;
}
