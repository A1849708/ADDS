#include <iostream>
using std::string;

class Employee{
    public:
        string name;
        string company;
        int Age;

        void introduceYourself(){
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Company: "<<company<<std::endl;
            std::cout<<"Age: "<<Age<<std::endl;
        }
};

int main(){
    int number;
    Employee one;
    one.Age=18;
    one.company="WHSmith";
    one.name="Alex";

    Employee two;
    two.Age=19;
    two.company="coles";
    two.name="Max";

    for (int i=0;i<5;i++){
        one.introduceYourself();
        two.introduceYourself();
    }


}