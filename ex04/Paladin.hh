#ifndef PALADIN_H_
#define PALADIN_H_

#include <string>
#include "Warrior.hh"
#include "Priest.hh"

class Paladin : public Warrior, public Priest
{
    public:
        explicit Paladin(std::string const& name, int level);

        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
        int Intercept();
};

#endif
