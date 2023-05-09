#include<bits/stdc++.h>
using namespace std;

int main(){
    int D, M, Y, D1, M1, Y1, md, dd, yd, di;
    cin>>D>>M>>Y>>D1>>M1>>Y1;
     md = M - M1;
    dd = D - D1;
    yd = Y - Y1; 
    if (Y - Y1 > 0) {
    di = 10000;
} else if (M - M1 > 0 && yd == 0) {
    di = md * 500;
} else if (D - D1 > 0 && yd == 0) {
    di = dd * 15;
} else {
    di = 0;
}
 
    cout<<di<<endl;
    return 0;
}
