#include <bits/stdc++.h>
using namespace std;

class Pattern{
    int size;
    public:
        Pattern(int size) : size(size) { printPattern(); }
        void printPattern(){
            for(int row=0; row<size; row++){
                char val='A'-1;
                for(int space=0; space<=((size-row)-1); space++){
                    cout << " ";
                }
                for(int alpha=0; alpha<((2*row)+1); alpha++){
                    if(alpha <= (2*row)/2)
                        cout << ++val;
                    else
                        cout << --val;
                }
                for(int space=0; space<=((size-row)-1); space++){
                    cout << " ";
                }
                cout << endl;
            }
        }
};

int main(){
    int size;
    cout << "Rows: ";
    cin >> size;
    Pattern p(size);
}