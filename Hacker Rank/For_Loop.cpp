#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        if(i==1)
         cout << "one"<<endl;
        else if(i==2)
          cout<<  "two"<< endl;
        else if(i==3)
          cout<<  "three"<< endl;
        else if(i==4)
          cout<<  "four"<< endl;
        else if(i==5)
          cout<<  "five"<< endl;
        else if(i==6)
          cout<<  "six"<< endl;
        else if(i==7)
          cout<<  "seven"<< endl;
        else if(i==8)
          cout<<  "eight"<< endl;
        else if(i==9)
          cout<<  "nine"<< endl;              
        else if(i>9)
        {
            if(i%2==0)cout<<"even"<<endl;
            else
             cout<< "odd"<<endl;
        }
    }
    return 0;
}
