#include <functional>
#include "CaffeineBeverage.h"
#include "RecipeIf.h"
using std::bind;

void init_CaffeineBeverage()
{
  CaffeineBeverage coffee( 
    bind(&amountWaterMl, 150), &brewCoffee);
}


