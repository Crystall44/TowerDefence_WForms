#pragma once
//Класс глваной башня
public ref class Tower {
private:
	int hp; //здоровье
	int lvl; //Уровень
	int dmg; //Урон
public:
	Tower() {
		hp = 3000;
		lvl = 1;
		dmg = 20;
	}

	void takeDmg(int damage) { //Получение урона
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
	void repair() {//Починка
		hp += 500;
	}
	void upgrade() { //Улучшение
		lvl++;
		dmg += 20;
	}
};

//Класс защищающей башни
public ref class TowerDef {
protected:
	int dmg; //Урон
	int lvl; //Уровень
	int range; //Дальность
	bool boostTower; //Усилена ли
public:
	TowerDef(int dmg1,int lvl1, int range1, bool boostTower1) {//Конструктор
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
	int getLvl() { 
		return lvl;
	}
	int getRange() { 
		return range;
	}
	bool isNear(int enemyPlace, int towerPlace) {//Проверка рядом ли с башней враг
		switch (towerPlace) { //Разные проверки для разных башен
		case 0:
			return(((enemyPlace >= (3 - range)) && (enemyPlace <= (3 + range))) || ((enemyPlace >= (17 - range)) && (enemyPlace <= (17 + range))));
		case 1:
			return(((enemyPlace >= (6 - range)) && (enemyPlace <= (6 + range))) || ((enemyPlace >= (14 - range)) && (enemyPlace <= (14 + range))));
		case 2:
			return(((enemyPlace >= (9 - range))) && (enemyPlace <= (11 + range)));
		case 3:
			return((enemyPlace >= (19 - range)) && (enemyPlace <= (21 + range)));
		case 4:
			return(((enemyPlace >= (14 - range)) && (enemyPlace <= (14 + range))) || ((enemyPlace >= (26 - range)) && (enemyPlace <= (26 + range))));
		case 5:
			return(((enemyPlace >= (26 - range)) && (enemyPlace <= (26 + range))) || ((enemyPlace >= (34 - range)) && (enemyPlace <= (34 + range))));
		case 6:
			return((enemyPlace >= (29 - range)) && (enemyPlace <= (31 + range)));
		case 7:
			return(((enemyPlace >= (21 - range + 1)) && (enemyPlace <= (21 + range - 1))) || (((enemyPlace >= (41 - range + 1)) && (enemyPlace <= (41 + range - 1)))));
		case 8:
			return(((enemyPlace >= (23 - range + 1)) && (enemyPlace <= (23 + range - 1))) || (((enemyPlace >= (35 - range + 1)) && (enemyPlace <= (35 + range - 1)))) || (((enemyPlace >= (39 - range + 1)) && (enemyPlace <= (40 + range - 1)))));
		case 9:
			return(((enemyPlace >= (33 - range + 1)) && (enemyPlace <= (33 + range - 1))) || (((enemyPlace >= (37 - range + 1)) && (enemyPlace <= (37 + range - 1)))));
		case 10:
			return((enemyPlace >= (41 - range)) && (enemyPlace <= (43 + range)));
		case 11:
			return((enemyPlace >= (38 - range)) && (enemyPlace <= (38 + range)) || ((enemyPlace >= (46 - range)) && (enemyPlace <= (46 + range))));
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
	void Boost() { //Усилить башню
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

