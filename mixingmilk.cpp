#include <iostream>
using namespace std;

int main() {

    array<int,3> c;
    array<int,3> m;
    
    cin >> c[0] >> m[0] >> c[1] >> m[1] >> c[2] >> m[2];

    int pourfrom=0,next=-99;


    for (int i = 0; i < 100; i++)
    {
        if (pourfrom != 2)
            next=pourfrom + 1;
        else 
            next = 0;

        while((m[next] != c[next]) && (m[pourfrom]>0)) {
            m[pourfrom]--;
            m[next]++;
        }

        pourfrom++;
        if(pourfrom==3)
            pourfrom=0;

         cout << m[0] << " " << m[1] << " " << m[2] << endl;
    
    }

}
