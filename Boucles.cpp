
#include <iostream>

int main()
{
    int nombre{};
	std::cout << "Donne-moi un nombre" << std::endl;
    std::cin >>nombre;

       
	    if ( nombre % 2 == 0)
        {
         std::cout << "nombre pair" << std::endl;
        }
		else 
		{
        std::cout << "nombre impair" << std::endl;
        }
	
	std::cin.get();
    return 0;
}