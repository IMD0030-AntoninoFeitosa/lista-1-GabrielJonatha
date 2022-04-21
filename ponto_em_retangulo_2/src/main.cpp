/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;
using std::vector;
using std::ws;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    struct Ponto ie;
    struct Ponto sd;
    struct Ponto pxy;
    //Declaração das minhas structs do tipo Ponto, ondem contem dois inteiros x e y cada;
    
    int x;
    vector<int> vet;
    
    while( cin >> ws >> x){
        vet.push_back(x);
    }   
    
    int aux;
    
    for(int i = 0; i < vet.size(); i+=6){
        ie.x =vet[i];
        ie.y =vet[i+1];
        sd.x = vet[i+2];
        sd.y = vet[i+3];
        pxy.x = vet[i+4];
        pxy.y = vet[i+5];
        
        if(sd.x < ie.x || sd.y < ie.y){
            aux = ie.x;
            ie.x = sd.x;
            sd.x = aux;
            
            aux = ie.y;
            ie.y = sd.y;
            sd.y = aux;
        }
        
        pt_in_rect(ie, sd, pxy);
    }

    return 0;
}
