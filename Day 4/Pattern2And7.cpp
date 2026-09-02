#include <iostream>
using namespace std;

class rTriangle{
    protected:
        int size;
        public:
            rTriangle(int size) : size(size) {}
            void printRTriangle(){
                for(int i = 0; i < size; i++){
                    for(int j=0; j<=i; j++){
                        cout << "*";
                    }
                    cout << "\n";
                }
            }
};

class Triangle : rTriangle {
    public:
        Triangle(int size) : rTriangle(size) {}
        void printTriangle(){
            for(int i=0; i<size; i++){
                for(int lSpace=1; lSpace<=(size-i-1); lSpace++){
                    cout << " ";
                }
                for(int stars=(2*i+1); stars>0; stars--){
                    cout << "*";
                }
                for(int rSpace =1; rSpace <=(size-i-1); rSpace ++){
                    cout << " ";
                }
                cout << "\n";
            }
        }
};

int main(){
    int size;
    cout << "Size: ";
    cin >> size;
    cout << "Right Triangle:-" << "\n";
    rTriangle r(size);
    r.printRTriangle();
    cout << "Triangle:-" << endl;
    Triangle t(size);
    t.printTriangle();
}