import math


def init(start, end, node):
    if start == end:
        tree[node] = start  # 인덱스 값을 대입한다.
    else:
        mid = (start + end) // 2
        init(start, mid, node * 2)
        init(mid + 1, end, node * 2 + 1)
        if num[tree[node * 2]] <= num[tree[node * 2 + 1]]:
            tree[node] = tree[node * 2]
        else:
            tree[node] = tree[node * 2 + 1]


def update(start, end, node, index):
    if index < start or index > end or start == end:
        return
    else:
        mid = (start + end) // 2
        update(start, mid, node * 2, index)
        update(mid + 1, end, node * 2 + 1, index)
        if num[tree[node * 2]] <= num[tree[node * 2 + 1]]:
            tree[node] = tree[node * 2]
        else:
            tree[node] = tree[node * 2 + 1]


if __name__ == "__main__":
    n = int(input())  # 수열의 크기
    num = [0] + list(map(int, input().split()))  # 수열 입력받기
    m = int(input())  # 쿼리의 개수
    tree = [0] * int(math.pow(2, math.ceil(math.log2(n) + 1)) - 1)

    # 세그먼트 트리 초기 구성
    init(1, n, 1)

    for _ in range(m):
        q = list(map(int, input().split()))
        if q[0] == 2:
            print(tree[1])
        else:  # 업데이트
            num[q[1]] = q[2]

            # 값 업데이트
            update(1, n, 1, q[1])