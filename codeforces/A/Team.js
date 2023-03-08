// Problem: A. Team
// Contest: Codeforces - Codeforces Round 143 (Div. 2)
// URL: https://codeforces.com/problemset/problem/231/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

r=readline,n=r(),p=parseInt
answer=0;
red=(a,b) => p(a)+p(b)
for(x=0;x<n;x++) {
    v=r().split(' ').reduce(red)
    if(v>1)answer++
}
print(answer)