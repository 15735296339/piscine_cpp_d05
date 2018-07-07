#ifndef PRIEST_HH
#define PRIEST_HH

#include "Mage.hh"

class	Priest : public Mage
{

public:
  Priest(std::string const& name, int lvl);
  ~Priest();
  
  int           CloseAttack();
  void          Heal();
};

#endif
