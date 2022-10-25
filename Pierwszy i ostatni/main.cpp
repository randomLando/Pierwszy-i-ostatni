#include <iostream>
using namespace std;

int main() {
int x, n;
int p = - 1, o = - 1;
int w;

cin >> n >> x;

for( int i = 1; i <= n; ++i )
{
    cin >> w;

    if( w == x )
    {
        if( p == - 1 ) { p = i; }
        o = i;
    }
}

cout << p << " " << o;
}
