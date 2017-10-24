#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, cntpos = 0, cntneg = 0, cntz = 0,num;
    scanf("%d",&n); 
    for (int i = 0; i < n; i++){
        scanf("%d",&num); 
        if (num == 0) ++cntz;  
        else if (num < 0) ++cntneg; 
        else ++cntpos; 
    }
    double anspos = (double)cntpos/n; 
    double ansneg = (double)cntneg/n;  
    double ansz = (double)cntz/n;  
    printf("%.3lf\n%.3lf\n%.3lf\n",anspos,ansneg,ansz); 
    return 0;
}
