# polynomial_addition
##순차리스트를 기반으로 한 다항식 덧셈 함수

###addPoly.c
[7행] 다항식 a와 다항식 b으 차수를 비교하여 더 큰 차수를 다항식 c의 차수로 설정한다
[8행] 현재 처리중인 항이 차수 이내인지를 확인한다
[9행~20행] 처리중인 항의 a 차수와 b 차수를 비교하여 다항식 c를 채워나간다

###main.c
[6행] 다항식 a는 차수가 3이고 계수가 {4, 3, 5, 0}이다
[7행] 다항식 b는 차수가 4이고 계수가 {3, 1, 0, 2, 1}이다
