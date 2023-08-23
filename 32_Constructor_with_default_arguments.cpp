#include <bits/stdc++.h>

using namespace std;

class Simple{
    int a, b, c, d;
    public:
        Simple(int p, int q, int r = 5, int s = 10){
            a = p;
            b = q;
            c = r;
            d = s;
        }
        void display(void){
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
};

int main(){
    Simple s1(1,2,3,4), s2(1,2,3), s3(1,2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}