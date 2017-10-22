#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,num,sum=0; 
    scanf("%d",&n); 
    for (int i = 0; i < n; i++){
        scanf("%d",&num);  
        sum += num; 
    }
    printf("%d\n",sum); 
    return 0;
}
