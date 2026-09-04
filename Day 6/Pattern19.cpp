#include <bits/stdc++.h>
using namespace std;

class Pattern{
    int size;
    public:
        Pattern(int size) : size(size) { printPattern(); }
        void printPattern(){
            for(int row=size; row>0; row--){
                for(int col=0; col<row; col++){
                    cout << "*";
                }
                for(int col=0; col<(2*(size-row)); col++){
                    cout << " ";
                }
                for(int col=row; col>0; col--){
                    cout << "*";
                }
                cout << endl;
            }
            for(int row=0; row<size; row++){
                for(int col=0; col<=row; col++){
                    cout << "*";
                }
                for(int col=0; col<(2*((size-row)-1)); col++){
                    cout << " ";
                }
                for(int col=0; col<=row; col++){
                    cout << "*";
                }
                cout << endl;
            }
        }
};

int main(){
    int size;
    cout << "Rows in one half of the pattern: ";
    cin >> size;
    Pattern p(size);
}