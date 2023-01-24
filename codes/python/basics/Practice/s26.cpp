// --- class inheritance ---
#include <iostream>
using namespace std;

class artist{
    public:
    void paints(){
        cout<<" the artist make good paintings"<<endl;
    }
    void sketch(){
        cout<<"the artist draw sketches"<<endl;
    }
    void sing(){
        cout<<"the artist sing beautifully"<<endl;
    }

    };

int main(){
    artist arijit;
    arijit.sing();
    return 0;
}