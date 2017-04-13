#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){

int number;
int total=0;

ifstream in("file.in",ios::in);

in>>number;
vector<int> cow(number);
int i;
for(i=0;i<number;++i)
in>>cow[i];


sort(cow.begin(),cow.end());


for(i=number-1;i>number-6;--i)
total=total+cow[i];
cout<<total<<endl;
}

