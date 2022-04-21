#include <iostream>
#include <vector>
#include <string>
#include <array>

template <size_t SIZE>
void reverse ( std::array <std::string, SIZE> &arr)
{
	int s = arr.size();

	for (int i = 0; i < arr.size()/2; i++)
	{ 
		swap(arr[i], arr[s-i-1]);
	}
	
	for (int i = 0; i < arr.size(); i++)
	{
	    std::cout << arr[i] << " ";    
	}
}
