#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
        void status(){
        cout << "status\n";
        cout << "happiness = " << getHappiness() << "\n" 
        << "energy = " << getEnergy() << "\n"
        << "fullness = " << getFullness() << "\n";
        cout << endl;
    }
};

class Bird : public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

class Pet
{
protected:
    string name;
public:
    Pet(string);
    string getName();
    void setName(string);
};

class OwnedBird : public Bird, public Pet
{
public:
    OwnedBird(string, int, int, int);
};

    Animal :: Animal(int h, int e, int f){
        this->happiness = h;
        this->energy = e;
        this->fullness = f;
    }

    void Animal :: limitStat(){
        if(happiness > 100){
            happiness = MAX_HAPPINESS;
        }if(energy > 100){
            energy = MAX_ENERGY;
        }if(fullness > 100){
            fullness = MAX_FULLNESS;
        }if(happiness < 0){
            happiness = 0;
        }if(energy < 0){
            energy = 0;
        }if(fullness < 0){
            fullness = 0;
        }
    } 

    int Animal :: getHappiness(){
        return happiness;
    }

    int Animal :: getFullness(){
        return fullness;
    }

    int Animal :: getEnergy(){
        return energy;
    }

    void Animal :: eat(int food){
        fullness += food;
        if(fullness > 100){
            happiness -= 10;
        }
        limitStat();
    }

    void Animal :: play(int hour){
        while(hour > 0 && (energy > 0 && fullness > 0)){
            energy -= 10;
            fullness -= 20;
            happiness += 5;
            hour -= 1;
        }
        limitStat();
    }

    void Animal :: sleep(int hour){
        while(hour > 0){
            energy += 10;
            fullness -= 10;
            hour -= 1;
        }
        limitStat();
    }

    Bird :: Bird(int h, int e, int f) : Animal(h, e, f){
        this->happiness = h;
        this->energy = e;
        this->fullness = f;   
    }

    void Bird :: fly(int hour){
        while(hour > 0){
            energy -= 5;
            hour -= 1;
        }
        limitStat();
    }
    
    void Bird :: sing(){
        fullness += 5;
        limitStat();
    }

    Pet :: Pet(string name){
        this->name = name;
    }

    string Pet :: getName(){
        return name;
    }

    void Pet :: setName(string name){
        this->name = name;
    }

    OwnedBird :: OwnedBird(string name, int h, int e, int f) : Pet(name), Bird(h, e, f){
        this->name = name;
        this->happiness = h;
        this->energy = e;
        this->fullness = f;
    }


int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);

    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
    }
    cout << animal.getName();
}