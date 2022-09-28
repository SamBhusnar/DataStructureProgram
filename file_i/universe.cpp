//  This program written in 2022 according to current physics chemistry
// and mathematis &philosophy knowledge of human
#include <iostream>
using namespace std;
// classs univers is abstract class thank you
class univers
{
private:
    int past;
    int time;
    int future_in_2022; // might be this situation are changed in future
protected:
    int mathematics;
    int physics;
    int chemistry;
    int philosophy;
    int somethingUnknown;
    int power;
    int AbilityToChangeAll;
    int sizeOfUniverse;
    int oxigen;
    int living_things;
    int carbanBasedLife;
    int intelligent_species;
    int human;
    int alien;
    int golden_zoneForPlanet;

public:
    int present;
    int blackhole;
    char element;
    univers(void);
};
univers::univers(void)
{
    cout << "This program written in 2022 in india" << endl;
    cout << "Accordding to current knowledge of physics chemistry mathematics of human in 2022 " << endl;
    cout << "Programer name sam bhusnar from india" << endl;
    time = 0;
    past = 0;
    future_in_2022 = 0;
    mathematics = 0;
    physics = 0;
    chemistry = 0;
    philosophy = 0;
    somethingUnknown = 0;
    power = 0;
    AbilityToChangeAll = 0;
    sizeOfUniverse = 0;
    oxigen = 0;
    living_things = 0;
    carbanBasedLife = 0;
    intelligent_species = 0;
    human = 0;
    alien = 0;
    golden_zoneForPlanet = 0;
    present = 0;
    blackhole = 0;
    element = 0;
}
class milkeyway : virtual public univers
{
};
class SolarSystem : virtual public milkeyway, virtual public univers
{
};
class earth : public virtual univers, public virtual milkeyway, virtual public SolarSystem
{
};
class continent : public virtual univers, public virtual milkeyway, virtual public SolarSystem, virtual public earth
{
};
class country : public virtual univers, public virtual milkeyway, virtual public SolarSystem, virtual public earth, public virtual continent
{
};
class human : public virtual univers, public virtual milkeyway, virtual public SolarSystem, virtual public earth, public virtual continent, public country
{
};

int main()
{
    cout << "This project make you able to understand working of univers "
         << "and programming language " << endl;
    univers objectFirst;
    cout << "Good to go" << endl;
    return 0;
}