
#include <iostream>
#include <vector> 
using namespace std;

class HashTable {
  int tableSize;
  vector<int> table; 
  vector<bool> occupied;

    int hashFunction(int key) {
        return key % tableSize;
    }
    
    int secondHashFunction(int key) {
        return 7 - (key % 7);
    }

    public : 

    HashTable(int size) {
        tableSize = size;
        table.assign(size, -1);    
       occupied.assign(size, false);
     }
     
     
     void insert(int key, string method) {
        int h1 = hashFunction(key);
        int index ;

        for(int i = 0 ; i < tableSize; i++){
            if(method == "linear probing"){
                index =(h1+1)% tableSize;
            }
            else if(method == "quadratic probing"){
                index = (h1 + i*i) % tableSize;
            }
            else if(method == "double hashing"){
                int h2 = secondHashFunction(key);
                index = (h1 + i*h2) % tableSize;
            }

            if(!occupied[index]) 
            table[index] = key;
             occupied[index] = true;
             return;      
              }
               cout << "Table is full, cannot insert " << key << endl;
    }


    bool search(int key , string method ){
         int h1 = hashFunction(key);
        int index ;

        for(int i = 0 ; i < tableSize; i++){
            if(method == "linear probing"){
                index =(h1+1)% tableSize;
            }
            else if(method == "quadratic probing"){
                index = (h1 + i*i) % tableSize;
            }
            else if(method == "double hashing"){
                int h2 = secondHashFunction(key);
                index = (h1 + i*h2) % tableSize;
            }

            if(!occupied[index]) 
            return false;
            if(table[index] == key)
            return true;
        }    
        return false ;
    }

 void display() {
        for (int i = 0; i < tableSize; i++) {
            cout << i << " --> ";
            if (occupied[i])
                cout << table[i];
            cout << endl;
        }
    }

};

int main() {
    HashTable ht(10);


    string method = "linear";

    ht.insert(10, method );
    ht.insert(20, method);
    ht.insert(30, method);
    ht.insert(25, method);
    ht.display();


    return 0;
}

