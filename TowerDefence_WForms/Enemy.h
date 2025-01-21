#pragma once
#include <string>
#include "MoveStrategy.h"
#include <iostream>
#include <vector>
//��������� �����
public ref class Enemy {
protected:
	System::String^ name;
	int cost;
	short int hp;
	short int maxHp;
	short int dmg;
	System::Drawing::Color enemyColor; //���� �����
	char pct;
	int place;
	int X;
	int Y;
	MoveStrategy^ moveStrategy;
public:
	// ����������� �������������� �����
	Enemy() {
		cost = 0;
		hp = 0;
		dmg = 0;
		pct = ' ';
		place = 0;
	}
	~Enemy() {}
	Enemy(System::String^ n, int c, int h, int d, char p, MoveStrategy^ strategy) :
		name(n), hp(h), maxHp(h), cost(c), dmg(d), pct(p), place(0), moveStrategy(strategy) {}

	void setName(System::String^ n) { name = n; }
	void setHp(short int h) {
		hp = h;
		maxHp = hp;
	}
	void setCost(int c) { cost = c; }
	void setDmg(short int d) { dmg = d; }
	void setPct(char p) { pct = p; }

	bool isAlive() { //�������� ��� �� ����
		return (hp > 0);
	}
	char getPct() {
		return pct;
	}
	System::String^ getName() {
		return name;
	}
	short int getHp() {
		return hp;
	}
	short int getMaxHp() {
		return maxHp;
	}
	void setPlace(int p) { place = p; }

	void setMoveStrategy(MoveStrategy^ newStrategy) { //������� ��������� ��������
		moveStrategy = newStrategy;
	}

	virtual void Move(Enemy^ enemy) {//�������� �����
		int oldPlace = place;
		moveStrategy->Move(place, hp, maxHp);
		if (place >= 0) {
			if (place - oldPlace > 0) {
				if (place - oldPlace > 1) {
					oldPlace++;
					if (oldPlace == 9 || oldPlace == 10 || oldPlace == 19 || oldPlace == 20 || oldPlace == 29 || oldPlace == 30 || oldPlace == 35 || oldPlace  == 36 || oldPlace == 41 || oldPlace == 42) {
						X++;
					}
					else if ((oldPlace >= 11 && oldPlace <= 18) || (oldPlace >= 31 && oldPlace <= 34) || (oldPlace >= 37 && oldPlace <= 40)) {
						Y--;
					}
					else if (oldPlace < 51) {
						Y++;
					}
				}
				if (place == 10 || place == 11 || place == 20 || place == 21 || place == 30 || place == 31 || place == 36 || place == 37 || place == 42 || place == 43) {
					X++;
				}
				else if ((place >= 12 && place <= 19) || (place >= 32 && place <= 35) || (place >= 38 && place <= 41)) {
					Y--;
				}
				else if (place < 52) {
					Y++;
				}
			}
		}
	}

	short int getDmg() {
		return dmg;
	}

	void takeDmg(short int damage) {
		hp -= damage;
	}

	int getCost() {
		return cost;
	}
	int getPlace() {
		return place;
	}

	void setXY(int i, int j) {
		X = i;
		Y = j;
	}

	int getX() {
		return X;
	}

	int getY() {
		return Y;
	}

	void setColor(System::Drawing::Color color) {
		enemyColor = color;
	}

	System::Drawing::Color getColor() {
		return enemyColor;
	}

	virtual System::String^ getSpeedDescription() {
		if (moveStrategy) {
			return moveStrategy->getSpeedDescription();
		}
		return nullptr;
	}

	virtual std::string getDescription() {
		if (pct == 'Z') {
			return "����� - ������� ����, ������� ����� ������� ���������� ��������. \n�� ������������ ������ ������, �� ����� ���� ����� ��� ������ ������, ��� ������ ��� �������� �������.\n ����� ����� ���� � ������� ��������.\n";
		}
		else if (pct == 'S') {
			return "������ - ������� ����, ������� ����� ���� ��������, ���������� �����.\n� �������� �� ������������ ������� ������.\n�� ����� ��������� ������������, ���� ����� �������� ����� ����� �������� �� ���� �� ����� ��������.\n";
		}
		else if (pct == 'A') {
			return "���� ����� - ��������� �����, � ������� ����������� ��������, �� � ������� ������.\n������������ ��� �� ���� ���������, ���� ��� ������ ��� �������� ������ �� �������� - �������� ��������� � 2 ���� �������.\n";
		}
		else {
			return "���������� �� ���� ����� ���.";
		}
	}
};

//��������� ����� - �������� ����� Enemy
public ref class BossEnemy :public Enemy {
public:
	BossEnemy() : Enemy("Boss", 50, 500, 50, 'B', gcnew SlowMove()) {}
	~BossEnemy() {};

	std::string getDescription() override {
		return "���� - ������� �� ������ 5 �����, � ������ 1 ���� �� �����. ����� ���������, �� ����� ������� ����.\n�������� ���������� �������� � �����, �� ���� ���� �������� ������ �����,�� ��� ��?\n";
	}
};

//����� �������� �����
public ref class FastEnemy : public Enemy {
public:
	FastEnemy() : Enemy("FastEnemy", 12, 50, 20, 'F', gcnew FastMove()) {}

	~FastEnemy() {}

	std::string getDescription() override {
		return "������� ���� - ������������� ��������, ������� � ������� ����.\n��������� ����� ������, ������� ����� �����, �� � ���� ������ ���� ��������.\n";
	}
};
