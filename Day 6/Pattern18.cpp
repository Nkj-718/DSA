#include <bits/stdc++.h>
using namespace std;

class rTriangle{
    int size;
    public:
        rTriangle(int size) : size(size) { printTriangle(); }
        void printTriangle(){
            for(int row=0; row<size; row++){
                char val='A'+((size-row)-1);
                for(char col=val; col<('A'+size); col++){
                    cout << col << " ";
                }
                cout << endl;
            }
        }
    };

int main(){
    int size;
    cout << "Rows: ";
    cin >> size;
    rTriangle r(size);
}