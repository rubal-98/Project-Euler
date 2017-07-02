//
//  Project Euler #2: Even Fibonacci numbers.cpp
//
//
//  Created by SAVREEN KAUR on 02/07/17.
//
//

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
int main(){
    int t,i,j,l,m,s;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        j=1,l=2,m=0,s=0;
        for(i=1;j<n;i++){

            if(j%2==0){
                m=m+j;
            }

            s=j;
            j=l;
            l=l+s;


        }
        cout<<m<<endl;
    }

    return 0;
}
