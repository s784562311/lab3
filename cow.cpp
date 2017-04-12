#include<iostream>
#include<cstdlib>
#include<vector>
#include<fstream>
#include <algorithm>
using namespace std;

int main(){

   int number,weight,total;
   vector<int>cows;

   ifstream kin("file.in",ios::in);
   if(!kin) {
   cerr << "Failed opening" << endl;
   exit(1);
   }
   
   kin >> number ;
   for(int i=0;i<=number-1;++i){
   kin >> weight ;
   cows.push_back(weight);   
   }

   sort(cows.begin(),cows.end());

   total=cows[number-1] +cows[number-2] +cows[number-3] +cows[number-4] +cows[number-5];
   cout << total << endl; 

return 0;
}
