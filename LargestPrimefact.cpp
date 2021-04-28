#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 int main()
 {
     unsigned int t;
     cin>>t;
     while(t--)
     {
         unsigned long long x;
         cin>>x;
         for(unsigned long long i=2;i*i<=x;i++)
         while(x%i==0&&x!=i)
         x/=i;
         cout<<x<<endl;
     }
     return 0;
 }
