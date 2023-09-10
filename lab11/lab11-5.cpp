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

class Pet : public Animal
{
private:
    string name;
public:
    Pet(string, int, int, int);
    string getName();
    void setName(string);
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

    Pet :: Pet(string name, int h, int e, int f) : Animal(h, e, f){
        this->name = name;
        this->happiness = h;
        this->energy = e;
        this->fullness = f;
    }

    string Pet :: getName(){
        return name;
    }

    void Pet :: setName(string name){
        this->name = name;
    }

int main(){
    Animal cat(50, 50, 50);
    cat.eat(20);
    cat.status();
    cat.play(7);
    cat.status();

}