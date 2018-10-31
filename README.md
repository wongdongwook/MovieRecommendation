# MovieRecommendation
Movie Recommendation using C language

Python 언어를 배우고 C언어를 복습하는 설계 과목에서
'머신러닝을 이용한 영화 추천프로그램'을 개발

간단 개발 내용

1. 영화 추천을 위한 가상 시뮬레이션 환경 구축
(유저)
초기 30명 생성하고 영화 100편에 대해 평점을 매김
좀 더 현실감을 부여하기 위해 4초 시간이 흐르면 3명씩 생성됨
이 때 성비를 유지하며 생성하고 나이 비가 10대 20%, 20대 30%, 30대 20% 40대 30% 유지되도록 생성.
또, 사람들은 평점 경향성이 있음. 자신이 선호하는 장르에는 상대적으로 높게 다른 장르보다 높게 평점을 매기도록 만ㄷ름
하루에 보고 평점을 매기는 영화 수가 각기 다름. 어떤 사람은 하루에 1편 어떤 사람은 하루에 3편

(영화) 
초기 50편 생성하고
7초 시간이 흐르면 4편씩 생성됨, 장르는 랜덤.
제목도 생성되는데 각 장르별 관련 단어10개씩 추려내어 
해당 장르 영화 생성시 그 해당 장르의 10개 단어 조합으로 제목을 생성.
쉽게 말해. 공포 영화가 생성된다면 공포느낌 나는 제목의 영화를 생성함

2. 추천의 종류

(1) 수동 모드 ( 조건 검색 )
- 선호 장르 내 BEST 평점 3위 영화 추천 
- 전체 BEST 평점 3위

(2) 자동 모드
- 나와 취향이 가장 비슷한 사람
유클라디안 거리 알고리즘을 이용하여 취향 유사도를 측정하여 추천

- 나와 취향이 가장 비슷한 집단
k-means 클러스터링 알고리즘 
하지만 영화는 2개가 아니라 100개이기 때문에
n차원에 대한 k means 클러스터링, 
즉 n-k means 클러스터링 알고리즘을 직접 구현해서
나와 가장 취향이 비슷한 집단을 찾고
그 집단 내의 평점 BEST 3를 추천함


 