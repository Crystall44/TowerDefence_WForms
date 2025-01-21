#pragma once
#include <string>
#include "MoveStrategy.h"
#include <iostream>
#include <vector>
//Структура врага
public ref class Enemy {
protected:
	System::String^ name;
	int cost;
	short int hp;
	short int maxHp;
	short int dmg;
	System::Drawing::Color enemyColor; //Цвет врага
	char pct;
	int place;
	int X;
	int Y;
	MoveStrategy^ moveStrategy;
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
			return "Зомби - обычный враг, который имеет большое количество здоровья. \nНе представляет особой угрозы, но может быть щитом для других врагов, что делает его довольно опасным.\n Имеет малый урон и обычную скорость.\n";
		}
		else if (pct == 'S') {
			return "Скелет - обычный враг, который имеет мало здоровья, появляется часто.\nВ одиночку не представляет никакой угрозы.\nНо могут создавать неприятности, ведь может появится сразу много скелетов за счёт их малой редкости.\n";
		}
		else if (pct == 'A') {
			return "Злой зомби - училенный зомби, с меньшим количеством здоровья, но с большим уроном.\nПредставляет сам по себе опасность, ведь как только его здоровье падает до половины - начинает двигаться в 2 раза быстрее.\n";
		}
		else {
			return "Информации об этом враге нет.";
		}
	}
};

//Структура босса - дочерный класс Enemy
public ref class BossEnemy :public Enemy {
public:
	BossEnemy() : Enemy("Boss", 50, 500, 50, 'B', gcnew SlowMove()) {}
	~BossEnemy() {};

	std::string getDescription() override {
		return "Босс - выходит на каждую 5 волну, и только 1 босс на карте. Очень медленный, но очень опасный враг.\nОгромное количество здоровья и урона, до него игра кажеться совсем лёгкой,не так ли?\n";
	}
};

//Класс быстрого врага
public ref class FastEnemy : public Enemy {
public:
	FastEnemy() : Enemy("FastEnemy", 12, 50, 20, 'F', gcnew FastMove()) {}

	~FastEnemy() {}

	std::string getDescription() override {
		return "Быстрый враг - соответствует названию, быстрый и опасный враг.\nДвигается очень быстро, наносит много урона, но у него совсем мало здоровья.\n";
	}
};
