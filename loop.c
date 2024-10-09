#include <stdio.h>
int main_loop(void){// 한 프로젝트 내에서 main 함수는 하나만!
  /**
   * ++
    int a = 10;
    printf("a는 %d\n", a);
    a++;
    printf("a는 %d\n", a);

    int b = 20;
    printf("b는 %d\n", ++b); // 선 계산 후 대입 => b + 1 후 출력 
    printf("b는 %d\n", b++); // 선 대입 후 계산 => 출력 후 b + 1
    printf("b는 %d\n", b);
   */
  /**
   * 반복문
   * for
   // for(선언; 조건; 증감){실행문}
   *  예
      for (int i = 1; i <= 10; i++){
        printf("hello world %d\n", i);
      }
   * while
    // while(조건에 해당하면 실행문 반복){실행문}
   * 예
      int i = 1;
      while (i <= 10){
        printf("hello world %d\n", i);
        i++;
      }
   * do while
    // do{실행문} while(조건)
   * 예
      int i = 1;
      do{
        printf("hello world %d\n", i);
        i++;
      } while (i <= 10);
   *
   */
  /**
   * 이중 반복문 => for문을 겹치는 것 
      for (int i = 1; i <= 3; i++){
        printf("첫 번째 반복문 : %d\n", i);
        for (int j = 1; j <= 5; j++){
          printf("    두 번째 반복문 : %d\n", j);
        }
      }
      * 첫 번째 반복문 : 1
          두 번째 반복문 : 1
          두 번째 반복문 : 2
          두 번째 반복문 : 3
          두 번째 반복문 : 4
          두 번째 반복문 : 5
        첫 번째 반복문 : 2
          두 번째 반복문 : 1
          두 번째 반복문 : 2
          두 번째 반복문 : 3
          두 번째 반복문 : 4
          두 번째 반복문 : 5
        첫 번째 반복문 : 3
          두 번째 반복문 : 1
          두 번째 반복문 : 2
          두 번째 반복문 : 3
          두 번째 반복문 : 4
          두 번째 반복문 : 5
   */
  /**
   * 구구단 만들기 
    for (int i = 2; i <= 9; i++){
      printf("%d단 계산\n", i);
      for (int j = 1; j <= 9; j++)
      {
        printf(" %d x %d = %d\n", i, j, i*j);
      }
    }
   */
  /**
   * 별 트리 출력 
    for (int i = 0; i < 5; i++){
      for (int j = 0; j <= i; j++) 
      {
        printf("*");
      }
      printf("\n");
    }
    
    // *
    // **
    // ***
    // ****
    // *****
    
   */
  /**
   * 거꾸로 별 => 오른쪽 정렬된 별 
    for (int i = 0; i < 5; i++){
      for (int j = i; j < 5-1; j++){
        printf(" ");
      };
      for (int k = 0; k <= i; k++){
        printf("*");
      }
      printf("\n");
    }
    //     *
    //    **
    //   ***
    //  ****
    // *****
   */
  /**
   * 피라미드 쌓기 
   */
  int floor;
  printf("몇 층으로 쌓겠느냐?");
  scanf("%d", &floor);
  for (int i = 0; i < floor; i++){
    for (int j = i; j < floor - 1; j++){
      printf(" ");
    }
    for (int k = 0; k < 2*i+1; k++){
      printf("*");
    }
    printf("\n");
  }
    return 0;
}