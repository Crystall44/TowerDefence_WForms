#pragma once
#include <string>
public interface class MoveStrategy {//Стратегия движения врагов
public:
	virtual void Move(int% place, int hp, int maxHp) = 0;
};

//Обычная скорость движения
public ref  class NormalMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {
		place++;//Движение на 1 клетку
	}
};

//Быстрое передвижение
public ref  class FastMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {
		place += 2;//Движение на 2 клетки
	}
};

//Динамическое передвижение - ускоряется если здоровье меньше половины
public ref  class AdaptiveMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {
		if (hp > (maxHp / 2)) {
			place++;
		}
		else {
			place += 2;
		}
	}
};

//Стоящее на месте поведение врага(не используется)
public ref  class StuckMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {} //На месте(например,оглушение)
};

//Медленная скорость - для босса
public ref  class SlowMove : public MoveStrategy {
private:
	int f;
public:
	SlowMove() {
		f = 0;
	}
	void Move(int% place, int hp, int maxHp) override {
		if (f == 0) {
			f++;
		}
		else {
			f = 0;
			place++;//1 клетка раз в 2 хода
		}
	}
};