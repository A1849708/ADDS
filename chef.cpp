#include <iostream>
using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout<<"making chicken"<<endl;
        }
        void makeVeggies(){
            cout<<"making veggies rn"<<endl;
        }
        void makeSpecialDish(){
            cout<<"imma prepare something special"<<endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta (){
            cout<<"bappity boop, imma maka tha pasta"<<endl;
        }
    void makeSpecialDish(){
            cout<<"making chicken parma"<<endl;
        }

};

int main (){
    Chef Dave;

    Dave.makeSpecialDish();

    ItalianChef Allesandro;
    Allesandro.makeSpecialDish();
    Allesandro.makePasta();


}