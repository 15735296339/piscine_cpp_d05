#ifndef PRIEST_H_
#define PRIEST_H_

#include "Mage.hh"
#include "Character.hh"

class Priest : public Mage
{
public:
    explicit Priest(std::string const& name, int level);

    int CloseAttack();
    int RangeAttack();
    void Heal();
};

#endif
