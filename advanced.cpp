#include <iostream>
using std::string;

class Employee{
    private:
        string name;
        string company;
        int Age;

    public:
        Employee(){
            name="no name specified";
            company="no company specified";
            Age=0;
        }

        Employee(string aName, string aCompany, int aAge){
            name=aName;
            company=aCompany;
            Age=aAge;
        }

        void introduceYourself(){
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Company: "<<company<<std::endl;
            std::cout<<"Age: "<<Age<<std::endl;
        }
};

int main(){
    int number;
    Employee one;


    Employee two("jonathan","sidwell",52);

    
    one.introduceYourself();
    two.introduceYourself();
    


}