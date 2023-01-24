// ---- classes ----
#include <iostream>
using namespace std;

class book{
     private:
    int rating;

    public:
    string title;
    string author;
    int pages;

     bool bigbook(){
        if( pages<=600){
        return false ; }
         return true;}

   

    book(string atitle, string aauthor, int apages, int rating){
        title = atitle;
        author = aauthor;
        pages = apages;
       // rating = arating;   x
       setRating(arating);
    }
    void setRating(int arating){
        if(arating <=10 && arating>=0){
            rating = arating;
        }
        else {
            rating = 00;
        }
        rating = arating;
    }
  int getrating(){
      return rating;
  }
   
    
};
int main(){
    book book1("harry potter", "JK Rowling",500);
    book book2("Lord of the Rings", " Tolekein",700);
    //book1.rating = 5;  will not execute 
    book1.setrating(5);  // can be done
cout <<book1.title<<endl;
cout<<book2.bigbook()<<endl;
// cout <<book1.rating;
cout <<book1.getrating;

    return 0;
}