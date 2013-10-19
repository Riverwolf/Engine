#ifndef WIRE_H
#define WIRE_H

namespace vCPU{
class Wire{
private:
  const int     *_idataA;
  const int     *_idataB;

  const char    *_cdataA;
  const char    *_cdataB;

  const double  *_ddataA;
  const double  *_ddataB;

  const bool    *_bdataA;
  const bool    *_bdataB;
public:
  // Overloaded constructors to account for varying data 
  // on either side.
  // Why would data change during the transfer across
  // a wire??

  Wire(int a, int b)       : _idataA(&a), _idataB(&b){}
  Wire(char a, char b)     : _cdataA(&a), _cdataB(&b){}
  Wire(double a, double b) : _ddataA(&a), _ddataB(&b){}
  Wire(bool a, bool b)     : _bdataA(&a), _bdataB(&b){}
  const Wire(Wire w){return w;}
  ~Wire(){}
};}



#endif
