#include <iostream>
using namespace std;

class Pattern{
    int size;
    public:
        Pattern(int size) : size(size) {}
        void printPattern(){
            for(int i=size; i>0; i--){
                for(int j=1; j<=i; j++){
                    cout << j;
                }
                cout << "\n";
            }
        }
};

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    Pattern p(size);
    p.printPattern();
    return 0;
}