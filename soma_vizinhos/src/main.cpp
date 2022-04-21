/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <utility> 
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::ws;

int testa_vizinho(int m, int n)
{
	int aux = m;

	if(n == 0)  //Verifica se "n" é igual a zero para retornar o valor de m sem alteração;
	{
	  
	    return m;
	}
	
	if(n < 0) //Caso "n" seja menor do que zero, a "soma dos vizinhos" serão dos números antecessores a m; 
	{
	    
	    for(int i = 1; i < n*(-1); i++)
	    {
	        aux += m-i;
	    }
	    
	    return aux;
	}
	
	if(n > 0) //Caso "n" seja maior do que zero, a "soma dos vizinhos" serão ´dos números sucessores a m;
	{
	    for(int i = 1; i < n; i++)
	    {
	        aux += m+i;  
	    }
	    
	    return aux;
	}
	return 0;
}

int main()
{
    vector<int> vet;
	int m, n, x;
	while( cin >> ws >> x)
    {
        vet.push_back(x);
    }
    
    for(int i = 0; i < vet.size(); i+=2)
    {
        cout << testa_vizinho(vet[i], vet[i+1]) << endl;
    }
	
}