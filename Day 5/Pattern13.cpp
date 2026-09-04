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
            int start=1;
            for(int row=1; row<=size; row++){
                for(int col=1; col<=row; col++){
                    cout << start++ << " ";
                }
                cout << "\n";
            }
        }
};

int main(){
    Pattern p;
    int size;
    cout << "Rows: ";
    cin >> size;
    p.setSize(size);
    return 0;
}