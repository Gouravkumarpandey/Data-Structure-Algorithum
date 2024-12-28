#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <char> vec ={ 'a','b','c','d','e','f'};
cout<< "size = " << vec.size() << endl;
cout<< "first = " <<vec.front() <<endl;
cout<< "last =" << vec.back() << endl;
cout<< "at 2 = "<< vec.at(3) << endl;
cout<< "empty =" << vec.empty()<< endl;
vec.push_back('g');
vec.pop_back( );
    for(char val : vec){
        cout<< val << endl;

    }

    return 0;
}
