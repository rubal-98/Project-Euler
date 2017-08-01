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
    int t,j;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        int z=2;
        while(z<=sqrt(n)){
            if(n%z==0){
                j=z;
                n=n/z;
            }
            else{
                z++;
            }
        }
        if(n>1){
            cout<<n<<endl;
        }
        
    }
    return 0;
}
