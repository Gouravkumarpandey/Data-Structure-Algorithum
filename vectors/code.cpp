#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> vec ={ };

vec.push_back(10);
vec.push_back(28);
vec.push_back(31);
cout<< vec<< endl;
cout<< "size" <<vec.size() <<endl;
    for(char val : vec){
        cout<< val << endl;

    }

    return 0;
}
