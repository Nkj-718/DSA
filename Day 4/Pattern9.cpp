#include <iostream>
using namespace std;

class Diamond{
    int size;
    public:
    Diamond(int size) : size(size) {}
    void printDiamond(){
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
        for(int i=size-1; i>=0; i--){
                for(int lSpace=(size-i-1); lSpace>0; lSpace--){
                    cout << " ";
                }
                for(int stars=2*i+1; stars>0; stars--){
                    cout << "*";
                }
                for(int rSpace=(size-i-1); rSpace>0; rSpace--){
                    cout << " ";
                }
                cout << endl;
            }
    }
};

int main(){
    int size;
    cout << "Size of each half of Diamond: ";
    cin >> size;
    Diamond d(size);
    d.printDiamond();
    return 0;
}