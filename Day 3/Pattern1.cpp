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
                for(int j=1; j<=size; j++){
                    cout << "*";
                }
                cout << "\n";
            }
        }
};

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    Pattern p;
    p.setSize(size);
    p.printPattern();
}