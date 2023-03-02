#include <iostream>
using std::string;

class AbstractEmployee{
    private:
        virtual void askForPromo()=0 ;

};

class Employee: private AbstractEmployee{
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

        Employee (string bName, string bCompany, int bAge){
            name=bAge;
            company=bCompany;
            Age=bAge;
        }

        void introduceYourself(){
            std::cout<<"Name: "<<name<<std::endl;
            std::cout<<"Company: "<<company<<std::endl;
            std::cout<<"Age: "<<Age<<std::endl;
        }

        void setName(string aName){
            name=aName;
        }
        void setCompany (string aCompany){
            company=aCompany;
        }
        void setAge (int aAge){
            Age=aAge;
        }

        int getAge(){
            return Age;
        }
        string getName(){
            return name;
        }
        string getCompany(){
            return company;
        }
        
        void askForPromo(){
            if (Age>19){
                std::cout<<"you just got promoted my g!"<<std::endl;
            }
            else {
                std::cout<<"you didnt get promoted champs :( "<<std::endl;
            }
        }
};

int main(){
    Employee one ("alex","whsmith",18);
    Employee two ("joseph", "woolies", 25);

    one.askForPromo();
    two.askForPromo();
    


}
