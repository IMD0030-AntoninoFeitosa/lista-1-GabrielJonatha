#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &R1, const Ponto &R2, const Ponto &P )
{
    if(R1.x == R2.x && R1.y == R2.y)
    {
        //cout << "invalid" << endl;
        return INVALID;
    }
    
    else if((P.x > R2.x && P.x > R1.x) || (P.y > R2.y && P.y > R1.y) || (P.x < R1.x && P.x < R2.x) || (P.y < R1.y && P.y < R2.y))
    {   
    
        //cout << "outside" << endl;
        return OUTSIDE;
    }
    
    else if(((P.x >= R1.x || P.x <=R2.x) && (P.y == R1.y || P.y == R2.y)) || ((P.y >= R1.y || P.y <=R2.y) && (P.x == R1.x || P.x == R2.x)))
    {
        
        //cout << "border" << endl;
        return BORDER;
    }
    else
    {
        
        //cout << "inside" << endl;
        return INSIDE;
    }
     
    return location_t::OUTSIDE;
}
