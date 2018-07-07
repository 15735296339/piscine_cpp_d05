#ifndef MAGE_HH
#define MAGE_HH

#include "Character.hh"

class	Mage : public Character
{

public:
  Mage(std::string const& name, int lvl);
  ~Mage();

  int           CloseAttack();
  int           RangeAttack();
  void          RestorePower();

protected:
  
  Mage(std::string const& name, int lvl, int strength, int stamina, int intelligence, int spirit, int agility);
  
};

#endif
