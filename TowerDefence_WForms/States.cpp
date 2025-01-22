#include "States.h"
// Конструктор синглтона
States::States() {
    //Начальные значения игры(устанавливаются 1 раз, в начале игры. И при перезапуске или проигрыше)
    money = 20;
    repairCost = 20;
    upgradeCost = 10;
    mainUpgradeCost = 30;
    enemysMoney = 20;
    wave = 0;
    booster = 0;
    towers = gcnew List<TowerDef^>();
    map = gcnew cli::array<int, 2>(13, 13);
    int tempMap[13][13] = { //Карта
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1},
            {1, 1, 1, 1, 3, 1, 1, 3, 1, 1, 2, 3, 1},
            {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1},
            {1, 3, 2, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1},
            {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 2, 3, 1},
            {1, 1, 3, 1, 3, 1, 2, 2, 2, 2, 2, 1, 1},
            {1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1},
            {1, 1, 2, 2, 2, 2, 2, 1, 3, 1, 1, 1, 1},
            {1, 3, 2, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, };
    for (int i = 0; i < 13; i++) { //Массив башен
        for (int j = 0; j < 13; j++) {
            map[i, j] = tempMap[i][j];
        }
    }
    for (int i = 0; i < 12; i++) {
        towers->Add(gcnew TowerDef(0,0,0,false));
    }
    mainTower = gcnew Tower();
}

//  Синглтон и его конструктор, получение уникального значения 1 раз
States^ States::Instance::get() {
    if (instance == nullptr) {
        instance = gcnew States();
    }
    return instance;
}

// Методы доступа к Деньгам
int States::Money::get() {
    return money;
}

void States::Money::set(int value) {
    money = value;
}

// Методы доступа к Бустерам
int States::Booster::get() {
    return booster;
}

void States::Booster::set(int value) {
    booster = value;
}

// Методы доступа к номеру волны
int States::Wave::get() {
    return wave;
}

void States::Wave::set(int value) {
    wave = value;
}

// Методы доступа к Цене улучшения главной башни
int States::MainUpgradeCost::get() {
    return mainUpgradeCost;
}

void States::MainUpgradeCost::set(int value) {
    mainUpgradeCost = value;
}

// Методы доступа к цене улучшения
int States::UpgradeCost::get() {
    return upgradeCost;
}

void States::UpgradeCost::set(int value) {
    upgradeCost = value;
}

// Методы доступа к цене починки
int States::RepairCost::get() {
    return repairCost;
}

void States::RepairCost::set(int value) {
    repairCost = value;
}

// Методы доступа к деньгам врагов
int States::EnemysMoney::get() {
    return enemysMoney;
}

void States::EnemysMoney::set(int value) {
    enemysMoney = value;
}

// Методы доступа к карте
cli::array<int, 2>^ States::Map::get() {
    return map;
}

void States::Map::set(cli::array<int, 2>^ tempMap) {
    map = tempMap;
}

// Методы доступа к башням
List<TowerDef^>^ States::Towers::get() {
    return towers;
}

void States::Towers::set(List<TowerDef^>^ tempTowers) {
    towers = tempTowers;
}

// Методы доступа к главной башне
Tower^ States::MainTower::get() {
    return mainTower;
}

void States::MainTower::set(Tower^ mainTow) {
    mainTower = mainTow;
}

void States::Reset() { //Возврат к начальным значениям синглтона
    money = 20;
    enemysMoney = 20;
    wave = 0;
    repairCost = 20;
    upgradeCost = 10;
    mainUpgradeCost = 30;
    booster = 0;
    towers = gcnew List<TowerDef^>();
    map = gcnew cli::array<int, 2>(13, 13);
    int tempMap[13][13] = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1},
            {1, 1, 1, 1, 3, 1, 1, 3, 1, 1, 2, 3, 1},
            {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1},
            {1, 3, 2, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1},
            {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 2, 3, 1},
            {1, 1, 3, 1, 3, 1, 2, 2, 2, 2, 2, 1, 1},
            {1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1},
            {1, 1, 2, 2, 2, 2, 2, 1, 3, 1, 1, 1, 1},
            {1, 3, 2, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1},
            {1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, };
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 13; j++) {
            map[i, j] = tempMap[i][j];
        }
    }
    for (int i = 0; i < 12; i++) {
        towers->Add(gcnew TowerDef(0, 0, 0, false));
    }
    mainTower = gcnew Tower();
}
