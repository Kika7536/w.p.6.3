#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int width = 15, height = 20, x = 1, y = 1;
	char move;

/*

		��� ��� � �� ������ � ������ ���������� ��������� ��� ����������� else\else if

	while (true) {
		cout << "�������� ��������� �� ������� " << x << ", " << y << ", ������� �������: ";
		cin >> move;

		switch (move)
		{
		case 'a': case 'A':
			if (x > 1) {
				x--;
			}
			break;
		case 'd': case 'D':
			if (x < width) {
				x++;
			}
			break;
		case 'w': case 'W':
			if (y < height) {
				y++;
			}
			break;
		case 's': case 'S':
			if (y > 1) {
				y--;
			}
		default:
			cout << "���������� �������������� ��������� \"W\", \"A\", \"S\", \"D\". ��������� �������." << endl;
			break;
		}
	}
*/

	while (true) {
		cout << "�������� ��������� �� ������� " << x << ", " << y << ", ������� �������: ";
		cin >> move;

		if ((move == 'a' || move == 'A') && x > 1) {
			x--;
		}
		else if ((move == 'd' || move == 'D') && x < width) {
			x++;
		}
		else if ((move == 'w' || move == 'W') && y < height) {
			y++;
		}
		else if ((move == 's' || move == 'S') && y > 1) {
			y--;
		}
		else {
			if (move == 'a' || move == 'A' || move == 'd' || move == 'D' || move == 'w' || move == 'W' || move == 's' || move == 'S') {
				continue;
			}
			else {
				cout << "���������� �������������� ��������� \"W\", \"A\", \"S\", \"D\". ��������� �������." << endl;
			}
		}
	}
}