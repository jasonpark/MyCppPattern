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
