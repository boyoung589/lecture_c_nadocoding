#include <stdio.h>
int main(void){
  /** 
   * 정수형 변수에 대한 예제
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);
  **/

  /** 
   * 실수형 변수에 대한 예제
    float f = 46.5f; // 실수형 변수 값 작성시 숫자 뒤에 f붙이기
    printf("%f\n", f); // 46.500000
    printf("%.2f\n", f); //46.50

    double d = 4.428;   // 실수를 나타내는 또다른 자료형
    printf("%lf\n", d); // 4.428000
    printf("%.2lf\n", d); // 4.43
  **/

  /**
   * 상수형 변수에 대한 예제
    const int Year = 2000; //  상수를 나타내기 위해선 정수표현 앞에 const 붙이기 => 변경불가
    printf("%d\n", Year);
    // Year = 2001; 상수 => 변경불가
  */

  /**
   * printf
   * 연산
    int add = 3 + 7;
    printf("3 + 7 = %d\n", add); // 3 + 7 = 10
    printf("%d + %d = %d\n", 3, 7, 3 + 7); // 3 + 7 = 13
  */
  /**
   * scanf
   * 키보드 값을 받아서 저장
    int input;
    printf("값을 입력하세요 : "); // 값을 입력하세요 : 
    scanf("%d", &input); // &변수명: 변수명이 정의된 곳에 입력값을 받겠다는 뜻
    printf("입력값 : %d\n", input); // 입력값 : 2000
  */

  /**
   * scanf
   * 여러값 받기
    int one, two, three;
    printf("3개의 정수값을 입력하시오 : ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫번째 값 : %d\n", one);
    printf("두번째 값 : %d\n", two);
    printf("세번째 값 : %d\n", three);
    
    3개의 정수값을 입력하시오 : 100 200 300
    첫번째 값 : 100
    두번째 값 : 200
    세번째 값 : 300
  */

  /**
   * 문자(한글자), 문자열(한글자 이상)
   * 문자
    char c = 'A';
    printf("%c\n", c);
   * 문자열
    char str[256]; //256자리 문자열 만듦
    scanf("%s", str, sizeof(str)); //문자열 입력시 %s, 문자열입력 받을 시 & 없이, 256보다 큰 수 들어오지 않게 사이즈 지정
    printf("%s\n", str);
   */

  /**프로젝트
   * 경찰관이 범죄자의 정보를 입수(조서작성)
   * 이름? 나이? 몸무게? 키? 범죄명?
   */
  char name[256];
  printf("이름이 뭐에요? ");
  scanf("%s", name, sizeof(name));

  int age;
  printf("몇살이에요? ");
  scanf("%d", &age);

  float weight;
  printf("몸무게가 몇 kg 이에요? ");
  scanf("%f", &weight);

  double height;
  printf("키는 몇 cm 에요? ");
  scanf("%lf", &height);

  char what[256];
  printf("범죄명이 뭐에요? ");
  scanf("%s", what, sizeof(what));

  //조서내용 출력
  printf("\n\n--- 범죄자 정보 ---\n\n");
  printf("이름? %s\n", name);
  printf("나이? %d\n", age);
  printf("몸무게? %.1f\n", weight);
  printf("키? %.1lf\n", height);
  printf("범죄명? %s\n", what);

  return 0;
}