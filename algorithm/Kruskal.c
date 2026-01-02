//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int u;
//	int v;
//	int w;
//
//}Edge;
//
////冒泡排序：将权值从小到大排序
//void bubbleSort(Edge edges[], int m) {
//	for (int i = 0; i < m - 1; i++) {
//		for (int j = 0; j < m - 1 - i; j++) {
//			if (edges[j].w > edges[j + 1].w) {
//				Edge tmp = edges[j];
//				edges[j] = edges[j + 1];
//				edges[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int findRoot(int parent[], int x) {
//	while (parent[x] != x) {
//		x = parent[x];
//	}
//	return x;
//}
//
//void unionSet(int parent[], int a, int b) {
//	int ra = findRoot(parent, a);
//	int rb = findRoot(parent, b);
//	if (ra != rb) {
//		parent[rb] = ra;
//	}
//}
//
//int main(void) {
//	int n, m;	//n：顶点数, m：边数
//	scanf("%d%d", &n, &m);
//
//	Edge *edges = (Edge *)malloc(sizeof(Edge) * m);
//	int *parent = (int *)malloc(sizeof(int) * (n + 1));
//
//	//初始化并查集：每个点自己是自己的根
//	for (int i = 1; i <= n; i++) {
//		parent[i] = i;
//	}
//
//	for (int i = 0; i < m; i++) {
//		scanf("%d%d%d", &edges[i].u, &edges[i].v, &edges[i].w);
//	}
//
//	bubbleSort(edges, m);
//
//	int totalWeight = 0;
//	int usedEdges = 0;
//
//	for (int i = 0; i < m; i++) {
//		int u = edges[i].u;
//		int v = edges[i].v;
//		int w = edges[i].w;
//
//		if (findRoot(parent, u) != findRoot(parent, v)) {
//			unionSet(parent, u, v);
//			totalWeight += w;
//			usedEdges++;
//
//			if (usedEdges == n - 1) break;
//
//		}
//	}
//
//	printf("%d\n", totalWeight);
//
//	free(edges);
//	free(parent);
//	return 0;
//}