#include <iostream>
using namespace std;
class Pattern{
    int size;
    public:
        void setSize(int size){
            this->size=size;
        }
        void printPattern(){
            for(int i=1; i<=size; i++){
                for(int j=1; j<=i; j++){
                    cout << "*";
                }
                cout << "\n";
            }
            for(int i=size-1; i>0; i--){
                for(int j=1; j<=i; j++){
                    cout << "*";
                }
                cout << "\n";
            }
        }
};

int main(){
    int size;
    cout << "Size of half: ";
    cin >> size;
    Pattern p;
    p.setSize(size);
    p.printPattern();
}