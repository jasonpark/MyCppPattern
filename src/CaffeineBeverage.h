#include <functional>

class CaffeineBeverage
{
   std::function<int()> amountWaterMl;
   std::function<void()> brew;
public:
  CaffeineBeverage(std::function<int()> amountWaterMl, std::function<void()> brew)
   : brew(brew)
   , amountWaterMl(amountWaterMl)
   {}
};
