#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define LD long double 
#define VT vector 
#define PB push_back
#define AR array
#define ALL(_in) (_in).begin(), (_in).end()
#define EACH(x, a) for (auto& x: a)

// ==================================== // 

VT<string> sols;

void get_all_combs(VT<char> chars, string curr) {
    if (chars.size() == 0) {
        string iter;
        EACH(iter,sols)
            if(iter==curr)
                return;
        sols.PB(curr);
    } else {
        for (int i = 0 ; i < chars.size(); i++) {
            char target=chars[i];
            VT<char> new_chars = chars; 
            new_chars.erase(new_chars.begin() + i); 
            get_all_combs( new_chars, curr + target);
        }
    }
}

int main() {
    string in;
    cin >> in;
    sort(ALL(in));
    VT<char> chars;
    char a;
    EACH(a,in) 
        chars.PB(a);

    get_all_combs(chars, "");

    cout << sols.size() << endl;
    string b;
    EACH(b, sols) {
       cout << b << endl;
    }
    cout << endl;
    return 0;
}
