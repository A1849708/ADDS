#include <iostream>
using namespace std;

class Movie {
    private:
        string title;
        string director;
        string rating;

    public:
        
        Movie (string Atitle, string Adirector, string Arating){
            title=Atitle;
            director=Adirector;
            setRating (Arating);
        }

        void setRating (string Arating){
            if(Arating == "very good"||Arating == "not so good"){
                rating=Arating;
            }
            else{
                rating="please enter a valid amount";
            }
        }

        string getRating(){
            return rating;
        }
};

int main (){
    Movie Rambo ("Rambo","Sylvester Stallone","very good");

    Rambo.setRating("not soj good");

    cout<<Rambo.getRating()<<endl;
    return 0;
}