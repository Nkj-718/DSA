#include <bits/stdc++.h>
using namespace std;

class U_Set{
    unordered_set<int> s;
    public:
        void Insert(int element){
            s.insert(element);
        }

        void Remove(int element){
            if(s.contains(element)){
                s.erase(element);
            }
            else{
                cout << element << " not found.\n";
            }
        }

        void Search(int element){
            if(s.count(element))
                cout << element << " exists.\n";
            else
                cout << element << " does not exist.\n";
        }

        void Count(){
            cout << "There are currently " << s.size() << " elements present in the unordered set.\n";
        }
        
        void printSet(){
            cout << "Set: ";
            for(auto i = s.begin(); i!=s.end(); i++){
                cout << *i << "    ";
            }
            cout << "\n";
        } 

        void clearSet(){
            s.clear();
        }

        void firstElement(){
            if(s.begin()!=s.end())
                cout << "First Element: " << *(s.begin()) <<"\n";
            else
                cout << "No Element present!" << endl;
        }

};

class Choices{
    public:
        U_Set u;
        int element;
        Choices() { choiceMenu(); }

        void choiceMenu(){
            int choice=0;
                while(choice!=8){
                    cout << "What Operation do you want to perform on the unordered set?" << "\n";
                    cout << "1. Insert an element" << endl
                         << "2. Remove an element" << endl
                         << "3. Search for an element" << endl
                         << "4. Count the number of elements" << endl
                         << "5. Print the set" << endl
                         << "6. Clear the set" << endl
                         << "7. Print the 1st element" << endl
                         << "8. Exit" << endl;
                    cout << "Choice: ";
                    cin >> choice;
                    operationSelection(choice);
                }
        }

        void operationSelection(int choice){
            switch(choice){
                case 1:
                    {
                        cout << "Enter element: ";
                        cin >> element;
                        u.Insert(element);
                        cout << "Done!" << endl;
                        return;
                    }
                case 2:
                    {
                        cout << "Enter element: ";
                        cin >> element;
                        u.Remove(element);
                        cout << "Done!" << endl;
                        return;
                    }
                case 3:
                    {
                        cout << "Enter element: ";
                        cin >> element;
                        u.Search(element);
                        return;
                    }
                case 4:
                    {
                        u.Count();
                        return;
                    }
                case 5:
                    {
                        u.printSet();
                        return;
                    }
                case 6:
                    {
                        u.clearSet();
                        cout << "Done!" << endl;
                        return;
                    }
                case 7:
                    {
                        u.firstElement();
                        return;
                    }
                case 8: 
                    {
                        cout << "Session Terminated!" << endl;
                        return;
                    }
                default:
                    {
                        cout << "Invalid Choice! Try Again!" << endl;
                        return;
                    }
            }
        }
};

int main(){
    Choices c;
}