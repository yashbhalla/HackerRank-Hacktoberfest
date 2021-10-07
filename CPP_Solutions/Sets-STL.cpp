/* Problem link: https://www.hackerrank.com/challenges/cpp-sets/problem */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
      set<int> s;
      int n;
      cin>>n;
      
      for(int i=0; i<=n; i++){
          string query_input;
          int query_type, query_number;
          getline(cin, query_input);
          
          if(query_input.size() > 1) {
              istringstream ss(query_input);
              ss >> query_type >> query_number;
              
              switch(query_type){
                  case 1:
                      s.insert(query_number);
                      break;
                  case 2:
                      s.erase(query_number);
                      break;
                  case 3:
                      set<int>::iterator it = s.find(query_number);
                  
                  if(it == s.end()){
                      cout<< "No" << endl;
                  }else{
                      cout<< "Yes" << endl;
                  }
              }
          }
      }
    return 0;
}