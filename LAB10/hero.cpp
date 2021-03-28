#include <iostream>
#include <string>
using namespace std;

class Hero{
    public:
        explicit Hero(string name, int level){
            this->name = name;
            this->level = level; 
        }
        string getName() const{
            return name;
        }
        int getLevel() const{
            return level;
        }
    private:
        string name;
        int level;
};

int main(){
    string name;
    int level;

    cin >> name >> level;
    Hero hero(name, level);

    cout << hero.getName() << " " << hero.getLevel() << endl;
}