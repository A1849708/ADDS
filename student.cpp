#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string degree;
        double GPA;

        Student (string Aname, string Adegree, double aGPA){
            name=Aname;
            degree=Adegree;
            GPA=aGPA;
        }

        bool hasDistinction (){
            if (GPA>=0.4){
                return true;
            }
            return false;
        }
};
int main (){

    Student Nicholas ("Nick", "ARTS as a human endevour", 0.5);

    cout<<Nicholas.hasDistinction()<<endl;

    Student Nikki ("nikiminaj", "engineering", 3.5);

    cout<<Nikki.hasDistinction()<<endl;

    return 0;
}