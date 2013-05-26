#include <functional>
#include <vector>
#include "CaffeineBeverage.h"

using std::bind;

CaffeineBeverage coffee( 
    bind(&amountWaterMl, 150), &brewCoffee);

CaffeineBeverage tea(
    bind(&amountWaterMl, 200), &brewTea);

void init_Beverages()
{
   std::vector<CaffeineBeverage *> beverages;
   beverages.push_back(&coffee);
   beverages.push_back(&tea);

   for(auto beverage:beverages)
     beverage->prepare();
}

   





