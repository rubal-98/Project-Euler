//
//  Project Euler #6: Sum square difference.cpp
//
//
//  Created by SAVREEN KAUR on 27/07/17.
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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long int n,j=0,l=0;
        cin >> n;
        for(int i=1;i<=n;i++){
            j=j+i;
            l=l+pow(i,2);

        }
        j=j*j;
        cout<<j-l<<endl;
    }
    return 0;
}
