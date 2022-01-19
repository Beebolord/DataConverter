#include <iostream>
#include <iterator>
#include <map>
#include <math.h>
using namespace std;
class MyClass {
    public: void myMethod();
    public: map<char,double> hexoTabling();
    public: void hexoCompiler(map<char,double>, char singleChar);
};

void MyClass::myMethod() {
    cout<<"hello world";
}

map<char,double> MyClass::hexoTabling() {
    map<char,double> hexoTable;
    hexoTable.insert(pair<char, double>('A',10.00));
    hexoTable.insert(pair<char, double>('B', 11.00));
    hexoTable.insert(pair<char, double>('C', 12.00));
    hexoTable.insert(pair<char, double>('D', 13.00));
    hexoTable.insert(pair<char, double>('E', 14.00));
    hexoTable.insert(pair<char, double>('F', 15.00));
    return hexoTable;
}

void MyClass::hexoCompiler(map<char,double> hexoTable, char singleChar) {
    map<char, double> :: iterator itr;

    for(itr = hexoTable.begin(); itr!=hexoTable.end(); itr++) {
        double lazyCounter = 1;
        lazyCounter++;
        if (itr->first == singleChar) {
            cout << pow(itr->second, lazyCounter);
        }
    }
}


int main(int argc, char *argv[]) {


    map<char, int> :: iterator itr;
    /*
    for(itr = hexoTable.begin(); itr != hexoTable.end(); itr++) {
        cout << '\t' << itr->first << '\t'<<itr->second << '\n';
    }
    cout << endl;
    */
    /*
    char singleChar = 'B';
    for(itr = hexoTable.begin(); itr!=hexoTable.end(); itr++) {
        double lazyCounter = 1; lazyCounter++;
        if(itr->first == singleChar) {
            cout<< pow(itr -> second,lazyCounter);
        }
    }
    return 0;
     */
    MyClass myObj;
    //myObj.myMethod();
    myObj.hexoTabling();
    myObj.hexoCompiler(myObj.hexoTabling(), 'D');
}
