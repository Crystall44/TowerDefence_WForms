#pragma once

public ref class Tower {
private:
	int hp;
	int lvl;
	int dmg;
public:
	Tower() {
		hp = 3000;
		lvl = 1;
		dmg = 20;
	}

	void takeDmg(int damage) {
		hp -= damage;
	}
	bool isAlive() {//Проверка,что башня ещё не разрушена
		return (hp > 0);
	}
	int getDamage() {
		return dmg;
	}
	int getLvl() {
		return lvl;
	}
	int getHp() {
		return hp;
	}
	void setHp(int hp1) {
		hp = hp1;
	}
	void setLvl(int lvl1) {
		lvl = lvl1;
	}
	bool isNear(int enemyPlace) {//Проверка на то,рядом ли враг с этой башней
		if (enemyPlace >= 50) {
			return true;
		}
		else {
			return false;
		}
	}
	void repair() {//Починка(вызывается в Shop)
		hp += 500;
	}
	void upgrade() {
		lvl++;
		dmg += 20;
	}
};

//Класс защищающей башни
public ref class TowerDef {
protected:
	int dmg;
	int lvl;
	int range;
	bool boostTower;
public:
	TowerDef(int dmg1,int lvl1, int range1, bool boostTower1) {
		dmg = dmg1;
		lvl = lvl1;
		range = range1;
		boostTower = boostTower1;
	}

	void setLvl(int l) { lvl = l; }
	void setDmg(int d) { dmg = d; }
	void setRange(int r) { range = r; }
	int getDamage() {
		return dmg;
	}
	int getLvl() { //Возврат значения через указатель
		return lvl;
	}
	int getRange() { //Возврат значения через указатель
		return range;
	}
	bool isNear(int enemyPlace, int towerPlace) {//Проверка рядом ли с башней враг
		switch (towerPlace) {
		case 1:
			return((enemyPlace >= (5 - range)) && (enemyPlace <= (5 + range)) || ((enemyPlace >= (19 - range)) && (enemyPlace <= (19 + range))));
		case 2:
			return((enemyPlace >= (8 - range)) && (enemyPlace <= (8 + range)) || ((enemyPlace >= (16 - range)) && (enemyPlace <= (16 + range))));
		case 3:
			return((enemyPlace >= (11 - range)) && (enemyPlace <= (13 + range)));
		case 4:
			return((enemyPlace >= (21 - range)) && (enemyPlace <= (23 + range)));
		case 5:
			return((enemyPlace >= (16 - range)) && (enemyPlace <= (16 + range)) || ((enemyPlace >= (28 - range)) && (enemyPlace <= (28 + range))));
		case 6:
			return((enemyPlace >= (28 - range)) && (enemyPlace <= (28 + range)) || ((enemyPlace >= (36 - range)) && (enemyPlace <= (37 + range))));
		case 7:
			return((enemyPlace >= (31 - range)) && (enemyPlace <= (33 + range)));
		case 8:
			return((enemyPlace >= (23 - range + 1)) && (enemyPlace <= (23 + range - 1)) || ((enemyPlace >= (43 - range + 1)) && (enemyPlace <= (43 + range - 1))));
		case 9:
			return((enemyPlace >= (25 - range + 1)) && (enemyPlace <= (25 + range - 1)) || ((enemyPlace >= (37 - range + 1)) && (enemyPlace <= (37 + range - 1))) || ((enemyPlace >= (41 - range + 1)) && (enemyPlace <= (41 + range - 1))));
		case 10:
			return((enemyPlace >= (35 - range + 1)) && (enemyPlace <= (35 + range - 1)) || ((enemyPlace >= (39 - range + 1)) && (enemyPlace <= (39 + range - 1))));
		case 11:
			return((enemyPlace >= (43 - range)) && (enemyPlace <= (45 + range)));
		case 12:
			return((enemyPlace >= (40 - range)) && (enemyPlace <= (40 + range)) || ((enemyPlace >= (48 - range)) && (enemyPlace <= (48 + range))));
		}
	}
	void upDmg() {//Повышение урона
		dmg += 10;
		lvl++;
	}
	void upRange() {//Повышение дальности
		range += 1;
		lvl++;
	}
	void Build(int dmg1, int range1, int lvl1, bool boosted1) {//Построить башню
		dmg = dmg1;
		range = range1;
		lvl = lvl1;
		boostTower = boosted1;
	}
	void Del() {//Удалить башню
		lvl = 0;
		range = 0;
		dmg = 0;
		boostTower = false;
	}
	bool isBoosted() {
		return boostTower;
	}
	void boosting() {
		boostTower = true;
	}
	void Boost() {
		dmg -= 10;
		boostTower = true;
	};
};

//Класс башни - снайпера
public ref class SniperTower : public TowerDef {
public:
	//Конструктор,вызывающий конструктор базового класса
	SniperTower(short int dmg1, short int lvl1, short int range1, bool boostTower1)
		: TowerDef(dmg1, lvl1, range1, boostTower1) {}
	~SniperTower() override {}

	void BuildSpecial() {
		dmg = 20;
		range = 5;
		lvl = 1;
		boostTower = false;
	}
};

//Класс бишни скорострельности
public ref class RapidFireTower : public TowerDef {
private:
	int attackSpeed;
public:
	RapidFireTower(short int dmg1, short int lvl1, short int range1, bool boostTower1, int attackSpeed2)
		: TowerDef(dmg1, lvl1, range1, boostTower1), attackSpeed(attackSpeed2) {}
	~RapidFireTower() override {}

	void BuildSpecial() {
		dmg = 10;
		range = 2;
		lvl = 1;
		boostTower = true;
		attackSpeed = 2;
	}
};

