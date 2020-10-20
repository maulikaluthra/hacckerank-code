#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int, int, int, int);
int max_of_four(int a, int b, int c, int d) {
    return max(max(a,b),max(c,d));        //max is an inbuilt function
}


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


