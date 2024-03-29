#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define pob pop_back
#define fp first
#define sp second
#define mp make_pair
#define ins insert
#define uEdge(u, v) g[u].pb(v), g[v].pb(u)
#define uwEdge(u, v, w) g[u].pb({v, w}), g[v].pb({u, w})
#define dEdge(u, v) g[u].pb(v)
#define dwEdge(u, v, w) g[u].pb({v, w})
#define BOOST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define minHeap int, vector<int>, greater<int>

using namespace std;
typedef long long int lli;
typedef pair<int, int> pii;
vector<int> g[0];

lli gcd(lli a, lli b){
    if(b == 0) return a;
    a%=b;
    return gcd(b, a);
}

int main(){
    BOOST;
    int n;
    string inp;
    cin >> n;
    getline(cin, inp); //Get endline from buffer
    for(int i = 0; i < n; i++){
        getline(cin, inp);
        for(int j = 0; j < inp.length(); j++){
            if (inp[j]=='a'||inp[j]=='e'||inp[j]=='i'||inp[j]=='o'||inp[j]=='u') printf("%cp%c", inp[j], inp[j]);
            else printf("%c", inp[j]); 
        }
        printf("\r\n");
    }
    return 0;
}