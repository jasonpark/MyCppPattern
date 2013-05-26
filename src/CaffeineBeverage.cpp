#include <functional>
#include "CaffeineBeverage.h"
#include "RecipeIf.h"
using std::bind;

void init_CaffeinBeverage()
{
  CaffeineBeverage coffee( 
    bind(&amountWaterMl, 150), &brewCoffee);
}


