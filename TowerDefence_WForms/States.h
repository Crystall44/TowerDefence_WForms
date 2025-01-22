#pragma once
#include <array>
#include"Towers.h"
#include"Enemy.h"
using namespace System::Collections::Generic;
ref class States { //Статический класс в 1 экземляре -  синглтон
private:
	//Обозначение характеристик
	static States^ instance; //Сам синглтон
	int money; //Деньги(пользователя)
	int wave; //Номер волны
	int repairCost; //Стоимость починки главной башни
	int upgradeCost; //Стоимсоть улучшения(Не использованно, было использовано ранее до изменений)
	int mainUpgradeCost;//Стоимость улучшения главной башни
	int booster; //Бустеры
	int enemysMoney; //Деньги(врагов,для их спавна)
	cli::array<int, 2>^ map; //Карта
	List<TowerDef^>^ towers; // Список башен
	Tower^ mainTower; //Главная башня
	States(); //Конструктор

public:
	static property States^ Instance { //Конструктор синглтона
		States^ get();
	}// Метод для получения доступа к единственному экземпляру
	
	property int Money {//Деньги и доступ к ним
		int get();
		void set(int value);
	}

	property int Booster { //Бустеры и доступ к ним
		int get();
		void set(int value);
	}

	property int Wave { //Волны и доступ к ним
		int get();
		void set(int value);
	}

	property cli::array<int, 2>^ Map{ //Карта и доступ к ней
		cli::array<int, 2>^ get();
		void set(cli::array<int, 2>^);
	}

	property int EnemysMoney{ //Деньги врагов и доступ к ним
		int get();
		void set(int value);
	}
	property List<TowerDef^>^ Towers { //Башни и доступ к ним
		List<TowerDef^>^ get();
		void set(List<TowerDef^>^ tempTowers);
	}
	property Tower^ MainTower { //Главная башня и доступ к ней
		void set(Tower^ mainTow);
		Tower^ get();
	}

	property int UpgradeCost { //Стоимость улучшения и доступ к ней
		int get();
		void set(int value);
	}

	property int RepairCost { //Стоимость починки и доступ к ней
		int get();
		void set(int value);
	}

	property int MainUpgradeCost { //Стоимость улучшения главной башни и доступ к ней
		int get();
		void set(int value);
	}
	void Reset();
};

