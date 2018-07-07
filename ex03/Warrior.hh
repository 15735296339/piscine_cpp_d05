#ifndef WARRIOR_HH
#define WARRIOR_HH

#include "Character.hh"

class	Warrior : virtual public Character
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
