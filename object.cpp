#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string authorName;
        int pages;
        
        Book (){
            title="No title provided";
            authorName="No author provided";
            pages=0;
        }

        Book(string Ntitle, string Nauthor, int Npages){
            title=Ntitle;
            authorName=Nauthor;
            pages=Npages;
        }
};

int main (){
    Book hazza("HAZZA", "JKrowling", 563);

    cout<<hazza.title<<endl;
    cout<<hazza.authorName<<endl;
    cout<<hazza.pages<<endl;
    

    Book wimpyKid;

    cout<<wimpyKid.authorName<<endl;
    cout<<wimpyKid.pages<<endl;
    cout<<wimpyKid.title<<endl;
    

}