#include<iostream>
int main()
{
	// 32<=float <<48 <<double << long double 
	// ͨ��  float λ32λ  doubleΪ64λ  long double Ϊ89 ,96 ����128
	//��Ч��Χ��  -37��37λ
	
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);  //��ʹ���ʹ�ö����ʾ��  ������ʾΪС�����6λ  
	//ios_fixed ��floatfield ��iostream �ṩ�ĳ���
	//float ���ٱ�֤��6λ��Ч����
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;  
	const float million = 1.0e6;
	cout << "tub =" << tub;
	cout << ", a million  tubs  = " << million *tub; // (���� ����λ������Ч�� �����ڵ���λ֮��  ��ʼ ��׼ȷ  ���Ϊ  3333333.2500000)
	cout << ", \nand  ten millon tubs =";
	cout << 10 * million *tub << endl;
	cout << "mint = " << mint << " and a million  mints =";
	cout << million *mint << endl;   //����Ϊ13λ��ȷ  ������15λ (ϵͳ)
	cin.get();
	return 0;
	//���㳣�� 
	//  1.234f
	//  2.45E20F
	//  2.345324E28
	//  2.2L



}