#include <iostream>
using namespace std;

class Animal{
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
};

class Bird:public Animal{
    public:
        Bird(int, int, int);
        void fly(int);
        void sing();
};

Animal::Animal(int h,int e,int f):happiness(h), energy(e), fullness(f){}

void Animal::limitStat(){
    if (happiness > MAX_HAPPINESS){
        happiness = 100;
    }if (energy > MAX_ENERGY){
        energy = 100;
    }if (fullness > MAX_FULLNESS){
        fullness = 100;
    }if (happiness < 0){
        happiness = 0 ;
    }if (energy < 0){
        energy = 0 ;
    }if (fullness < 0){
        fullness = 0 ;
    }
}

int Animal::getHappiness(){
    return happiness;
}

int Animal::getEnergy(){
    return energy;
}

int Animal::getFullness(){
    return fullness;
}

void Animal::eat(int food) {
    if (food > 0) {
        fullness += food;
        if (fullness > 100){
            happiness -= 10;
        }
        limitStat();
    }
}
 
void Animal::play(int hour) {
    if (hour > 0){
        if (energy && fullness){
            energy -= 10 * hour;
            fullness -= 20 * hour;
            happiness += 5 * hour;
            limitStat();
        }
    }
}
 
void Animal::sleep(int hour){
    if (hour > 0){
        energy += 10 * hour;
        fullness -= 10 * hour;
        limitStat();
    }
}

Bird::Bird(int b_h, int b_e, int b_f)
    :Animal(b_h, b_e, b_f){}

void Bird::fly(int hour){
    if (hour > 0){
      energy -= 5 * hour;
      limitStat();
    }
}

void Bird::sing() {
  happiness += 5;
  limitStat();
}

int main(){}