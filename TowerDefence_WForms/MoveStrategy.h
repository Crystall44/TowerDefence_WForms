#pragma once
#include <string>
public interface class MoveStrategy {
public:
	virtual void Move(int% place, int hp, int maxHp) = 0;
	virtual System::String^ getSpeedDescription() = 0;
};

//������� �������� ��������
public ref  class NormalMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {
		place++;//�������� �� 1 ������
	}
	System::String^ getSpeedDescription() override {
		return "������� ��������. 1 ������ �� 1 ����.";
	}
};

//������� ������������
public ref  class FastMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {
		place += 2;//�������� �� 2 ������
	}
	System::String^ getSpeedDescription() override {
		return "������� ��������. 2 ������ �� 1 ����.";
	}
};

//������������ ������������ - ���������� ���� �������� ������ ��������
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
		return "������������ ��������. 1 ������ �� 1 ����, �� 2 ������ �� ���� ���� �������� ������ ��������.";
	}
};

//������� �� ����� ��������� �����(����� ������������� � �������)
public ref  class StuckMove : public MoveStrategy {
public:
	void Move(int% place, int hp, int maxHp) override {} //�� �����(��������,���������)
	System::String^ getSpeedDescription() override {
		return "����� �� �����.";
	}
};

//��������� �������� - ��� �����
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
		return "��������� ��������. 1 ������ �� 2 �����.";
	}
};