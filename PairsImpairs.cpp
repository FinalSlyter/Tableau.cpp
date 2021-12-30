                            // Afficher dans un tableau les nombres pairs, dans l'autre les nombres impairs
#include <iostream>
#include <vector>

int main()
{
 
      std::vector <int> const Tableau_entiers {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      std::vector <int> pairs {};
      std::vector <int> impairs {};

    for (auto const entier : Tableau_entiers )
    {
        if (entier % 2 == 0)
        {
            pairs.push_back(entier);
        }
        else {
            impairs.push_back(entier);
        }
    }
    std::cout << "Les pairs sont :" << std::endl;
    for (int const entier_pairs : pairs){
    std::cout << entier_pairs << std::endl;
    }
    std::cout << "Les impairs sont :" << std::endl;
    
    for(int const entier_impairs : impairs)
    {
    std::cout << entier_impairs << std::endl;
    }
    
    std::cin.get();
    return 0;
}