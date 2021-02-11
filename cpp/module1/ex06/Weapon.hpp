#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        const std::string &getType();
        void setType(std::string type);
    private:
        Weapon();
        std::string _type;
};

#endif