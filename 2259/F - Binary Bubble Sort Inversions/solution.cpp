#include <bits/stdc++.h>
using namespace std;
 
static char ibuf[1 << 16];
int ilen = 0, ipos = 0;
inline int gc() {
    if (ipos == ilen) { ilen = (int)fread(ibuf, 1, sizeof(ibuf), stdin); ipos = 0; if (ilen <= 0) return -1; }
    return ibuf[ipos++];
}
inline int readInt() {
    int c = gc(); while (c != '-' && (c < '0' || c > '9')) c = gc();
    int sg = 1; if (c == '-') { sg = -1; c = gc(); }
    int x = 0; while (c >= '0' && c <= '9') { x = x * 10 + (c - '0'); c = gc(); }
    return x * sg;
}
 
int main() {
    int t = readInt();
    string out;
    vector<int> a; vector<char> s;
    vector<int> bv, bc;                       // block value / block count
    while (t--) {
        int n = readInt();
        a.resize(n);
        for (int i = 0; i < n; i++) a[i] = readInt();
        s.resize(n);
        { int c = gc(); while (c != '0' && c != '1') c = gc();
          for (int i = 0; i < n; i++) { s[i] = (char)c; c = gc(); } }
 
        bv.assign(3 * n + 10, 0); bc.assign(3 * n + 10, 0);
        int head = n + 2, tail = n + 2;
        for (int i = 0; i < n; i++) {
            if (tail > head && bv[tail - 1] == a[i]) bc[tail - 1]++;
            else { bv[tail] = a[i]; bc[tail] = 1; tail++; }
        }
 
        long long Z = 0, O = 0, inv = 0;
        for (int i = n - 1; i >= 0; i--) { if (a[i] == 0) Z++; else { O++; inv += Z; } }
 
        out += to_string(inv);
        for (int i = 0; i < n; i++) {
            if (inv > 0) {
                if (s[i] == '1') {                          // bubble
                    int idx; long long L;
                    if (bv[head] == 1) { idx = head; L = 0; }
                    else { idx = head + 1; L = bc[head]; }
                    inv -= Z - L;
                    if (--bc[idx] == 0) {
                        if (idx == head) head++;
                        else { bc[head + 2] += bc[head]; head += 2; }   // merge 0-blocks
                    }
                    if (bv[tail - 1] == 1) bc[tail - 1]++;
                    else { bv[tail] = 1; bc[tail] = 1; tail++; }
                } else {                                    // reverse bubble
                    int idx; long long R;
                    if (bv[tail - 1] == 0) { idx = tail - 1; R = 0; }
                    else { idx = tail - 2; R = bc[tail - 1]; }
                    inv -= O - R;
                    if (--bc[idx] == 0) {
                        if (idx == tail - 1) tail--;
                        else { bc[tail - 3] += bc[tail - 1]; tail -= 2; } // merge 1-blocks
                    }
                    if (bv[head] == 0) bc[head]++;
                    else { head--; bv[head] = 0; bc[head] = 1; }
                }
            }
            out += ' '; out += to_string(inv);
        }
        out += '
';
    }
    fwrite(out.data(), 1, out.size(), stdout);
    return 0;
}