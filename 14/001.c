#include <stdio.h>
#include <stdint.h>	//��׼��������
#include <inttypes.h>

int main(void) {

	//int_leastN_t
	//������Nλ�����ܸ��࣬��������Ҫ��֤��С�洢�����Ŀ���ֲ��
	// 
	//int_fastN_t
	//������Nλ������ѡ�������������ͣ���������Ҫ�������еĳ���
	
	//��׼�������� -> �̶������������
	//�̶���λ����������Խ�磬��������Ҫ��ȷ���ݴ�С�ĳ���

	int_least32_t playerScore = 5000;

	int_fast16_t pixelValue = 300;

	int32_t exactId = 123456789;

	printf("pixelValue is %"PRIdFAST16"\n", pixelValue);

	return 0;
}