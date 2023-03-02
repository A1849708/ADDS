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

        void setName(string aName){
            name=aName;
        }
        void setCompany (string aCompany){
            if (aCompany=="whsmith"){
                company=aCompany;
            }
            else{
                company="mid workplace";
            }
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
        
};

int main(){
    Employee one;

    one.setName("alex");
    one.setCompany("wsmith");
    one.setAge(18);

    std::cout<<one.getName()<<", "<<one.getCompany()<<", "<<one.getAge()<<std::endl;
    


}