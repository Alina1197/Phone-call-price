

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double hour_st, minute_st, seconds_st, hour_end, minute_end, seconds_end, price, price_all, time_st, time_end, time_all, price_hrvn, price_kop;

	price = 30;
	cout << "������� ������ ������ ��������� (����, ������ � �������)\n";
	cin >> hour_st >> minute_st >> seconds_st;

	cout << "������� ������ ��������� ��������� (����, ������ � �������)\n";
	cin >> hour_end >> minute_end >> seconds_end;

	if (hour_end == 0)
	{
		hour_end = 24;
		time_st = (hour_st * 60) + minute_st + (seconds_st / 60);
		time_end = (hour_end * 60) + minute_end + (seconds_end / 60);
		time_all = time_end - time_st;
		price_all = time_all * price;
		price_hrvn = price_all / 100;
		price_kop = (price_hrvn - floor(price_hrvn)) * 100;

		cout << "���� ��������� ���������� " << floor(price_hrvn) << " ���. " << round(price_kop) << " ���.\n";
	}
	else 
	{
		hour_end = hour_end;
		time_st = (hour_st * 60) + minute_st + (seconds_st / 60);
		time_end = (hour_end * 60) + minute_end + (seconds_end / 60);
		time_all = time_end - time_st;
		price_all = time_all * price;
		price_hrvn = price_all / 100;
		price_kop = (price_hrvn - floor(price_hrvn)) * 100;

		cout << "���� ��������� ���������� " << floor(price_hrvn) << " ���. " << round(price_kop) << " ���.\n";
	}



}