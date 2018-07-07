#ifndef WARRIOR_HH
#define WARRIOR_HH

#include "Character.hh"

class	Warrior : public Character
{

public:
  Warrior(std::string const& name, int lvl);
  ~Warrior();

  int           CloseAttack();
  int           RangeAttack();
  
private:

  std::string const	_weapon;
};

#endif
