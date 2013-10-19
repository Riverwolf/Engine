#ifndef MEMORY_H
#define MEMORY_H

//#include "switch.hpp"
#include <vector>
#include <iterator>
using namespace std;

namespace vCPU{
class Register{
private:
  vector<bool> reg;
  vector<bool>::iterator itr;
public:
  void reset();

  Register();
  ~Register(){}
};}



#endif
