#include <functional>
#include <string>

struct Condiment
{
  std::function<std::string()> description;
  std::function<float()> price;
};

class Sugar
{
  static std::string description() { return "-Sugar-";}
  static float price() {return 0.07f;}
};

class Milk
{
  static std::string description() { return "-Milk-";}
  static float price() { return 0.13f;}
};

template<typename Res>
static Res accumlate(std::function<Res()> call, std::function<Res()> next)
{
   if(next) return call()+ next();
   return call();
}

/* Type Inference : see Professional C++ pp. 741 */
template<typename Call, typename NextCall>
static auto accumlate(Call call, NextCall next) ->decltype(call()+next())
{
   if(next) return call()+next();
   return call();
} 

