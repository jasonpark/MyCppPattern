#include <iostream>
#include <functional>

using std::cout;

class CaffeineBeverage
{
   std::function<int()> amountWaterMl;
   std::function<void()> brew;
   void boilWater(int ml)
   {
     std::cout << "boil Water of " <<ml << "milli litter\n";
   }

public:
  CaffeineBeverage(std::function<int()> amountWaterMl, std::function<void()> brew)
   : brew(brew)
   , amountWaterMl(amountWaterMl)
   {}
  void prepare() 
  {
    boilWater(amountWaterMl());
    brew();
  }
};

static void brewCoffee()
{
   std::cout << "dripping Coffee through filter\n";
}

static void brewTea()
{
  std::cout << "steeping Tea\n";
}

static int amountWaterMl(int ml)
{
  return ml;
}

