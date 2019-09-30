MOD = 10 ** 9 + 7

H, W, A, B = map(int, input().split())

# inv[k]: k???
N = H - 1
inv = [0] * (N + 1)
inv[1] = 1
for k in range(2, N + 1):
    inv[k] = (-(MOD // k) * inv[MOD % k]) % MOD

# C1s[i]: ?????????????B??????i?????????????????
n1 = B - 1
C1s = [0] * (H - A)
C1s[0] = 1
for r in range(1, H - A):
    C1s[r] = (C1s[r - 1] * (n1 + r) * inv[r]) % MOD

# C2s[i]: ????(B+1)??????i??????????????????????????
n2 = W - B - 1
C2s = [0] * H
C2s[0] = 1
for r in range(1, H):
    C2s[r] = (C2s[r - 1] * (n2 + r) * inv[r]) % MOD

ans = 0
for i in range(H - A):
    ans += (C1s[i] * C2s[- 1 - i]) % MOD
    ans %= MOD

print(ans)