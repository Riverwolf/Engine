#ifndef MEMORY_H
#define MEMORY_H

#include "switch.hpp"

namespace vCPU{
class Memory{
private:
  Switch a0, a1, a2, a3, a4, a5, a6, a7;
  Switch b0, b1, b2, b3, b4, b5, b6, b7;
  Switch c0, c1, c2, c3, c4, c5, c6, c7;
  Switch d0, d1, d2, d3, d4, d5, d6, d7;
public:
  Memory(){
    a0.off();a1.off();a2.off();a3.off();a4.off();a5.off();a6.off();a7.off();
    b0.off();b1.off();b2.off();b3.off();b4.off();b5.off();b6.off();b7.off();
    c0.off();c1.off();c2.off();c3.off();c4.off();c5.off();c6.off();c7.off();
    d0.off();d1.off();d2.off();d3.off();d4.off();d5.off();d6.off();d7.off();
  }
  ~Memory(){}
};}



#endif
