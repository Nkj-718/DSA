#include <bits/stdc++.h>
using namespace std;

class vectorOperations{
    vector<int> v;
    public:
        void vectorStatus(){ //0
            cout << "—————————————————————————————————————" << endl;
            cout << "Current Vector: [    ";
            for(auto it=v.begin(); it!=v.end(); it++){
                cout << *it << "    ";
            }
            cout << "]" << endl;
            cout << "—————————————————————————————————————" << endl;
        }

        void insertElement(int position,int value){ //1
            if(position>v.size()){
                cout << "Vector currently does not have " << position << " elements." << "\n";
                return;
            }
            v.insert(v.begin() + (position-1), value);
            cout << value << " inserted at position " << position << "!\n";
        }

        void insertElementAtEnd(int value){ //2
            v.push_back(value);
            cout << value << " inserted" << "!\n";
        }

        void insertElementAtStart(int value){ //3
            v.insert(v.begin(), value);
            cout << value << " inserted" << "!\n";
        }

        int firstElement(){ //4
            if(v.empty()){
                cout << "Vector Empty!" << endl;
                return -999;
            }
            return v.front();
        }

        int lastElement(){ //5
            if(v.empty()){
                cout << "Vector Empty!" << endl;
                return -999;
            }
            return v.back();
        }

        void removeFirstElement(){ //6
            if(v.empty()){
                cout << "Vector Empty!" << endl;
                return;
            }
            v.erase(v.begin());
        }

        void removeLastElement(){ //7
            if(v.empty()){
                cout << "Vector Empty!" << endl;
                return;
            }
            v.pop_back();
        }

        void removeElement(int value){ //8
            if(v.empty()){
                cout << "Vector Empty!" << endl;
                return;
            }
            else{
                if(find(v.begin(), v.end(), value)==v.end()){
                    cout << value << " is not present in the vector.\n";
                    return;
                }
                else{
                    auto it=find(v.begin(), v.end(), value);
                    v.erase(it);
                }
            }
        }

        void clearVector(){
            v.clear();
        }

        void sizeCapacity(){
            cout << "Size: " << v.size() << "    Capacity: " << v.capacity() << endl; 
        }
};

int main(){
    vectorOperations vec;
    int choice, position, value;
    do{
        vec.vectorStatus();
        cout << "What Operation would you like to perform?" << endl;
        cout << "1. Insert an element at a given position." << "\n"
             << "2. Insert an element at the end." << "\n"
             << "3. Insert an element at the start." << "\n"
             << "4. Print the first element of the vector." << "\n"
             << "5. Print the last element of the vector." << "\n"
             << "6. Delete the first element." << "\n"
             << "7. Delete the last element." << "\n"
             << "8. Remove an element from the vector." << "\n"
             << "9. Delete all elements of vector." << "\n"
             << "10. Get current SIZE and CAPACITY of the vector." << "\n"
             << "11. Exit." << "\n";
        cout << "Choose an operation: ";
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "Enter the position for the element: ";
                cin >> position;
                cout << "Enter the value for the element: ";
                cin >> value;
                vec.insertElement(position, value);
                break;
            }
            case 2:{
                cout << "Enter the value for the element: ";
                cin >> value;
                vec.insertElementAtEnd(value);
                break;
            }
            case 3:{
                cout << "Enter the value for the element: ";
                cin >> value;
                vec.insertElementAtStart(value);
                break;
            }
            case 4:{
                int element=vec.firstElement();
                if(element==-999)
                    cout << "Vector Empty!\n";
                else
                    cout << "First Element: " << element << "\n";
                break;
            }
            case 5:{
                int element=vec.lastElement();
                if(element==-999)
                    cout << "Vector Empty!\n";
                else
                    cout << "Last Element: " << element << "\n";
                break;
            }
            case 6:{
                vec.removeFirstElement();
                break;
            }
            case 7:{
                vec.removeLastElement();
                break;
            }
            case 8:{
                cout << "Enter the value to remove: ";
                cin >> value;
                vec.removeElement(value);
                break;
            }
            case 9:{
                vec.clearVector();
                break;
            }
            case 10:{
                vec.sizeCapacity();
                break;
            }
            case 11:{
                cout << "Session Terminated!" << endl;
                break;
            }
            default:{
                cout << "Invalid Operation. Try Again!" << endl;
            }
        }
    }while(choice!=11);
}