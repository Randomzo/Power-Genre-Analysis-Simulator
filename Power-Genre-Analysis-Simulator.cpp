// A simple program where users build teams based on elemental affinities, analyze win probabilities, and battle using randomized outcomes. 
//                                 Starting small but will expand with advanced mechanics over time :9.
#include <format>
#include <iostream>
#include <string>
using namespace std;
// class for the types 
// Elami is Estako for animals 

class Elami 
{
    private:
        string powerGenre;
        string name;

    public:
        int health;
    
    Elami(int hearts, const string& fam, const string& label):
         health(hearts), powerGenre(fam), name(label)  {}

            void print() const{cout<<name<<", "<<health<<", "<<powerGenre<<endl;}
};


/* Each genre will have a unique ability linked to two for balance reasons and a negetive (only when fighting counter )
 fire double damage,
 earth double health,
water half damage intake,
 air double postive odds
 fusion types have half of each benfit  so 12 Elami */ 



int main () {

    Elami FireElami (100,"fire","Sprada");

    FireElami.print();

    return {};
}