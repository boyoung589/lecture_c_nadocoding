#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
  /** 조건/ 분기
   * if else
      //버스 타는 것을 가정, 학생 / 일반인으로 구분 (일반인: 20세 이상)
      int age;
      printf("몇살입니까? : ");
      scanf("%d", &age);
      if (age >= 20)
        printf("일반인입니다.");
      else
        printf("학생입니다.");
   * if / elseif / else
      // 초등학생(8-13)  / 중학생(14-16) / 고등학생(17-19)로 나누면?
      int age;
      printf("몇살입니까?");
      scanf("%d", &age);
      if(age<8)
        printf("미취학아동입니다.\n");
      else if (age >= 8 && age < 14)
        printf("초등학생입니다.\n");
      else if (age >= 14 && age < 17)
        printf("중학생입니다.\n"); 
      else if (age >= 17 && age < 19)
        printf("고등학생입니다.\n");
      else
        printf("일반인입니다.\n");
   *    
   * break 특정 조건을 만났을 때 반복문 탈출 
      // 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를 합니다.
      for (int i = 1; i <= 30; i++){
        if(i>=6){
          printf("나머지 학생 집에 가세요\n");
          break;
        }
        printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
      }
   * 
   * continue
      //1번부터 30번까지 있는 반에서 7번 학생은 아파서 조퇴
      //7번을 제외한 6번부터 10번 학생은 조별 발표를 하세요

      //continue 미사용
      for (int i = 1; i <= 30; i++){
        if(i>=6 && i<=10){
          if(i == 7){
            printf("%d번 학생은 결석입니다\n", i);
          }
          printf("%d 번 학생은 조별 발표를 준비하세요\n", i);
        }
      }
      // 6 번 학생은 조별 발표를 준비하세요
      // 7번 학생은 결석입니다
      // 7 번 학생은 조별 발표를 준비하세요
      // 8 번 학생은 조별 발표를 준비하세요
      // 9 번 학생은 조별 발표를 준비하세요
      // 10 번 학생은 조별 발표를 준비하세요

      //continue 사용시
      for (int i = 1; i <= 30; i++){
        if(i>=6 && i<=10){
          if(i == 7){
            printf("%d번 학생은 결석입니다\n", i);
            continue;
          }
          printf("%d 번 학생은 조별 발표를 준비하세요\n", i);
        }
      }
        // 6 번 학생은 조별 발표를 준비하세요
        // 7번 학생은 결석입니다
        // 8 번 학생은 조별 발표를 준비하세요
        // 9 번 학생은 조별 발표를 준비하세요
        // 10 번 학생은 조별 발표를 준비하세요
   * 
   * switch
      //가위: 0 바위: 1 보: 2

      //if else 사용 
      srand(time(NULL)); //난수 초기화 => 매번 랜덤수를 받아오기 위한 방법
      int i = rand() % 3; // 0-2 랜덤 수 반환
      if(i == 0){
        printf("가위\n");
      } else if(i == 1){
        printf("바위\n");
      } else if(i==2){
        printf("보\n");
      } else {
        printf("몰라\n");
      }
   * 
      //switch 사용 
      // break 문 사용 안할 시 해당 케이스 이후의 모든 케이스 실행 
      srand(time(NULL)); //난수 초기화 => 매번 랜덤수를 받아오기 위한 방법
      int i = rand() % 3; // 0-2 랜덤 수 반환
      switch (i)
      {
      case 0:printf("가위\n");
      case 1:printf("바위\n");
      case 2:printf("보\n");
      default: printf("몰라\n"); 
      }
      
      출력
        가위
        바위
        보
        몰라
      
      //break 문 사용
      srand(time(NULL)); //난수 초기화 => 매번 랜덤수를 받아오기 위한 방법
      int i = rand() % 3; // 0-2 랜덤 수 반환
      switch (i)
      {
      case 0:
        printf("가위\n");
        break;
      case 1:
        printf("바위\n");
        break;
      case 2:
        printf("보\n");
        break;
      
      default: printf("몰라\n"); 
        break;
      }
      //출력 보 
   */
  // up and down
  srand(time(NULL));
  int num = rand() % 100 + 1; //1~100 사이의 수
  printf("숫자 : %d\n", num);
  int answer = 0; //정답 
  int chance = 5; //기회

  while(chance > 0){
    printf("남은 기회 %d 번", chance--);
    printf("숫자를 맞춰보세요 (1~100) : ");
    scanf("%d", &answer);

    if(answer > num){
      printf("DOWN\n\n");
    }
    else if(answer < num){
      printf("UP\n\n");
    }
    else if(answer == num){
      printf("정답입니다.\n\n");
      break;
    }
    else{
      printf("알수없는 오류가 발생했어요\n\n");
    }

    if(chance == 0){
      printf("모든 기회를 다 사용하셨네요 실패했습니다.\n\n");
      break;
    }
  }

  return 0; 
}