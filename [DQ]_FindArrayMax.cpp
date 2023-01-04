#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int max(int a[], int l, int r){
    if(l == r){return a[l];}

    int mid = (l+r)/2;
    int first = max(a,l,mid);
    int second = max(a,mid+1, r);

    if(first > second){return first;}
    else{return second;}

}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    cout << "the maximum element is " << max(arr, 0, n-1);
}
