#pragma once
#include <array>
#include"Towers.h"
#include"Enemy.h"
using namespace System::Collections::Generic;
ref class States {
private:
	static States^ instance;
	int money;
	int wave;
	int repairCost;
	int upgradeCost;
	int mainUpgradeCost;
	int booster;
	int enemysMoney;
	cli::array<int, 2>^ map;
	List<TowerDef^>^ towers; // Список башен
	Tower^ mainTower;
	States();

public:
	static property States^ Instance {
		States^ get();
	}// Метод для получения доступа к единственному экземпляру
	//void Reset();
	property int Money {
		int get();
		void set(int value);
	}

	property int Booster {
		int get();
		void set(int value);
	}

	property int Wave {
		int get();
		void set(int value);
	}

	property cli::array<int, 2>^ Map{
		cli::array<int, 2>^ get();
		void set(cli::array<int, 2>^);
	}

	property int EnemysMoney{
		int get();
		void set(int value);
	}
	property List<TowerDef^>^ Towers {
		List<TowerDef^>^ get();
		void set(List<TowerDef^>^ tempTowers);
	}
	property Tower^ MainTower {
		void set(Tower^ mainTow);
		Tower^ get();
	}

	property int UpgradeCost {
		int get();
		void set(int value);
	}

	property int RepairCost {
		int get();
		void set(int value);
	}

	property int MainUpgradeCost {
		int get();
		void set(int value);
	}
	void Reset();
};

