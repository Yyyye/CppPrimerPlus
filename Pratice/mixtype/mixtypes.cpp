#include<iostream>

struct antarctica_years_end
{
	int year;
	
};

int main()
{
	antarctica_years_end s01, s02, s03;  //���������ṹ��  s01 , s02, s03
	s01.year = 1998;    
	antarctica_years_end *pa = &s02;   //ȡ��ַ�� &  ��ȡ s02�ĵ�ַ��pa
	pa->year = 1999;  // �������->���ź�.���ŵ�ʹ�ò�֮ͬ��
	antarctica_years_end trio[3];   //��������  antarctica_years_end  ����
	trio[0].year = 2003;
	//
	std::cout << trio[0].year << std::endl;   //2003
	const antarctica_years_end *arp[3] = { &s01,&s02,&s03 };   //��������һ��arp������
	std::cout << arp[1]->year << std::endl; //1999
	const antarctica_years_end ** ppa = arp;  //ָ���ָ��
	auto ppb = arp;	    // һ�ֱ�ݷ���
	std::cout << (*ppa)->year << std::endl; //1998  
	std::cout << (*(ppb + 1))->year << std::endl;//1999
	std::cin.get();
	return 0;
}