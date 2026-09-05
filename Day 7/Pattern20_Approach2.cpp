#include <bits/stdc++.h>
using namespace std;

class Pattern{
    int size;
    public:
        Pattern(int size) : size(size) { printPattern(); }
        void printPattern(){
            int stars, spaces;
            for(int row=1; row<(2*size); row++){
                if(row<=size){
                    stars=row;
                    spaces=2*(size-row);
                }
                else{
                    stars=(2*size)-row;
                    spaces=2*(row-size);
                }
                for(int col=1; col<=stars; col++){
                    cout << "*";
                }
                for(int col=1; col<=spaces; col++){
                    cout << " ";
                }
                for(int col=1; col<=stars; col++){
                    cout << "*";
                }
                cout << endl;
            }
        }
};

int main(){
    int size;
    cout << "Rows in half of the butterfly: ";
    cin >> size;
    Pattern p(size);
}