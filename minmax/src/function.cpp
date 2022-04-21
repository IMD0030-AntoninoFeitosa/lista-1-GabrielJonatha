#include "function.h"
#include <iostream>
#include <vector>
#include <iomanip>
/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    // TODO: Adicione aqui sua solução.
pair <int, int> par;   

    if(n < 1)
    {
      return { -1, -1 };
    }
  
    int menor = V[0];
    int maior = V[0]; 
    
    int pos_menor = 0;  
    int pos_maior = 0;
   
    
    for (int i = 1; i < n; i++) 
    {
        if(V[i] < menor)
        {
            menor = V[i];
            pos_menor = i;
        }
        
        if(V[i] >= maior)
        {
            maior = V[i];
            pos_maior = i;
        }
    }
    
    par.first = pos_menor; 
    par.second = pos_maior; 
    
    return par;
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    
}
