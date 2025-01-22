#pragma once
#include <string>
#include "MoveStrategy.h"
#include <iostream>
#include <vector>
//Класс врага
public ref class Enemy {
protected:
	System::String^ name;//Имя
	int cost;//Стоимость(редкость)
	short int hp;//Здоровье(текущее)
	short int maxHp;//Здоровье(Максимальное)
	short int dmg;//Урон
	System::Drawing::Color enemyColor; //Цвет врага
	char pct;//Символ
	int place;//Позиция(числовая)
	int X;//Позиция по X
	int Y;//Позиция по Y
	MoveStrategy^ moveStrategy;//Стратегия движения
public:
	// Конструктор инициализирует врага
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

	bool isAlive() { //Проверка жив ли враг
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

	void setMoveStrategy(MoveStrategy^ newStrategy) { //Задаётся стратегия движения
		moveStrategy = newStrategy;
	}

	virtual void Move(Enemy^ enemy) {//Движение врага
		int oldPlace = place;
		moveStrategy->Move(place, hp, maxHp);
		if (place >= 0) {
			if (place - oldPlace > 0) {
				if (place - oldPlace > 1) {//Если враг за ход делает 2 шага по карте
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

	void takeDmg(short int damage) {//Враг получает урон
		hp -= damage;
	}

	int getCost() {
		return cost;
	}
	int getPlace() {
		return place;
	}

	void setXY(int i, int j) {//Установить позицию
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
};

//Класс Босса
public ref class BossEnemy :public Enemy {
public:
	BossEnemy() : Enemy("Boss", 50, 500, 50, 'B', gcnew SlowMove()) {}
	~BossEnemy() {};

};

//Класс быстрого врага
public ref class FastEnemy : public Enemy {
public:
	FastEnemy() : Enemy("FastEnemy", 12, 50, 20, 'F', gcnew FastMove()) {}

	~FastEnemy() {}
};
