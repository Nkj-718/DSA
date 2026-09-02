#include <iostream>
using namespace std;

class Pattern{
    int size;
    public:
        Pattern(int size) : size(size) {}
        void printPattern(){
            for(int i=0; i<size; i++){
                for(int lSpace=1; lSpace<=(size-i-1); lSpace++){
                    cout << " ";
                }
                for(int stars=2*i+1; stars>0; stars--){
                    cout << "*";
                }
                for(int rSpace=1; rSpace<=(size-i-1); rSpace++){
                    cout << " ";
                }
                cout << endl;
            }
        }
};

int main(){
    int size;
    cout << "Size: ";
    cin >> size;
    Pattern p(size);
    p.printPattern();
}