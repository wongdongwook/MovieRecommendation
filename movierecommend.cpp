#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
#include<conio.h>
#include <math.h>

void gotoxy(int x, int y)
{
	COORD Pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

/* ============  ���� ���̽� ==========*/
void log_in_title(void);
void sign_up_page(void);
void sign_in_page(void);
void movie_recommend(void);
void normal_search(void);
void conditional_search(void);
void recommend_result(void);



void sign_in_page(void)//�α���
{
	Sleep(100);
	for (int i = 10; i < 32; i++)
	{
		gotoxy(i, 5);	printf("��");	gotoxy(i, 27);	printf("��");	gotoxy(i, 7);	printf("��");
	}
	for (int h = 9; h < 32; h++)
	{
		gotoxy(9, h - 4); printf("��");		gotoxy(32, h - 4); printf("��");
	}
	for (int l = 15; l < 26; l++)
	{
		gotoxy(l, 20); printf("��"); gotoxy(l, 23); printf("��");
	}
	for (int t = 20; t < 23; t++)
	{
		gotoxy(15, t); printf("��");	gotoxy(26, t); printf("��");
	}
	gotoxy(9, 5); printf("��");	gotoxy(9, 7); printf("��");	gotoxy(9, 27); printf("��");
	gotoxy(32, 5); printf("��");	gotoxy(32, 7); printf("��");	gotoxy(32, 27); printf("��");
	gotoxy(15, 20); printf("��");	gotoxy(26, 20); printf("��");	gotoxy(15, 23); printf("��");
	gotoxy(26, 23); printf("��");	gotoxy(10, 6); printf("��");	gotoxy(27, 6);  printf("2018/04/24");
	gotoxy(19, 6); printf("�α���");	gotoxy(15, 15); printf("���̵�: ");	gotoxy(15, 17); printf("��й�ȣ: ");
	gotoxy(19, 22); printf("�� �� ��");
	gotoxy(9, 29); printf("q : �ڷ�");

}
void log_in_title(void)//ó�� Ÿ��Ʋ ȭ��
{
	for (int i = 10; i < 32; i++)
	{
		gotoxy(i, 5);	printf("��"); gotoxy(i, 27);	printf("��"); gotoxy(i, 7);	printf("��");
	}
	for (int h = 9; h < 32; h++)
	{
		gotoxy(9, h - 4); printf("��");	gotoxy(32, h - 4); printf("��");
	}
	for (int j = 10; j < 15; j++)
	{
		gotoxy(j + 4, 18);	printf("��");	gotoxy(j + 13, 18);	printf("��");	gotoxy(j + 4, 22);	printf("��");
		gotoxy(j + 13, 22);	printf("��");
	}
	for (int k = 18; k < 23; k++)
	{
		gotoxy(13, k);	printf("��");	gotoxy(19, k);	printf("��");	gotoxy(22, k);	printf("��");
		gotoxy(28, k);	printf("��");
	}
	gotoxy(9, 5); printf("��"); gotoxy(9, 7); printf("��");	gotoxy(9, 27); printf("��");
	gotoxy(32, 5); printf("��"); gotoxy(32, 7); printf("��");	gotoxy(32, 27); printf("��");
	gotoxy(13, 18); printf("��");	gotoxy(19, 18); printf("��");	gotoxy(13, 22); printf("��");
	gotoxy(19, 22); printf("��");	gotoxy(22, 18); printf("��");	gotoxy(28, 18); printf("��");
	gotoxy(22, 22); printf("��");	gotoxy(28, 22); printf("��");	gotoxy(27, 6); //�ð� ��ǥ
	gotoxy(15, 10);	printf("���� ��ȭ ��õ ���α׷�");	gotoxy(14, 20); printf("��ȸ������"); gotoxy(23, 20); printf("�۷α���");

	gotoxy(10, 29);
	printf("ȸ�� ���� : t �α���: w");

}
void movie_recommend(void)//��ȭ��õ ���� ȭ��
{
	Sleep(100);
	for (int i = 10; i < 32; i++)
	{
		gotoxy(i, 5);	printf("��"); gotoxy(i, 7);	printf("��");	gotoxy(i, 27);	printf("��");
	}
	for (int h = 9; h < 32; h++)
	{
		gotoxy(9, h - 4); printf("��"); gotoxy(32, h - 4); printf("��");
	}
	for (int u = 11; u < 24; u++)
	{
		gotoxy(u, 8); printf("��"); gotoxy(u, 10); printf("��");
	}
	for (int k = 8; k < 10; k++)
	{
		gotoxy(11, k); printf("��"); gotoxy(24, k); printf("��");
	}
	for (int d = 11; d < 18; d++)
	{
		gotoxy(d, 23); printf("��"); gotoxy(d, 25); printf("��");
	}
	for (int t = 23; t < 26; t++)
	{
		gotoxy(11, t); printf("��"); gotoxy(18, t); printf("��");
	}
	for (int p = 23; p < 30; p++)
	{
		gotoxy(p, 23); printf("��"); gotoxy(p, 25); printf("��");
	}
	for (int q = 23; q < 26; q++)
	{
		gotoxy(23, q); printf("��"); gotoxy(30, q); printf("��");
	}
	gotoxy(23, 23); printf("��"); gotoxy(23, 25); printf("��");
	gotoxy(30, 23); printf("��"); gotoxy(30, 25); printf("��");
	gotoxy(11, 23); printf("��"); gotoxy(11, 25); printf("��");
	gotoxy(18, 23); printf("��"); gotoxy(18, 25); printf("��");
	gotoxy(11, 8); printf("��"); gotoxy(11, 10); printf("��");
	gotoxy(24, 8); printf("��"); gotoxy(24, 10); printf("��");
	gotoxy(9, 5); printf("��"); gotoxy(9, 7); printf("��"); gotoxy(9, 27); printf("��");
	gotoxy(32, 5); printf("��"); gotoxy(32, 7); printf("��"); gotoxy(32, 27); printf("��");
	gotoxy(10, 6); printf("��"); gotoxy(27, 6);  printf("2018/04/24");
	gotoxy(19, 6); printf("��ȭ��õ"); gotoxy(14, 9); printf("�ǽð� �α� ��ȭ");
	gotoxy(13, 11); printf("1��: ���극��"); gotoxy(13, 12); printf("2��: ����ū");
	gotoxy(13, 13); printf("3��: ������ ��NEW��"); gotoxy(13, 14); printf("4��: ������");
	gotoxy(13, 24); printf("�ڵ���õ"); gotoxy(25, 24); printf("������õ");
	gotoxy(10, 29); printf("�ڵ���õ :p ������õ :o ");
}
void conditional_search(void)//���ǰ˻� ȭ��
{
	for (int i = 10; i < 32; i++)
	{
		gotoxy(i, 5);	printf("��"); gotoxy(i, 7);	printf("��");	gotoxy(i, 27);	printf("��");
	}
	for (int h = 9; h < 32; h++)
	{
		gotoxy(9, h - 4); printf("��"); gotoxy(32, h - 4); printf("��");
	}
	for (int u = 11; u < 24; u++)
	{
		gotoxy(u, 8); printf("��"); gotoxy(u, 10); printf("��");
	}
	for (int k = 8; k < 10; k++)
	{
		gotoxy(11, k); printf("��"); gotoxy(24, k); printf("��");
	}
	for (int l = 15; l < 26; l++)
	{
		gotoxy(l, 24); printf("��");	gotoxy(l, 26); printf("��");
	}
	for (int t = 24; t < 26; t++)
	{
		gotoxy(15, t); printf("��");	gotoxy(26, t); printf("��");
	}
	gotoxy(11, 8); printf("��"); gotoxy(11, 10); printf("��");
	gotoxy(24, 8); printf("��"); gotoxy(24, 10); printf("��");
	gotoxy(9, 5); printf("��"); gotoxy(9, 7);  printf("��"); gotoxy(9, 27); printf("��");
	gotoxy(32, 5); printf("��"); gotoxy(32, 7);  printf("��"); gotoxy(32, 27); printf("��");
	gotoxy(15, 24); printf("��"); gotoxy(26, 24); printf("��");
	gotoxy(15, 26); printf("��"); gotoxy(26, 26); printf("��");
	gotoxy(10, 6); printf("��"); gotoxy(27, 6); printf("2018/04/24"); gotoxy(19, 6); printf("��õ����");
	gotoxy(12, 9); printf("���ϴ� ��ȣ�� �Է��ϼ���");
	gotoxy(11, 11); printf("��ȣ �帣(1) "); gotoxy(11, 13); printf("���� ���� ���� ��ȭ(2) "); gotoxy(11, 15); printf("����� ���ɴ�(3) ");
	gotoxy(11, 17); printf("����(4) "); gotoxy(11, 19);
}

void sturcture(void) {


	for (int i = 10; i < 32; i++)
	{
		gotoxy(i, 5);	printf("��"); gotoxy(i, 27);	printf("��"); gotoxy(i, 7);	printf("��");
	}
	for (int h = 9; h < 32; h++)
	{
		gotoxy(9, h - 4); printf("��");	gotoxy(32, h - 4); printf("��");
	}


	gotoxy(9, 5); printf("��"); gotoxy(9, 7); printf("��");	gotoxy(9, 27); printf("��");
	gotoxy(32, 5); printf("��"); gotoxy(32, 7); printf("��");	gotoxy(32, 27); printf("��");

}//��� �Լ�


void recommend_result(void)//��õ��� ȭ��
{
	for (int i = 10; i < 32; i++)
	{
		gotoxy(i, 5);	printf("��"); gotoxy(i, 7);	printf("��");	gotoxy(i, 27);	printf("��");
	}
	for (int h = 9; h < 32; h++)
	{
		gotoxy(9, h - 4); printf("��"); gotoxy(32, h - 4); printf("��");
	}
	gotoxy(9, 5); printf("��"); gotoxy(9, 7);  printf("��"); gotoxy(9, 27); printf("��");
	gotoxy(32, 5); printf("��"); gotoxy(32, 7);  printf("��"); gotoxy(32, 27); printf("��");
	gotoxy(10, 6); printf("��"); gotoxy(19, 6); printf("��õ����"); gotoxy(27, 6); printf("2018/04/24");
	gotoxy(13, 10);  printf("��ȭ ��õ ���");
	gotoxy(12, 12); printf("1."); gotoxy(12, 14); printf("2."); gotoxy(12, 16); printf("3."); gotoxy(12, 18); printf("4.");
}

//��ȭ ����ü
typedef struct { //��ȭ ����ü

	int moveid;  //��ȭ ��ȣ
	float userrate = 0; //������ ����
	int flag = 0; //������ ������1 �Ⱥ����� 0
	int genrenum = 0;
	int totalcount = 0; // �� ��ȭ�� �� ������ ��
	int count = 0;
	const char *gnerename;
	const char *movie_name1;
	const char *movie_name2;
}movie;

//���� ����ü
typedef struct //������
{
	int pwd = 0;
	float tendency = 0; //���絵
	int userId; // ���̵�
	int age; //����
	int favorite_genre;//�����ϴ��帣 ��ȣ
	int watching_number = 0;//��û ��ȭ ����
	int clusternum = 7;
	int commonnum = 0;//���� �������� �� ��ȭ ��
	movie movie1[100];


}user;

/*=================����1 Ȯ�� ������ �ǰ��Ͼ� ���� ���� ===========
10������ 20% 20�� 30% 30�� 30% 40�� 10% 50���̻� 10% =============*/

int generate_age(int userlist[], int userlist_length) {

	int result = rand() % 80 + 1;
	int total_count = 0;
	float count10 = 0; float count20 = 0; float count30 = 0;
	float count40 = 0; float count50 = 0;

	for (int i = 0; i < userlist_length; i++) {

		if (userlist[i] < 20) { //10��
			count10 += 1;
		}
		else if (20 <= userlist[i] && userlist[i]< 30) {//20��
			count20 += 1;

		}
		else if (30 <= userlist[i] && userlist[i] < 40) { //30��
			count30 += 1;

		}
		else if (40 <= userlist[i] && userlist[i]< 50) {//40��
			count40 += 1;
		}
		else if (50 <= userlist[i]) {//50��
			count50 += 1;

		}
	}

	total_count = count10 + count20 + count30 + count40 + count50;

	if (count10 * 100 / total_count < 20) {

		result = rand() % 20 + 1; //10��
	}

	if ((count20 * 100 / total_count) < (float)30) {

		result = rand() % 10 + 20; //20��
	}

	if ((count30 * 100 / total_count) <(float)30) {

		result = rand() % 10 + 30; //30��
	}

	if ((count40 * 100 / total_count) <(float)10) {

		result = rand() % 10 + 40; //40��
	}

	if ((count50 * 100 / total_count) <(float)10) {

		result = rand() % 30 + 50; //50~80
	}

	return result;
}





/*��õ- ��ü ���� */
float* total_recommend(float arr[], int index1) {

	float sort[100] = { 0, };
	float temp = 0;
	int indextemp = 0;
	int index[100] = { 0, };

	float result[10] = { 0, };

	for (int i = 0; i < index1; i++) {
		index[i] = i;
		sort[i] = arr[i];
	}
	for (int i = 0; i < index1; i++) {

		for (int j = i + 1; j < index1; j++) {

			if (sort[i] < sort[j]) {

				temp = sort[j];
				sort[j] = sort[i];
				sort[i] = temp;

				indextemp = index[j];
				index[j] = index[i];
				index[i] = indextemp;
			}

		}
	}

	for (int i = 0; i < 5; i++) {

		result[i] = (float)index[i];
		result[i + 5] = sort[i];
	}

	return result;
}

/*��õ - ��ȣ �帣*/

float* favorite_recommend(movie movielist[], int index1, int my_genre) {

	float userrate[100];
	for (int j = 0; j < index1; j++) {
		if (movielist[j].genrenum == my_genre) { //���� ���� �����ϴ� �帣�� ��ȭ�� �帣�� ����
			userrate[j] = movielist[j].userrate / movielist[j].count;
		}
		else {
			userrate[j] = 0;
		}
	}

	float sort[100] = { 0, };
	float temp = 0;
	int indextemp = 0;
	int index[150] = { 0, };

	float result1[10] = { 0, };

	for (int i = 0; i < index1; i++) {
		index[i] = i;
		sort[i] = userrate[i];
	}

	for (int i = 0; i < index1; i++) {

		for (int j = i + 1; j < index1; j++) {

			if (sort[i] < sort[j]) {

				temp = sort[j];
				sort[j] = sort[i];
				sort[i] = temp;

				indextemp = index[j];
				index[j] = index[i];
				index[i] = indextemp;
			}

		}
	}

	for (int i = 0; i < 5; i++) {

		result1[i] = (float)index[i];
		result1[i + 5] = sort[i];

	}

	return result1;


}


/*=================Ȯ�������� ����==================*/

int probability_create(int n, int probability, int k) {

	// probability_create( 2, 30, k) -->1~k������ �� �߿��� 2�� 30%Ȯ���� ��Ÿ����.
	int create = 0;

	int arr[100] = { 0, };
	for (int i = 0; i < probability; i++)
	{
		arr[i] = n;
	}
	for (int i = probability; i < 100; i++) {

		arr[i] = rand() % k + 1;

		while (arr[i] == n) {
			arr[i] = rand() % k + 1;
		}
	}
	return arr[rand() % 100];
}

//�ʱ� Ŭ�����͸�
int* vectors100_clustering7(user user1[], movie movie1[], user me, int index, int index1) { //100���� 7�� Ŭ������ //50(index1)�� ���� ���� �ű� 30(index)�� ���Ͽ�..



	double cluster1[100] = { 0, };
	double cluster2[100] = { 0, };
	double cluster3[100] = { 0, };
	double cluster4[100] = { 0, };
	double cluster5[100] = { 0, };
	double cluster6[100] = { 0, };
	double cluster7[100] = { 0, };
	int numcluster[7] = { 0, };//�� Ŭ�����ʹ� ����
	int pastcluster[7] = { 0, }; //������ ���� ����  ��
	int count_num[7] = { 0, };
	double distance[7] = { 0, };
	int tempindex[7] = { 0,1,2,3,4,5,6 };
	int temp_i = 0;
	float temp_f = 0;
	for (int i = 0; i < index1; i++) { //�ʱⰪ �Ҵ�
		cluster1[i] = (double)user1[0].movie1[i].userrate;
		cluster2[i] = (double)user1[1].movie1[i].userrate;
		cluster3[i] = (double)user1[2].movie1[i].userrate;
		cluster4[i] = (double)user1[3].movie1[i].userrate;
		cluster5[i] = (double)user1[4].movie1[i].userrate;
		cluster6[i] = (double)user1[5].movie1[i].userrate;
		cluster7[i] = (double)user1[6].movie1[i].userrate;
	}
	user1[index + 1] = me;
	do {
		for (int i = 0; i < 7; i++) {
			pastcluster[i] = numcluster[i];
		}


		for (int i = 0; i < index + 1; i++) { //index+1 : ���� userlist + �� ������ '��'�� �߰�
			for (int j = 0; j < index1; j++) {
				distance[0] += pow((cluster1[j] - user1[i].movie1[j].userrate), 2);
				distance[1] += pow((cluster2[j] - user1[i].movie1[j].userrate), 2);
				distance[2] += pow((cluster3[j] - user1[i].movie1[j].userrate), 2);
				distance[3] += pow((cluster4[j] - user1[i].movie1[j].userrate), 2);
				distance[4] += pow((cluster5[j] - user1[i].movie1[j].userrate), 2);
				distance[5] += pow((cluster6[j] - user1[i].movie1[j].userrate), 2);
				distance[6] += pow((cluster7[j] - user1[i].movie1[j].userrate), 2);

			}
			for (int l = 0; l < 7; l++) {			//7�� �� �ؼ� ����ū �ε��� ��ȯ => userlist[i]�� Ŭ�����ͳѹ�

				for (int p = 1; p < 7; p++) {
					if (distance[l] > distance[p]) { //���� �����Ŵ� 0�� tem
						temp_f = distance[l];
						distance[l] = distance[p];
						distance[p] = temp_f;

						temp_i = tempindex[l];
						tempindex[l] = tempindex[p];
						tempindex[p] = temp_i;

					}
				}
			}


			user1[i].clusternum = tempindex[0];
			numcluster[tempindex[0]] += 1;
			for (int l = 0; l < 7; l++) {			//distance,tempindex�� �ʱ�ȭ
				distance[l] = 0;
				tempindex[l] = l;
			}

		}


		//Ŭ������ ���� Ŭ������ ���� ��հ�����.
		// 0 �� Ŭ������ ��� ��.
		for (int i = 0; i < 30; i++) {
			if (user1[i].clusternum == 0) {
				count_num[0] += 1;
				for (int j = 0; j < 50; j++) {
					cluster1[j] += user1[i].movie1[j].userrate;

				}
			}
			else if (user1[i].clusternum == 1) {
				count_num[1] += 1;
				for (int j = 0; j < 50; j++) {
					cluster2[j] += user1[i].movie1[j].userrate;

				}
			}
			else if (user1[i].clusternum == 2) {
				count_num[2] += 1;
				for (int j = 0; j < 50; j++) {
					cluster3[j] += user1[i].movie1[j].userrate;

				}
			}
			else if (user1[i].clusternum == 3) {
				count_num[3] += 1;
				for (int j = 0; j < 50; j++) {
					cluster4[j] += user1[i].movie1[j].userrate;

				}
			}
			else if (user1[i].clusternum == 4) {
				count_num[4] += 1;
				for (int j = 0; j < 50; j++) {
					cluster5[j] += user1[i].movie1[j].userrate;

				}
			}
			else if (user1[i].clusternum == 5) {
				count_num[5] += 1;
				for (int j = 0; j < 50; j++) {
					cluster6[j] += user1[i].movie1[j].userrate;

				}
			}
			else if (user1[i].clusternum == 6) {
				count_num[6] += 1;
				for (int j = 0; j < 50; j++) {
					cluster7[j] += user1[i].movie1[j].userrate;

				}
			}

		}

		for (int j = 0; j < 50; j++) {
			cluster1[j] = cluster1[j] / (count_num[0] + 1);
			cluster2[j] = cluster2[j] / (count_num[1] + 1);
			cluster3[j] = cluster3[j] / (count_num[2] + 1);
			cluster4[j] = cluster4[j] / (count_num[3] + 1);
			cluster5[j] = cluster5[j] / (count_num[4] + 1);
			cluster6[j] = cluster6[j] / (count_num[5] + 1);
			cluster7[j] = cluster7[j] / (count_num[6] + 1);
		}

		//���ѷ��� if (Ŭ�������� ���� ��ȭ X)

	} while (pastcluster[0] == numcluster[0] && pastcluster[1] == numcluster[1] && pastcluster[2] == numcluster[2] && pastcluster[3] == numcluster[3] &&
		pastcluster[4] == numcluster[4] && pastcluster[5] == numcluster[5] && pastcluster[6] == numcluster[6])

		;
	printf("Ŭ������ ����\n");
	for (int i = 0; i < 7; i++) {
		printf("%d :%d��\n",i+1 , numcluster[i]);
	}


	int returnarr1[100] = { 0, };
	for (int i = 0; i < 100; i++) {
		returnarr1[i] = user1[i].clusternum;

	}

	return returnarr1; //Ŭ������ �ѹ� �ű� �迭 ����
}


/*��õ- Ŭ������(��ü��) */
float* recommend_cluster(user user1[], int mynum, int index, int index1) {

	double temprate[100] = { 0, };
	int tempnum[100] = { 0, };
	int tempinde[100] = { 0, };

	for (int i = 0; i < index; i++) {
		tempinde[i] = i;
		if (user1[i].clusternum == mynum) {

			for (int k = 0; k < index1; k++) {
				temprate[k] += user1[i].movie1[k].userrate;
				tempnum[k] += 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		if (tempnum[i] != 0) {
			temprate[i] = temprate[i] / tempnum[i];
		}
		else {
			temprate[i] = 0;
		}
	}

	//BEST 5�� ã��
	float return_cluster[10] = { 0, };

	float temp = 0;
	int indextemp = 0;
	for (int i = 0; i < index1; i++) {

		for (int j = i + 1; j < index1; j++) {

			if (temprate[i] < temprate[j]) {

				temp = temprate[j];
				temprate[j] = temprate[i];
				temprate[i] = temp;

				indextemp = tempinde[j];
				tempinde[j] = tempinde[i];
				tempinde[i] = indextemp;
			}

		}
	}

	for (int i = 0; i < 5; i++) {

		return_cluster[i] = (float)tempinde[i];
		return_cluster[i + 5] = temprate[i];

	}

	return return_cluster;
}


int main(void) {

	float *m;
	float *k;
	int *z;
	float *p; //���߿� ���� ...

	/*=================================   ��ȭ �̸� ���� ========================================*/
	const char *a0[] = { "bad","the","great","nice","super","one","about","beautiful","three","unpretty" };
	const char *a1[] = { "little","big","wonder","acorn","a tale of","hi","happy","white","astro","mini" };
	const char *a2[] = { "romantic","my","the","secret","loving","sweet","little","the","wonder","first" };
	const char *a3[] = { "red","the","missing","real","a","bloody","scary","forgotten","psyco","quiet" };
	const char *a4[] = { "dead","the","black","last","lost","the","dark","final","hidden","criminal" };
	const char *a5[] = { "the","a","neverending","the golden","the magic","fantastic","wonderful","animal","hundered","secret" };

	const char *b0[] = { "liar","boys","man","baby","happiness","hero","music","game","travel","star" };
	const char *b1[] = { "prince","dragon","legend","forest","cat","princess","farm","diary","snow","wizard" };
	const char *b2[] = { "holiday","love","summer","time","darling","letter","sunshine","name","dream","day" };
	const char *b3[] = { "life","night","minutes","christmas","day","house","silence","room","suicide","signal" };
	const char *b4[] = { "war","player","runner","driver","extreme","hour","staton","methos","city","race" };
	const char *b5[] = { "door","dream","knock","key","spell","wiched","play","eyes","island","space" };
	/*=== ��ȭ �帣 �̸� ==*/
	const char *genrename[6] = { "�ڹ̵�", "�ִϸ��̼�", "�θǽ����", "����", "�׼ǽ�����", "��Ÿ��" };

	user me;

	float total_mean[100] = { 0, };
	float total_rate[100] = { 0, };
	int arr[100];

	float temp = 0;//���߿� �ٲܶ� ��



	time_t t;
	struct tm* lt;
	t = time(NULL);
	lt = localtime(&t);
	int index = 30;
	int index1 = 50;
	//��ȭ 50�����
	movie movielist[100];
	for (int i = 0; i < 50; i++) {
		movielist[i].genrenum = rand() % 6;
		movielist[i].gnerename = (char*)genrename[movielist[i].genrenum];
		movielist[i].moveid = i;
		if (movielist[i].genrenum == 0) {
			movielist[i].movie_name1 = b0[rand() % 10];
		}
		else if (movielist[i].genrenum == 1) {
			movielist[i].movie_name1 = b1[rand() % 10];
		}
		else if (movielist[i].genrenum == 2) {
			movielist[i].movie_name1 = b2[rand() % 10];
		}
		else if (movielist[i].genrenum == 3)
		{
			movielist[i].movie_name1 = b3[rand() % 10];
		}
		else if (movielist[i].genrenum == 4)
		{
			movielist[i].movie_name1 = b4[rand() % 10];
		}
		else if (movielist[i].genrenum == 5)
		{
			movielist[i].movie_name1 = b5[rand() % 10];
		}


		if (movielist[i].genrenum == 0) {
			movielist[i].movie_name2 = a0[rand() % 10];
		}
		else if (movielist[i].genrenum == 1) {
			movielist[i].movie_name2 = a1[rand() % 10];
		}
		else if (movielist[i].genrenum == 2) {
			movielist[i].movie_name2 = a2[rand() % 10];
		}
		else if (movielist[i].genrenum == 3)
		{
			movielist[i].movie_name2 = a3[rand() % 10];
		}
		else if (movielist[i].genrenum == 4)
		{
			movielist[i].movie_name2 = a4[rand() % 10];
		}
		else if (movielist[i].genrenum == 5)
		{
			movielist[i].movie_name2 = a5[rand() % 10];
		}

	}

	//���� 100���� ������ �ű� 30�� ���� 
	user userlist[100];
	userlist[0].age = 0;
	for (int i = 0; i < 30; i++) {

		for (int j = 0; j < 100; j++) {
			arr[j] = userlist[j].age;
		}
		userlist[i].age = generate_age(arr, i + 1); //������ 1~80��

		userlist[i].favorite_genre = rand() % 6; //�帣 0~5���� ����
		userlist[i].userId = i;
		userlist[i].watching_number = 50;
		for (int j = 0; j<50; j++)
		{
			userlist[i].movie1[j].flag = 1;//������1
			userlist[i].movie1[j].moveid = j; //1~100 
			userlist[i].movie1[j].genrenum = movielist[j].genrenum;
			userlist[i].movie1[j].gnerename = movielist[j].gnerename;
			userlist[i].movie1[j].movie_name1 = movielist[j].movie_name1;
			userlist[i].movie1[j].movie_name2 = movielist[j].movie_name2;

			if (userlist[i].favorite_genre == userlist[i].movie1[j].genrenum) { //�ڱⰡ ���� ��ȣ�ϴ� �����ϴ� ��ȭ �帣�� ���ٸ� 5.0 �ٸ��� 3.0
				userlist[i].movie1[j].userrate = 4.5; 
				movielist[j].totalcount += 1;
				total_rate[j] += 5.0;
			}
			else {
				userlist[i].movie1[j].userrate = 2.8 + rand() % 3;
				movielist[j].totalcount += 1;
				total_rate[j] += userlist[i].movie1[j].userrate;


			}
		}
	}
	int zz = 0;
	int ke = 0;
	int j = 0;
	j = lt->tm_sec;
	int suc = 0;//�α��� ����

	int i_d = 0;
	int p_d = 0;

	while (1) {
		if (kbhit()) {
			/*���絵 ã���� ���� ����*/
			float temp11 = 100;//���� ����� ����� ���絵 �� ������ ����
			int indextemp = 0;//���� ����� ����� �������̵�
			float arrtem[3] = { 0, };
			int justcount = 0;
			int temp_movieid[3] = { 0, };
			int temp_index = 0;
			/*���絵 ã���� ���� ����*/
			int imgi = 0;
			/*===== Ŭ������ �κ� ==========*/
			int *z = vectors100_clustering7(userlist, movielist, me, index, index1);
			for (int i = 0; i < index; i++) {
				userlist[i].clusternum = z[i];
			}

			/*========Ŭ������ ��==========*/
			
			gotoxy(1, 1); //�ð� ��ǥ
			printf("%d/%d/%d/ %d:%d:%d��\n",
				lt->tm_year + 1900, lt->tm_mon + 1, lt->tm_mday,
				lt->tm_hour, lt->tm_min, lt->tm_sec++);



			if ((lt->tm_sec - j) % 4 == 0) {//4�ʴ� 3�� ����
				for (int i = index; i < 3 + index; i++) {

					userlist[i].age = generate_age(arr, i + 1); //������ 1~80��
					userlist[i].favorite_genre = rand() % 6 ; //�帣 1~7���� ����
					userlist[i].userId = i;
					userlist[i].watching_number = rand() % 4 + 1; //1~4��

					for (int j = 0; j < userlist[i].watching_number; j++) {

						userlist[i].movie1[j].moveid = rand() % (index1 - 1);
						userlist[i].movie1[j].genrenum = movielist[userlist[i].movie1[j].moveid].genrenum;
						userlist[i].movie1[j].flag = 1;
						userlist[i].movie1[j].genrenum = movielist[j].genrenum;
						userlist[i].movie1[j].gnerename = movielist[j].gnerename;
						userlist[i].movie1[j].movie_name1 = movielist[j].movie_name1;
						userlist[i].movie1[j].movie_name2 = movielist[j].movie_name2;


						if (userlist[i].movie1[j].genrenum == userlist[i].favorite_genre) {

							userlist[i].movie1[j].userrate = 5.0;
							movielist[j].totalcount += 1;
							total_rate[j] += 5.0;
						}
						else {

							userlist[i].movie1[j].userrate = rand() % 2 + 3.0;
							movielist[j].totalcount += 1;
							total_rate[j] += userlist[i].movie1[j].userrate;

						}

						gotoxy(1, j + 3);
					}
				}
				index += 3;
			}

			if ((lt->tm_sec - j) % 7 == 0) { //7�ʴ� 4�� ����

				for (int i = index1; i < 4 + index1; i++)
				{
					movielist[i].genrenum = rand() % 6;
					movielist[i].moveid = i;
					movielist[i].gnerename = (char*)genrename[movielist[i].genrenum];
					if (movielist[i].genrenum == 0) {
						movielist[i].movie_name1 = b0[rand() % 10];
					}
					else if (movielist[i].genrenum == 1) {
						movielist[i].movie_name1 = b1[rand() % 10];
					}
					else if (movielist[i].genrenum == 2) {
						movielist[i].movie_name1 = b2[rand() % 10];
					}
					else if (movielist[i].genrenum == 3)
					{
						movielist[i].movie_name1 = b3[rand() % 10];
					}
					else if (movielist[i].genrenum == 4)
					{
						movielist[i].movie_name1 = b4[rand() % 10];
					}
					else if (movielist[i].genrenum == 5)
					{
						movielist[i].movie_name1 = b5[rand() % 10];
					}


					if (movielist[i].genrenum == 0) {
						movielist[i].movie_name2 = a0[rand() % 10];
					}
					else if (movielist[i].genrenum == 1) {
						movielist[i].movie_name2 = a1[rand() % 10];
					}
					else if (movielist[i].genrenum == 2) {
						movielist[i].movie_name2 = a2[rand() % 10];
					}
					else if (movielist[i].genrenum == 3)
					{
						movielist[i].movie_name2 = a3[rand() % 10];
					}
					else if (movielist[i].genrenum == 4)
					{
						movielist[i].movie_name2 = a4[rand() % 10];
					}
					else if (movielist[i].genrenum == 5)
					{
						movielist[i].movie_name2 = a5[rand() % 10];
					}



				}

			}

			for (int j = 0; j < index1; j++) { //��ü ���� 
				total_mean[j] = total_rate[j] / movielist[j].totalcount;

			}

			if (suc == 0) {
				system("cls");

				log_in_title();

			}
			else {
				system("cls");

				movie_recommend();

			}


			char key = _getch();
			char key2;
			char key3;
			switch (key) {

			case 'w': //�α���
				gotoxy(23, 20); printf("�ܷα���");
				Sleep(100);
				do {

					Sleep(1000);
					system("cls");
					sign_in_page();
					key3 = _getch();
					if (key3 == 'q')
						break;

					gotoxy(20, 15);
					scanf_s("%d", &i_d);

					gotoxy(20, 17);
					scanf_s("%d", &p_d);

					if (i_d == me.userId&&p_d == me.pwd) {
						gotoxy(15, 19);
						printf(" �α��� ���� ");
						ke = 1;
					}
					else {
						gotoxy(15, 19);
						printf(" �α��� ����  �ٽ� �Է����ּ��� ");

					}
					if (ke == 1)
						break;
				} while (1);
				if (key3 == 'q')
					break;
				zz = 1;
				suc = 1;
				system("cls");
				printf("%d ���� �α��� �ϼ̽��ϴ� .", me.userId);

				break;
			case 'o'://�����˻� -���̷� �����ϴ� �帣�� ��ü���� ���� ����
				system("cls");
				conditional_search();
				gotoxy(18, 6);
				gotoxy(25, 30);

				key2 = _getch();
				switch (key2) {
				case'1':// ��ȣ �帣
					system("cls");
					sturcture();
					gotoxy(18, 6); printf("��õ ���");
					gotoxy(10, 29); printf("���� ��ȭ�� ��ȣ�� �Է� �� ������ �Ű��ּ��� q :����");
					/*========= �����ϴ� �帣�� BEST ��õ =========*/
					for (int i = 0; i < index; i++) { //�����ϴ� �帣 ���� �� ����
						for (int j = 0; j < index1; j++) {
							if (userlist[i].movie1[j].genrenum == me.favorite_genre) {
								movielist[j].userrate += userlist[i].movie1[j].userrate;
								movielist[j].count += 1;
							}
						}
					}
					m = favorite_recommend(movielist, index1, me.favorite_genre);

					for (int i = 0; i < 5; i++) {
						gotoxy(10, 9 + i);
						imgi = (int)m[i];
						printf("%d�� %s %s %s %f  \n", i + 1, (char*)movielist[imgi].gnerename, (char*)movielist[imgi].movie_name2, (char*)movielist[imgi].movie_name1, total_mean[imgi]);

					}/*========= �����ϴ� �帣�� ��õ =========*/

					do {
						int z = 0;
						char key1 = _getch();
						switch (key1) {
						case '1':
							gotoxy(28, 9);
							imgi = (int)m[0];
							scanf("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;
						case '2':
							gotoxy(28, 10);
							imgi = (int)m[1];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;

						case '3':
							gotoxy(28, 11);
							imgi = (int)m[2];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;

						case '4':
							gotoxy(28, 12);
							imgi = (int)m[3];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;

						case '5':
							gotoxy(28, 14);
							imgi = (int)m[4];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;


							continue;


						case 'q':
							z = 1;

							break;
						}
						if (z == 1)
							break;
					} while (1);
					gotoxy(1, 1); printf("���� �� ��ȭ�� : %d\n", me.watching_number);

					break;
				case'2': //��ü ����
					system("cls");
					sturcture();
					gotoxy(18, 6); printf("��õ ���");
					gotoxy(10, 29); printf("���� ��ȭ�� ������ �Ű��ּ��� q :����");

					/*============== ��ü ���� ��õ ========== */
					gotoxy(10, 13); printf("-���� ��ü ����  BEST 3 -");
					k = total_recommend(total_mean, index1);
					for (int i = 0; i < 5; i++) {
						gotoxy(10, 9 + i);						imgi = (int)k[i];
						printf("%d�� %s %s %s %f  \n", i + 1, (char*)movielist[imgi].gnerename, (char*)movielist[imgi].movie_name2, (char*)movielist[imgi].movie_name1, k[i + 5]);

					} /*=========== ��ü ���� ��õ ============*/

					do {
						int z = 0;
						char key1 = _getch();
						switch (key1) {
						case '1':
							gotoxy(28, 9);
							imgi = (int)k[0];
							scanf("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;
						case '2':
							gotoxy(28, 10);
							imgi = (int)k[1];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;

						case '3':
							gotoxy(28, 11);
							imgi = (int)k[2];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;

						case '4':
							gotoxy(28, 12);
							imgi = (int)k[3];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;

						case '5':
							gotoxy(28, 14);
							imgi = (int)k[4];
							scanf_s("%f", &me.movie1[imgi].userrate);
							me.movie1[imgi].flag = 1;
							me.watching_number += 1;

							continue;


						case 'q':
							z = 1;

							break;
						}
						if (z == 1)
							break;
					} while (1);
					system("cls");
				    gotoxy(1, 1); printf("���� �� ��ȭ�� : %d\n", me.watching_number);
					break;

				}
				break;

			case'p': //�ڵ��˻�
				system("cls");
				sturcture();
				/*================== ���絵 =====================*/

				for (int i = 0; i < index; i++) {
					for (int j = 0; j < 100; j++) {
						if (me.movie1[j].flag == 1 && me.movie1[j].flag == userlist[i].movie1[j].flag) //�������� �� ��ȭ
						{
							userlist[i].tendency += sqrt(pow((me.movie1[j].userrate - userlist[i].movie1[j].userrate), 2));
							userlist[i].commonnum += 1;
							if (userlist[i].commonnum == me.watching_number) { //�������� �� ��ȭ�� = ���� �� ��ȭ��
								if (temp11 > userlist[i].tendency / userlist[i].commonnum) {//���絵 ���� ����� ��� ã��
									temp11 = userlist[i].tendency / userlist[i].commonnum;
									indextemp = i;
								}
							}
						}
					}
				}

				for (int i = 0; i < 100; i++) {

					if (me.movie1[i].flag != userlist[indextemp].movie1[i].flag &&  userlist[indextemp].movie1[i].flag) //�������� ����ȭ�� ���� �Ⱥ���
					{//���߿��� best 3�� ã��
						justcount += 1;
						if (justcount == 0) {
							arrtem[0] = userlist[indextemp].movie1[i].userrate;
							temp_movieid[0] = i;
						}
						else if (justcount == 1) {
							arrtem[1] = userlist[indextemp].movie1[i].userrate;
							temp_movieid[1] = i;

						}
						else if (justcount == 2) {

							arrtem[2] = userlist[indextemp].movie1[i].userrate;
							temp_movieid[2] = i;

							for (int k = 0; k < 3; k++) {
								for (int s = k + 1; s < 3; s++) {
									if (arrtem[k] < arrtem[s]) {
										temp = arrtem[k];
										arrtem[k] = arrtem[s];
										arrtem[s] = temp;

										temp_index = temp_movieid[k];
										temp_movieid[k] = temp_movieid[s];
										temp_movieid[s] = temp_index;
									}

								}
							}
						}
						else {
							if (userlist[indextemp].movie1[i].userrate > arrtem[2]) {
								arrtem[2] = userlist[indextemp].movie1[i].userrate;
								for (int k = 0; k < 3; k++) {
									for (int s = k + 1; s < 3; s++) {
										if (arrtem[k] < arrtem[s]) {
											temp = arrtem[k];
											arrtem[k] = arrtem[s];
											arrtem[s] = temp;

											temp_index = temp_movieid[k];
											temp_movieid[k] = temp_movieid[s];
											temp_movieid[s] = temp_index;
										}

									}
								}
							}
						}
					}
				}
				gotoxy(10, 9);
				printf("���� ������ ���� ����� ����� ��õ ");
				for (int i = 0; i < 3; i++) {
					gotoxy(10, 11 + i);
					printf("%d�� %s %s %s %f  \n", i + 1, (char*)movielist[temp_movieid[i]].gnerename, (char*)movielist[temp_movieid[i]].movie_name2, (char*)movielist[temp_movieid[i]].movie_name1, arrtem[i], total_mean[temp_movieid[i]]);
				}

				/*====== Ŭ�����Ϳ� ���� ��õ ======= */


				/*===== Ŭ������ �κ� ==========*/
				z = vectors100_clustering7(userlist, movielist, me, index, index1);
				for (int i = 0; i < index; i++) {
					userlist[i].clusternum = z[i];
				}
				me.clusternum = z[index];
				/*========Ŭ������ ��==========*/

				printf("���� Ŭ������ : %d\n", me.clusternum);
				gotoxy(12, 14);
				printf("���� ������ ���� ����� ������ ��õ ");

				p = recommend_cluster(userlist, rand()%7, index, index1);
				for (int i = 0; i < 3; i++) {
					gotoxy(10, 15 + i);
					imgi = (int)p[i];
					printf("%d�� %s %s %s %f  \n", i + 4, movielist[imgi].gnerename, (char*)movielist[imgi].movie_name2, (char*)movielist[imgi].movie_name1, total_mean[imgi]);

				}
				gotoxy(10, 29); printf("���� ��ȭ�� ��ȣ�� �Է� �� ������ �Ű��ּ���  q :����");
				do {
					int z = 0;
					char key1 = _getch();
					switch (key1) {
					case '1':
						gotoxy(28, 11);
						imgi = temp_movieid[0];
						scanf("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;
					case '2':
						gotoxy(28, 12);
						imgi = temp_movieid[1];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '3':
						gotoxy(28, 13);
						imgi = temp_movieid[2];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '4':
						gotoxy(28, 15);
						imgi = (int)p[0];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '5':
						gotoxy(28, 16);
						imgi = (int)p[1];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;


						continue;

					case '6':
						gotoxy(28, 17);
						imgi = (int)p[2];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case 'q':
						z = 1;

						break;
					}
					if (z == 1)
						break;
				} while (1);
				gotoxy(0, 0);
				printf("���� �� ��ȭ�� : %d\n", me.watching_number);

				break;
			case 't': //ȸ������

				system("cls");
				log_in_title();

				gotoxy(14, 20); printf("��ȸ������");
				Sleep(100);
				system("cls");

				sturcture();
				gotoxy(10, 29);  printf("�ڹ̵� 0 �ִϸ��̼� 1 �θǽ����2 ����3  �׼ǽ�����4 ��Ÿ��5");

				gotoxy(18, 6); printf("ȸ�� ����");
				gotoxy(12, 8); printf("���̵� �Է� (������ ���ڷ� ): ");
				gotoxy(12, 10); printf("��й�ȣ �Է� : "); gotoxy(12, 12);
				printf("� �帣�� �����ϼ��� ??( 0~6) \n");
				gotoxy(12, 15); printf("���̰�? \n");
				gotoxy(12, 9); scanf("%d", &me.userId);
				gotoxy(12, 11); scanf("%d", &me.pwd); gotoxy(12, 13);
				scanf("%d", &me.favorite_genre);
				gotoxy(12, 16); scanf("%d", &me.age); printf("��õ�ϰڽ��ϴ� "); Sleep(100);
				system("cls");

				sturcture();
				gotoxy(18, 6); printf("��   õ");


				/*========= �����ϴ� �帣�� BEST ��õ =========*/
				for (int i = 0; i < index; i++) { //�����ϴ� �帣 ���� �� ����
					for (int j = 0; j < index1; j++) {
						if (userlist[i].movie1[j].genrenum == me.favorite_genre) {
							movielist[j].userrate += userlist[i].movie1[j].userrate;
							movielist[j].count += 1;
						}
					}
				}
				m = favorite_recommend(movielist, index1, me.favorite_genre);


				for (int i = 0; i < 4; i++) {
					gotoxy(10, 9 + i);
					imgi = (int)m[i];
					printf("%d�� %s %s %s %f  \n", i + 1, (char*)movielist[imgi].gnerename, (char*)movielist[imgi].movie_name2, (char*)movielist[imgi].movie_name1, total_mean[imgi]);
					gotoxy(10, 8);
					printf(" %s BEST4 ", (char*)movielist[imgi].gnerename);
				}/*========= �����ϴ� �帣�� ��õ =========*/


				 /*============== ��ü ���� ��õ ========== */
				gotoxy(10, 13); printf("������ ��ü ����  BEST 3 ");
				k = total_recommend(total_mean, index1);
				for (int i = 0; i < 3; i++) {
					gotoxy(10, 14 + i);
					imgi = (int)k[i];
					printf("%d�� %s %s %s %f  \n", i + 5, (char*)movielist[imgi].gnerename, (char*)movielist[imgi].movie_name2, (char*)movielist[imgi].movie_name1, k[i + 5]);

				} /*=========== ��ü ���� ��õ ============*/
				gotoxy(10, 29); printf("���� ��ȭ�� ��ȣ�� �Է� �� ������ �Ű��ּ��� q :���� ");
				do {
					int z = 0;
					char key1 = _getch();
					switch (key1) {
					case '1':
						gotoxy(28, 9);
						imgi = (int)m[0];
						scanf("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;
					case '2':
						gotoxy(28, 10);
						imgi = (int)m[1];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '3':
						gotoxy(28, 11);
						imgi = (int)m[2];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '4':
						gotoxy(28, 12);
						imgi = (int)m[3];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '5':
						gotoxy(28, 14);
						imgi = (int)k[0];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;


						continue;

					case '6':
						gotoxy(28, 15);
						imgi = (int)k[1];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '7':
						gotoxy(28, 16);

						imgi = (int)k[2];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;


						continue;
					case 'q':
						z = 1;

						break;
					}
					if (z == 1)
						break;
				} while (1);
				system("cls");
				sturcture();
				gotoxy(18, 6); printf("��   õ");
				gotoxy(1, 1); printf("���� �� ��ȭ �� : %d\n", me.watching_number);
				gotoxy(12, 8);


				/*================== ���絵 =====================*/

				for (int i = 0; i < index; i++) {
					for (int j = 0; j < 100; j++) {
						if (me.movie1[j].flag == 1 && me.movie1[j].flag == userlist[i].movie1[j].flag) //�������� �� ��ȭ
						{
							userlist[i].tendency += sqrt(pow((me.movie1[j].userrate - userlist[i].movie1[j].userrate), 2));
							userlist[i].commonnum += 1;
							if (userlist[i].commonnum == me.watching_number) { //�������� �� ��ȭ�� = ���� �� ��ȭ��
								if (temp11 > userlist[i].tendency / userlist[i].commonnum) {//���絵 ���� ����� ��� ã��
									temp11 = userlist[i].tendency / userlist[i].commonnum;
									indextemp = i;
								}
							}
						}
					}
				}

				for (int i = 0; i < 100; i++) {

					if (me.movie1[i].flag != userlist[indextemp].movie1[i].flag &&  userlist[indextemp].movie1[i].flag) //�������� ����ȭ�� ���� �Ⱥ���ã��
					{//���߿��� best 3�� ã��
						justcount += 1;
						if (justcount == 0) {
							arrtem[0] = userlist[indextemp].movie1[i].userrate;
							temp_movieid[0] = i;
						}
						else if (justcount == 1) {
							arrtem[1] = userlist[indextemp].movie1[i].userrate;
							temp_movieid[1] = i;

						}
						else if (justcount == 2) {

							arrtem[2] = userlist[indextemp].movie1[i].userrate;
							temp_movieid[2] = i;

							for (int k = 0; k < 3; k++) {
								for (int s = k + 1; s < 3; s++) {
									if (arrtem[k] < arrtem[s]) {
										temp = arrtem[k];
										arrtem[k] = arrtem[s];
										arrtem[s] = temp;

										temp_index = temp_movieid[k];
										temp_movieid[k] = temp_movieid[s];
										temp_movieid[s] = temp_index;
									}

								}
							}
						}
						else {
							if (userlist[indextemp].movie1[i].userrate > arrtem[2]) {
								arrtem[2] = userlist[indextemp].movie1[i].userrate;
								for (int k = 0; k < 3; k++) {
									for (int s = k + 1; s < 3; s++) {
										if (arrtem[k] < arrtem[s]) {
											temp = arrtem[k];
											arrtem[k] = arrtem[s];
											arrtem[s] = temp;

											temp_index = temp_movieid[k];
											temp_movieid[k] = temp_movieid[s];
											temp_movieid[s] = temp_index;
										}

									}
								}
							}
						}
					}
				}
				gotoxy(10, 9);
				printf("���� ������ ���� ����� ����� ��õ ");

				for (int i = 0; i < 3; i++) {
					gotoxy(10, 11 + i);
					printf("%d�� %s %s %s %f  \n", i + 1, (char*)movielist[temp_movieid[i]].gnerename, (char*)movielist[temp_movieid[i]].movie_name2, (char*)movielist[temp_movieid[i]].movie_name1, arrtem[i], total_mean[temp_movieid[i]]);
				}

				/*====== Ŭ�����Ϳ� ���� ��õ ======= */


				/*===== Ŭ������ �κ� ==========*/
				z = vectors100_clustering7(userlist, movielist, me, index, index1);
				for (int i = 0; i < index; i++) {
					userlist[i].clusternum = z[i];
				}
				me.clusternum = z[index];
				/*========Ŭ������ ��==========*/

				printf("My cluster : %d", me.clusternum);
				gotoxy(12, 14);
				printf("���� ������ ���� ����� ������ ��õ ");

				p = recommend_cluster(userlist, me.clusternum, index, index1);
				for (int i = 0; i < 3; i++) {
					gotoxy(10, 15 + i);
					imgi = (int)p[i];
					printf("%d�� %s %s %s %f  \n", i + 4, movielist[imgi].gnerename, (char*)movielist[imgi].movie_name2, (char*)movielist[imgi].movie_name1, total_mean[imgi]);

				}
				gotoxy(10, 29); printf("���� ��ȭ�� ��ȣ�� �Է� �� ������ �Ű��ּ���  q :����");
				do {
					int z = 0;
					char key1 = _getch();
					switch (key1) {
					case '1':
						gotoxy(28, 11);
						imgi = temp_movieid[0];
						scanf("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;
					case '2':
						gotoxy(28, 12);
						imgi = temp_movieid[1];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '3':
						gotoxy(28, 13);
						imgi = temp_movieid[2];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '4':
						gotoxy(28, 15);
						imgi = (int)p[0];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case '5':
						gotoxy(28, 16);
						imgi = (int)p[1];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;


						continue;

					case '6':
						gotoxy(28, 17);
						imgi = (int)p[2];
						scanf_s("%f", &me.movie1[imgi].userrate);
						me.movie1[imgi].flag = 1;
						me.watching_number += 1;

						continue;

					case 'q':
						z = 1;

						break;
					}
					if (z == 1)
						break;
				} while (1);

				system("cls");
				gotoxy(1, 1);
				printf("main���� ���ư��÷��� z�� �����ּ���");
				break;

			}
			
			//�������� �Ⱥ� ��ȭ�� ������ �ű�.
			for (int i = 0; i < index; i++) {
				for (int j = 0; j < userlist[i].watching_number; j++) {
					//�Ⱥ� ��ȭã��
					for (int k = 0; k < index1; k++) {
						if (userlist[i].movie1[k].flag == 0) {
							if (userlist[i].favorite_genre == movielist[k].genrenum)
							{
								userlist[i].movie1[k].userrate = (float)(4.0 + rand() % 10 % 10);
							}
							else { userlist[i].movie1[k].userrate = float(2.5 + rand() % 10 % 10); }
						}
					}
				}
			}
		}
	}



	return 0;
}



