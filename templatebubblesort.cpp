#ifndef SETUP_COLLAPSER_BECAUSE_I_DONT_LIKE_LOOKING_AT_IT
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double 
#define vt vector 
#define pb push_back
#define ar array
#define all(_in) (_in).begin(), (_in).end()
#define each(x, a) for (auto& x: a)
#endif
// ==================================== // 


int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vt<int> a(n);

    each(x,a)   
        cin>>x;
   
    for (int i=0;i<n;i++)
        for(int j=0; j<n-i- 1;j++) {
            bool swapped=false;
            if(a[j] > a[j+1]) {
                swap(a[j],a[j+1]); 
                swapped=true;    
            }
            if(!swapped)
                break;
        }

    each(x,a)
        cout<<x<<" "<<endl;

    cout << endl; return 0;
}
