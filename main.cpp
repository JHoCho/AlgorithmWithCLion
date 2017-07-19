#include <iostream>
#include <stdio.h>
#include <vector>//1 번문제 준규가 가지고 있는 동전은 N종류이고 각각의 동전을 매우 많이 가지고 있다.
// 동전을 "적절히 사용해서 그 가치의 합을 K로 만드려고 한다 이때 필요한 동전 개수의 최소 값을 구하는 프로그램을 작성하여라"
// N개의 줄에 동전의 가치 A[i] 가 오름차순으로 주어진다 이때 1<=A[i]<=1000000 , A[i]=1, i>=2인 경우에 A[i]는 A[i-1]의 배수
//11047
using namespace std;
int main() {


    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans = 0;
    for (int i=n-1; i>=0;i--){
        ans += k/a[i];
        k %= a[i];
    }
    cout << ans<<'\n';
    return 0;
}