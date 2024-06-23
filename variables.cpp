#include<iostream>
using namespace std;

int main()
{
    int a=69;
    cout << a <<endl;

    char b ='b';
    cout << b <<endl; 

    bool  c = 1;
    cout << c <<endl;

    float d = 1.2;
    cout << d <<endl;

    double e = 1.23;
    cout << e << endl;

    int size= sizeof(e);
    cout<<"size of double is : " << size <<endl;

    /*typecastsing*/
    int tc = 'a';
    cout << tc <<endl;  

    /*and or not*/

    int x=5;
    int y=6;
    bool bl1 = (x<y && x==y);
    bool bl2 = (x<y || x==y);
    bool bl3 = (x != y);

    cout << bl1 << bl2 << bl3 <<endl;



}