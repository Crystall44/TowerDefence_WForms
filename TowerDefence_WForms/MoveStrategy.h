#pragma once
#include <string>
public interface class MoveStrategy {
public:
	virtual void Move(int% place, int hp, int maxHp) = 0;
	virtual System::String^ getSpeedDescription() = 0;
};

//ќбычна€ скорость движение
public ref  class NormalMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {
		place++;//ƒвижение на 1 клетку
	}
	System::String^ getSpeedDescription() override {
		return "ќбычна€ скорость. 1 клетка за 1 кадр.";
	}
};

//Ѕыстрое передвижение
public ref  class FastMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {
		place += 2;//ƒвижение на 2 клетки
	}
	System::String^ getSpeedDescription() override {
		return "Ѕыстра€ скорость. 2 клетки за 1 кадр.";
	}
};

//ƒинамическое передвижение - ускор€етс€ если здоровье меньше половины
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
	System::String^ getSpeedDescription() override {
		return "ѕеременчива€ скорость. 1 клетка за 1 кадр, но 2 клетки за кадр если здоровье меньше половины.";
	}
};

//—то€щее на месте поведение врага(будет использованно в будущем)
public ref  class StuckMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {} //Ќа месте(например,оглушение)
	System::String^ getSpeedDescription() override {
		return "—тоит на месте.";
	}
};

//ћедленна€ скорость - дл€ босса
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
			place++;
		}
	}
	System::String^ getSpeedDescription() override {
		return "ћедленна€ скорость. 1 клетка за 2 кадра.";
	}
};