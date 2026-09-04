#include <bits/stdc++.h>
using namespace std;

class Pattern{
    int rows;
    public:
        Pattern (int rows) : rows(rows) { printPattern(); }
        void printPattern(){
            for(int row=0; row<rows; row++){
                char val='A'+row;
                for(int col=0; col<=row; col++){
                    cout << val << " ";
                }
                cout << "\n";
            }
        }

};

int main(){
    int rows;
    cout << "Rows: ";
    cin >> rows;
    Pattern p(rows);
}