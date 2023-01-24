#include <iostream>
#include<string>
using namespace std;

int main(){
    string alphabet {" abcdefghijklmnopqrstuvwxyz"};
    string key {"!QweRtyUiopASdfGhJklzxCVbnM"};
    string s3{0};
    cout<<"enter your secret message:  "<<endl;
    getline(cin ,s3);

string enc_mess{};

cout<<"Encrypting message.."<<endl;
    for(char c:s3)
    {
    size_t position = alphabet.find(c);
    if(position != string::npos){
        char new_chr{key.at(position)};
         enc_mess+= new_chr;
    }
    else{
            enc_mess +=c;
        }
    }
    cout<<"encrypted message is  "<<endl<<enc_mess<<endl;
   
   string dec_mess{};

cout<<"decrypting message.."<<endl;
    for(char c:enc_mess)
    {
    size_t position = key.find(c);
    if(position != string::npos){
        char new_chr{alphabet.at(position)};
         dec_mess+= new_chr;
    }
    else{
            dec_mess +=c;
        }
    }
    cout<<"descrypted message is  "<<endl<<dec_mess<<endl;
   
     return 0;
}