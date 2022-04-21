#include "function.h"
#include <iostream>
using std::vector;

vector<unsigned int> fib_below_n( unsigned int n )
{
  // TODO: adicione o seu código aqui.
  vector<unsigned int> vet;

  if(n < 2)
  {
    return vet;
  }
  
    vet.push_back(1);
    vet.push_back(1);
    for(int i = 1; vet[i] + vet[i-1] < n; i++)
    {
      vet.push_back (vet[i] + vet[i-1]);
    } 
    
  return vet;
}
