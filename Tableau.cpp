                                            // Afficher la plus petite et le plus grande valeurs du tableau
#include <iostream>
#include <vector>

int main()
{
 
      std::vector <int> const Tableau_entiers {2, -20, 74, 600, -12 };
      int minimum { Tableau_entiers [0] };
      int maximum { Tableau_entiers [0] };
        
        for (auto const entier : Tableau_entiers)
        {
            if (entier < minimum)
            {
                minimum = entier;
            }
            
            else if (entier > maximum)
            {
                maximum = entier;
            }
        }

        std::cout << "Le minimum est " << minimum << "." << std::endl;
        std::cout << "Le maximum est " << maximum << "." << std::endl;
        


    std::cin.get();
    return 0;
}