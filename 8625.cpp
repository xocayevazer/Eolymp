#include <bits/stdc++.h>
using namespace std;

int main(){

int n; 
cin >> n; 
int a = n / 100;
int b = (n / 10) % 10;
int c = n % 10;
 if((a > b && b > c) || (a > b && b==c) || (a==b && b==c) || (a==b && a > c)) {
     cout << a << b;
 }
 if((a>b && c>b) || (a==b&&c>b)) {
     cout<<a<<c;
 }
 if((b>a&& c>a) || (b>a&&a==c) || ((b>a && a>c))) {
     cout<<b<<c;
 }
}
