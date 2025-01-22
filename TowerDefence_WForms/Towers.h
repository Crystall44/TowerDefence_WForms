#pragma once
//����� ������� �����
public ref class Tower {
private:
	int hp; //��������
	int lvl; //�������
	int dmg; //����
public:
	Tower() {
		hp = 3000;
		lvl = 1;
		dmg = 20;
	}

	void takeDmg(int damage) { //��������� �����
		hp -= damage;
	}
	bool isAlive() {//��������,��� ����� ��� �� ���������
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
	bool isNear(int enemyPlace) {//�������� �� ��,����� �� ���� � ���� ������
		if (enemyPlace >= 50) {
			return true;
		}
		else {
			return false;
		}
	}
	void repair() {//�������
		hp += 500;
	}
	void upgrade() { //���������
		lvl++;
		dmg += 20;
	}
};

//����� ���������� �����
public ref class TowerDef {
protected:
	int dmg; //����
	int lvl; //�������
	int range; //���������
	bool boostTower; //������� ��
public:
	TowerDef(int dmg1,int lvl1, int range1, bool boostTower1) {//�����������
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
	bool isNear(int enemyPlace, int towerPlace) {//�������� ����� �� � ������ ����
		switch (towerPlace) { //������ �������� ��� ������ �����
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
	void upDmg() {//��������� �����
		dmg += 10;
		lvl++;
	}
	void upRange() {//��������� ���������
		range += 1;
		lvl++;
	}
	void Build(int dmg1, int range1, int lvl1, bool boosted1) {//��������� �����
		dmg = dmg1;
		range = range1;
		lvl = lvl1;
		boostTower = boosted1;
	}
	void Del() {//������� �����
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
	void Boost() { //������� �����
		dmg -= 10;
		boostTower = true;
	};
};

//����� ����� - ��������
public ref class SniperTower : public TowerDef {
public:
	//�����������,���������� ����������� �������� ������
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

//����� ����� ����������������
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

