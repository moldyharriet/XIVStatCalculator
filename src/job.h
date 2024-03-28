//
// Created by Chase Gibbs on 3/28/2024.
//

#ifndef XIVSTATCALCULATOR_JOB_H
#define XIVSTATCALCULATOR_JOB_H

#include <string>

class job{
    private:
        std::string jobTitle; //title of the job

        //major levels
        int jobLevel, gearLevel;

        //begin primary attributes
        int strength, dexterity, vitality, intelligence, mind;

        //begin offensive properties
        int criticalHit, determination, directHitRate;

        //begin defensive properties
        int physicalDefense, magicDefense;

        //begin physical properties
        int attackPower, skillSpeed;

        //begin mental properties
        int attackMagicPotency, healingMagicPotency, spellSpeed;

        //begin role properties
        int piety, tenacity;

        //might implement crafting later..not really the point of this program?
    public:
        //begin accessors


        //begin mutators
};

#endif //XIVSTATCALCULATOR_JOB_H
