#include <iostream>
#include <string>
#include <cctype>
#include <functional>
#include <algorithm>
#include <fstream>
#include<sstream>
#include <vector>
#include <windows.h>
#include<map>
#include<set>
#include<iterator>
using namespace std;

void showSet(set<int> s){
   set<int> ::iterator it;
  for(it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
  }
    cout<<"\n********************************\n";
}
void showMap(  map<int,string> m){
 map<int,string>::iterator it;
  for(it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
  }
    cout<<"********************************\n";
}

int main(){
    //set
      set<int> s;
      s.insert(50);
      s.insert(10);
      s.insert(30);
      s.insert(20);
      s.insert(50);
      s.insert(40);
      cout<<"size of set:"<<s.size()<<endl;
      showSet(s);
      s.erase(50);
      showSet(s);
      s.erase(s.begin(),s.find(20));
      showSet(s);
      set<int> s2(s.begin(),s.end());
      showSet(s2);

    //map
      map<int,string> m;
      m.insert(pair<int,string>(1,"basel"));
      m.insert(pair<int,string>(2,"amjad"));
      m.insert(pair<int,string>(5,"saqer"));
      m.insert(pair<int,string>(3,"tariq"));
      map<int,string>::iterator it;
      cout<<"size of map:"<<m.size()<<endl;
      showMap(m);
      m.erase(3);
      showMap(m);
      map<int,string> m2(m.begin(),m.end());
     showMap(m2);
return 0;
};
