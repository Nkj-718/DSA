#include <bits/stdc++.h>
using namespace std;

class Pattern{
    int size;
    public:
        void setSize(int size){
            this->size=size;
            printPattern();
        }
        void printPattern(){
            for(int row=1; row<=size; row++){
                int start=1;
                int space=2*(size-row);
                for(int col=1; col<=row; col++){
                    cout << start++;
                }
                for(int col=1; col<=space; col++){
                    cout << " ";
                }
                for(int col=1; col<=row; col++){
                    cout << --start;
                }
                cout << endl;
            }
        }
};

int main(){
    Pattern p;
    int size;
    cout << "Rows: ";
    cin >> size;
    p.setSize(size);
    return 0;}