// reverse a sentence
#include <iostream>
#include <stack>
using namespace std;

void reverseSentence(string s){
    stack<string> wakanda;
    for(int i=0; i<s.length();i++){

      string word= "";
      while(s[i]!=' '&& i<s.length()){
          word+= s[i];
          i++;
          // word ko har letter se bana raha hai
      }
      wakanda.push(word);
    }
    while(!wakanda.empty()){
        cout<<wakanda.top()<<" ";
        wakanda.pop();

    } cout<<endl;
}
int main(){
    
    string s= " Hey, how are you doing?";
    reverseSentence(s);
     return 0;
}