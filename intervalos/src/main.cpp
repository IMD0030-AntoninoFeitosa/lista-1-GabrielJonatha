/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <vector>
#include <iomanip>
using std::cout;
using std::ws;
using std::cin;
using std::endl;
using std::vector;
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int i  = 0; 
    int vetint[5] = {0,0,0,0,0}; 
    
    int x; 
    
    vector<int> vet;
    
    while( cin >> ws >> x)
    {
        vet.push_back(x);
        if(vet[i] >= 0 && vet[i] < 25)
            vetint[0]++;
        if(vet[i] >= 25 && vet[i] < 50)
            vetint[1]++;
        if(vet[i] >= 50 && vet[i] < 75)
            vetint[2]++;
        if(vet[i] >= 75 && vet[i] < 100)
            vetint[3]++;
        if(vet[i] < 0 || vet[i] >= 100)
            vetint[4]++;;
        i++;
        
    }
    
    for(int j = 0; j<5; j++)
    {
         cout << setprecision(4) << vetint[j]/static_cast<float>(vet.size())*100 << endl;
    }

    return 0;
}
