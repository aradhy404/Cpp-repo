#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c[20];
    float d;
    double e;
   scanf("%d %ld %s %f %lf",&a, &b, c, &d, &e);
   printf("%d\n%ld\n%s\n%.3f \n%.9lf",a,b,c,d,e);
   
    return 0;
}
