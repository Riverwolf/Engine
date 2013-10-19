#ifndef SWITCH_H
#define SWITCH_H

namespace vCPU{
class Switch{
private:
  bool tf;
public:
  Switch   ():tf(0) {}
  bool on  ()       { tf = true;  return tf; }
  bool off ()       { tf = false; return tf; }

  bool getState ()  { return tf; }
};}





#endif
