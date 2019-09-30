def drone(S: int, T: int)->int:
    d = {'L': 0, 'R': 0, 'U': 0, 'D': 0, '?': 0}
    for c in S:
        d[c] += 1

    dx = abs(d['L']-d['R'])
    dy = abs(d['U']-d['D'])

    if T == 1:
        # ???
        return dx + dy + d['?']

    min_d = dx + dy - d['?']
    if min_d >= 0:
        return min_d

    # '?' ????????
    # - '?' ?????????????(LR ???? UD)????
    # 0 ?????
    # - '?' ?????????????????????????
    # 1 ???
    return (-min_d) % 2


if __name__ == "__main__":
    S = input()
    T = int(input())
    ans = drone(S, T)
    print(ans)