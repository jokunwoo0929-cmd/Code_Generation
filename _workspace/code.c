#include <stdio.h>

/* 팩토리얼 함수 - for 반복문 사용, 음수 입력 체크 포함 */
int factorial(int n) {
    /* [규칙 B] 음수 입력 체크 */
    if (n < 0) return -1;

    /* [규칙 A] 재귀 대신 for 반복문 사용 */
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);

    int result = factorial(n);
    if (result == -1) {
        printf("오류: 음수 입력은 허용되지 않습니다.\n");
    } else {
        printf("%d! = %d\n", n, result);
    }
    return 0;
}
