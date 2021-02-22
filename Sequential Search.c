#include<stdio.h>
#define LEN 5

int sequentialSearch(int* ar, int key) {
    unsigned int i;
    // 자료의 처음부터 끝까지 반복
    for (i = 0; i < LEN; i++) {
        // 숫자가 존재할 경우
        if (ar[i] == key) {
            return i;     // key의 인덱스 반환
        }
    }
    return -1;
}

int main() {
    int tc, key, arr[LEN] = { 0, };     // 테스트 케이스 수, 찾는 숫자, 배열
    scanf_s("%d", &tc);   		// 테스트 케이스 수 입력
    for (int t=0; t < tc; t++) {
        for (int i=0; i < LEN; i++)
            scanf_s("%d", &arr[i]);        // 배열 입력
        scanf_s("%d", &key);              // 찾을 숫자 입력
        int k = sequentialSearch(arr, key);
        printf("%d %d", tc, k);
    }
}