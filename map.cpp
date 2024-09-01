#include <bits/stdc++.h>
using namespace std;


int main(){
    map<string, int> marksMap;
    marksMap["Tathagata"] = 98;
    marksMap["Harish"] = 90;
    marksMap["Tuban"] = 91;

    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter ++){
        cout<<iter->first<<" "<< iter->second<<endl;
    }
    return 0;
}