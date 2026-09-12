#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> pilha = {2, 1, 3, 5, 9, 11}; //first in last out
    int elementodotopo = pilha.top();
    pilha.push(13); //insere elemento no top
    pilha.pop(); //tira o elemento do topo
    int tamanho1 = pilha.size();
    pilha.empty() //retorna true ou false (0, 1) dependendo se estiver vazia ou nao

    queue<int> fila = {2, 1, 3, 5, 9, 11}; //first in first out
    int elementodafrente = fila.front();
    int elementodofinal = fila.back();
    fila.push(13); //insere o elemento no fim da fila
    fila.pop(); //tira o elemento da frente
    int tamanho2 = fila.size();
    fila.empty() //retorna true ou false (0, 1) dependendo se estiver vazia ou nao

    deque<int> deq = {2, 1, 3, 5, 9, 11}; //logica de um baralho - facil tirar uma carta de cima ou de baixo - fila dupla
    int primeiroelemento = deq.front();
    int ultimoelemento = deq.back();
    deq.push_front(-11); //coloca o elemento no comeco do deque
    deq.push_back(13); //coloca o elemento no final do deque
    deq.pop_front(); //tira do comeco
    deq.pop_back(); //tira do fim
    int tamanho3 = deq.size();
    deq.empty() //retorna true ou false (0, 1) dependendo se estiver vazia ou nao

    priority_queue<int, vector<int>, greater<int>> pq = {1, 12, 7, 10}; //ordena a fila a todo momento, sendo por default ordenacao decrescente
                                                           //greater<int> coloca ela crescente
                                             //vai ordenar isso aqui, e vai ficar 1, 7, 10, 12
                                             //quando inserir outro elemento, ele vai ser ordenado de forma muito rapida o(log(n))
    pq.push(3); //coloca esse elemento e ele vai para a posicao que deve pertencer de acordo com a ordenacao
    pq.pop(); //remove o ultimo elemento
    int firstelement = pq.top(); //pega o elemento do topo (apesar de ser uma fila, usa top que nem stack)
    int tamanho4 = pq.size();
    pq.empty() //retorna true ou false (0, 1) dependendo se estiver vazia ou nao


    return 0;
}
