
#include <iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){

// 1. largest no. from given number

    string s = "145680359";
    
   sort(s.begin(), s.end(), greater<int>());
 
  cout<<s<<endl;

// 2. frequecy of a letter

    string t = "jfhgjhjfdojerjejuw";

    int freq[26];

    for(int i=0; i<26; i++)
    freq[i] =0;

    for(int i=0; i<t.size(); i++)
    freq[t[i]- 'a']++;
    //   ^^^^^^^^^
    // freq at |   position

    char ans = 'a';
    int maxf = 0;

    for(int i=0; i<26; i++){
        if( freq[i] > maxf){
        maxf = freq[i];
        ans = i+'a';}
    }
    cout <<maxf<<" "<<ans << endl;
    return 0;
}
//bit manupulation baad me karuga