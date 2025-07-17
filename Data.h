#ifndef DATA_H
#define DATA_H

#include <string>
#include <vector>

class Character
{
private:
    int ID;
    std::string Name;
    int ID;
    int hp;
    int might;
    int speed;
    int dexterity;
    int defense;
    int fortitude;
    int mastery;
    int luck;

    double hpGrw;
    double mgtGrw;
    double spdGrw;
    double dexGrw;
    double defGrw;
    double frtGrw;
    double masGrw;
    double lckGrw;

    std::vector<int> startingLv;
    std::vector<std::string> startingClass;
    std::vector<int> startingStats;

public:
    // Constructor
    Character(int id, std::string name,
              int health, double healthGrowth,
              int mght, double mightGrowth,
              int spd, double speedGrowth,
              int dex, double dexterityGrowth,
              int def, double defenseGrowth,
              int fort, double fortitudeGrowth,
              int mstry, double masteryGrowth,
              int lck, double luckGrowth,
              std::vector<int> startLv, std::vector<std::string> startClass,
              std::vector<int> startStats)
        : ID(id), Name(name), hp(health), might(mght), speed(spd),
          dexterity(dex), defense(def), fortitude(fort), mastery(mstry),
          luck(lck), startingLv(startLv), startingClass(startClass),
          startingStats(startStats) {}

    // Getters
    int getID() const { return ID; }
    std::string getName() const { return Name; }
    int getHP() const { return hp; }
    int getMight() const { return might; }
    int getSpeed() const { return speed; }
    int getDexterity() const { return dexterity; }
    int getDefense() const { return defense; }
    int getFortitude() const { return fortitude; }
    int getMastery() const { return mastery; }
    int getLuck() const { return luck; }
    double getHPGrw() const { return hpGrw; }
    double getMightGrw() const { return mgtGrw; }
    double getSpeedGrw() const { return spdGrw; }
    double getDexterityGrw() const { return dexGrw; }
    double getDefenseGrw() const { return defGrw; }
    double getFortitudeGrw() const { return frtGrw; }
    double getMasteryGrw() const { return masGrw; }
    double getLuckGrw() const { return lckGrw; }
    std::vector<int> getstartingLv() const { return startingLv; }
    std::vector<std::string> getstartingClass() const { return startingClass; }
    std::vector<int> getStartingStats() const { return startingStats; }

    // Setters
    void setHP(int newHP) { hp = newHP; }
    void setMight(int newMight) { might = newMight; }
    void setSpeed(int newSpeed) { speed = newSpeed; }
    void setDexterity(int newDexterity) { dexterity = newDexterity; }
    void setDefense(int newDefense) { defense = newDefense; }
    void setFortitude(int newFortitude) { fortitude = newFortitude; }
    void setMastery(int newMastery) { mastery = newMastery; }
    void setLuck(int newLuck) { luck = newLuck; }
    void setHPGrw(double newHPGrw) { hpGrw = newHPGrw; }
    void setMightGrw(double newMightGrw) { mgtGrw = newMightGrw; }
    void setSpeedGrw(double newSpeedGrw) { spdGrw = newSpeedGrw; }
    void setDexterityGrw(double newDexterityGrw) { dexGrw = newDexterityGrw; }
    void setDefenseGrw(double newDefenseGrw) { defGrw = newDefenseGrw; }
    void setFortitudeGrw(double newFortitudeGrw) { frtGrw = newFortitudeGrw; }
    void setMasteryGrw(double newMasteryGrw) { masGrw = newMasteryGrw; }
    void setLuckGrw(double newLuckGrw) { lckGrw = newLuckGrw; }
    void setStartingLv(const std::vector<int> &newStartingLv) { startingLv = newStartingLv; }
    void setStartingClass(const std::vector<std::string> &newStartingClass) { startingClass = newStartingClass; }
    void setStartingStats(const std::vector<int> &newStartingStats) { startingStats = newStartingStats; }
};

class ClassInfo
{
private:
    int ID;
    std::string Classline;
    int Tier;
    std::string Name;
    std::string Weapon;
    std::string DmgType;
    int RangeMin;
    int RangeMax;

    // Growth rates
    double HP_Grow;
    double Mgt_Grow;
    double Spd_Grow;
    double Dex_Grow;
    double Def_Grow;
    double Frt_Grow;
    double Mas_Grow;
    double Lck_Grow;

    // Modifiers
    int HP_Mod;
    int Mgt_Mod;
    int Spd_Mod;
    int Dex_Mod;
    int Def_Mod;
    int Frt_Mod;
    int Mas_Mod;
    int Lck_Mod;

public:
    // Constructor
    ClassInfo(int id, std::string classline, int tier, std::string name,
              std::string weapon, std::string dmgType, int rangeMin, int rangeMax,
              double hpGrow, int hpMod, double mgtGrow, int mgtMod,
              double spdGrow, int spdMod, double dexGrow, int dexMod,
              double defGrow, int defMod, double frtGrow, int frtMod,
              double masGrow, int masMod, double lckGrow, int lckMod)
        : ID(id), Classline(std::move(classline)), Tier(tier), Name(std::move(name)),
          Weapon(std::move(weapon)), DmgType(std::move(dmgType)),
          RangeMin(rangeMin), RangeMax(rangeMax),
          HP_Grow(hpGrow), Mgt_Grow(mgtGrow), Spd_Grow(spdGrow),
          Dex_Grow(dexGrow), Def_Grow(defGrow), Frt_Grow(frtGrow),
          Mas_Grow(masGrow), Lck_Grow(lckGrow),
          HP_Mod(hpMod), Mgt_Mod(mgtMod), Spd_Mod(spdMod),
          Dex_Mod(dexMod), Def_Mod(defMod), Frt_Mod(frtMod),
          Mas_Mod(masMod), Lck_Mod(lckMod) {}

    // Getters
    int getID() const { return ID; }
    std::string getClassline() const { return Classline; }
    int getTier() const { return Tier; }
    std::string getName() const { return Name; }
    std::string getWeapon() const { return Weapon; }
    std::string getDmgType() const { return DmgType; }
    int getRangeMin() const { return RangeMin; }
    int getRangeMax() const { return RangeMax; }

    double getHPGrow() const { return HP_Grow; }
    double getMgtGrow() const { return Mgt_Grow; }
    double getSpdGrow() const { return Spd_Grow; }
    double getDexGrow() const { return Dex_Grow; }
    double getDefGrow() const { return Def_Grow; }
    double getFrtGrow() const { return Frt_Grow; }
    double getMasGrow() const { return Mas_Grow; }
    double getLckGrow() const { return Lck_Grow; }

    int getHPMod() const { return HP_Mod; }
    int getMgtMod() const { return Mgt_Mod; }
    int getSpdMod() const { return Spd_Mod; }
    int getDexMod() const { return Dex_Mod; }
    int getDefMod() const { return Def_Mod; }
    int getFrtMod() const { return Frt_Mod; }
    int getMasMod() const { return Mas_Mod; }
    int getLckMod() const { return Lck_Mod; }

    int setID(int newID) { ID = newID; }
    void setClassline(const std::string &newClassline) { Classline = newClassline; }
    void setTier(int newTier) { Tier = newTier; }
    void setName(const std::string &newName) { Name = newName; }
    void setWeapon(const std::string &newWeapon) { Weapon = newWeapon; }
    void setDmgType(const std::string &newDmgType) { DmgType = newDmgType; }
    void setRangeMin(int newRangeMin) { RangeMin = newRangeMin; }
    void setRangeMax(int newRangeMax) { RangeMax = newRangeMax; }

    void setHPGrow(double newHPGrow) { HP_Grow = newHPGrow; }
    void setMgtGrow(double newMgtGrow) { Mgt_Grow = newMgtGrow; }
    void setSpdGrow(double newSpdGrow) { Spd_Grow = newSpdGrow; }
    void setDexGrow(double newDexGrow) { Dex_Grow = newDexGrow; }
    void setDefGrow(double newDefGrow) { Def_Grow = newDefGrow; }
    void setFrtGrow(double newFrtGrow) { Frt_Grow = newFrtGrow; }
    void setMasGrow(double newMasGrow) { Mas_Grow = newMasGrow; }
    void setLckGrow(double newLckGrow) { Lck_Grow = newLckGrow; }

    void setHPMod(int newHPMod) { HP_Mod = newHPMod; }
    void setMgtMod(int newMgtMod) { Mgt_Mod = newMgtMod; }
    void setSpdMod(int newSpdMod) { Spd_Mod = newSpdMod; }
    void setDexMod(int newDexMod) { Dex_Mod = newDexMod; }
    void setDefMod(int newDefMod) { Def_Mod = newDefMod; }
    void setFrtMod(int newFrtMod) { Frt_Mod = newFrtMod; }
    void setMasMod(int newMasMod) { Mas_Mod = newMasMod; }
    void setLckMod(int newLckMod) { Lck_Mod = newLckMod; }
};

#endif // DATA_H