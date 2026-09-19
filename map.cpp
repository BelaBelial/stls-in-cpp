#include <bits/stdc++.h>
//ou
//#include <map>
using namespace std;

int main(){
    map<string, int> pessoa;
    //map eh um vetor dinamico com referencia de qualquer tipo de dado
    //no caso eh um "vetor muito doido"
    //map eh baseado em chaves e valores
    //cada elemento eh um par de chave/valor
    //Map nao permite duplicatas (no caso as chaves)
    //Os valores podem ser duplicados
    //O map eh automaticamente ordenado (crescentemente)
    //mas se quiser tem como colocar mais um parametro para ordenar de forma decrescente
    //- usando o greater<int>, assim como priority_queue, so que o default eh diferente
    //no geral, ele guarda a chave buscada e o valor que estamos guardando e ambos podem ser de qualquer tipo

    int n = 10;
    //Preenchendo o map com 10 pessoas (nome e idade)
    for(int i = 0; i < n; i++){
        string nome;
        int idade;
        cin >> nome >> idade;
      
        pessoa[nome] = idade; //essa notacao eh: pessoas[na_chave_tal] = valor_tal;
    }

    //no map , sempre procuramos um elemento pela chave dele
    if(pessoa.empty()) cout << "o map ta viazio" << endl; //ve se o map ta vazio -> retorna um valor booleano
    else cout << "O map nao esta vazio" << endl;

    auto it = pessoa.find("isabela"); //retorna um iterador que aponta para a posicao que a chave esta na estrutura
                                      //o tipo mesmo do auto vai ser: map<string, int>::iterator it
                                      //se o elemento existir, aponta para o lugar na memoria (random)
                                      //se nao exisitir, aponta para map.end() -> nao tem nada la
                                      //para acessar a chave fazemos it->first (chave)
                                      //para acessar o valor fazemos it->second (valor)
    if(it != pessoa.end()) cout << "existe no map";
    else cout << "nao existe no map" << endl;


    //para saber se o elemento existe ou nao, sem usar o find (usando uma funcao booleana)
    //o map.count() eh uma funcao que retorna um valor booleano
    //se existir eh true, se nao eh false
    //se nao para saber se nao tem o elemento, da p fazer: if(!map.count(<chave_do_elemento>))
    if(pessoa.count("isabela")) cout << "o count identificou que existe" << endl;
    else cout << "o count identificou que nao existe" << endl;

    //iterando por um map:
    for(auto par : pessoa){
        cout << "chave = " << par.first << " " << "valor = " << par.second << endl;
    }

    //outras funcoes:
    pessoa.size();
    pessoa.clear();

    return 0;
}
