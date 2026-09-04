#include <bits/stdc++.h>
using namespace std;

class Pattern{
    int rows;
    public:
        Pattern (int rows) : rows(rows) { printPattern(); }
        void printPattern(){
            for(int row=rows; row>0; row--){
                for(char col='A'; col<'A'+row; col++){
                    cout << col << " ";
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