#include <iostream>
using namespace std;


void quick_sort(int q[], int l, int r){
    if(l >= r)
        return ;
    int i = l - 1, j = r + 1, x = q[(l + r) >> 1];
    while(i < j){
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j)
            swap(q[i], q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}


int main(){
    int q[100005];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> q[i];
    quick_sort(q, 0, n - 1);
    for(int i = 0; i < n; i++){
        if(i != 0)
            cout << ' ';
        cout << q[i];
    }
    cout << endl;
    return 0;
}
