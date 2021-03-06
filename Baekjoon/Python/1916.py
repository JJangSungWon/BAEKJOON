import sys
from heapq import heappush, heappop


def dijkstra(start, end):
    heap = []
    heappush(heap, (0, start))  # 시작지점 힙에 추가
    distance = [sys.maxsize] * (N + 1)  # 각 정점사이의 거리 무한대로 초기화
    distance[start] = 0  # 시작 지점 0으로 초기화

    while heap:
        weight, index = heappop(heap)
        for e, c in bus[index]:
            if distance[e] > weight + c:
                distance[e] = weight + c
                heappush(heap, (weight + c, e))
    return distance[end]


if __name__ == "__main__":
    # input
    N = int(input())  # 도시의 개수
    M = int(input())  # 버스의 개수
    bus = [[] for _ in range(N + 1)]
    for _ in range(M):
        start, end, cost = map(int, input().split())  # 출발지, 도착지, 비용
        bus[start].append((end, cost))
    start, end = map(int, input().split())  # 찾고자하는 비용 경로(출발지, 도착지)

    # print
    print(dijkstra(start, end))
