#pragma once
#include "States.h"  
#include "Enemy.h"  
#include <time.h>
#include <windows.h>
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для Waves
	/// </summary>
	public ref class Waves : public System::Windows::Forms::Form
	{
	private:
		cli::array<System::Windows::Forms::PictureBox^, 2>^ mapVisual;
		int enemysCount = 0;
		int rows = 13;
		int cols = 13;
		List<Enemy^>^ enemys = gcnew List<Enemy^>();
		List<System::Windows::Forms::PictureBox^>^ enemyVisuals = gcnew List<System::Windows::Forms::PictureBox^>();
	public:
		Waves(void) {
			InitializeComponent();  // Инициализация компонентов формы
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Waves()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Waves
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(976, 760);
			this->Name = L"Waves";
			this->Text = L"Waves";
			this->Load += gcnew System::EventHandler(this, &Waves::Waves_Load);
			this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void Waves_Load(System::Object^ sender, System::EventArgs^ e) {
		DrawMap();
		States::Instance->Wave += 1;
		if (States::Instance->Wave % 5 == 0) States::Instance->Booster++;
		int mon = States::Instance->EnemysMoney / 20;
		while (States::Instance->EnemysMoney > 0) {
			buyEnemy(States::Instance->Wave, enemys);
		}
		Wave();

	}
	private: void HandleWave() {
		DrawMap();  // Отрисовываем карту
		States::Instance->Wave += 1;
		if (States::Instance->Wave % 5 == 0) States::Instance->Booster++;

		int mon = States::Instance->EnemysMoney / 20;
		while (States::Instance->EnemysMoney > 0) {
			buyEnemy(States::Instance->Wave, enemys);
		}

		for (int i = 0; i < mon; i++) {
			States::Instance->EnemysMoney += 20;
		}

		Wave();  // Запускаем волну
	}
	public:
		void DrawMap() {
			// Получаем карту из States
			auto map = States::Instance->Map;

			// Создаем массив PictureBox для визуализации
			mapVisual = gcnew cli::array<System::Windows::Forms::PictureBox^, 2>(rows, cols);

			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					// Создаем PictureBox для каждой клетки
					mapVisual[i, j] = gcnew System::Windows::Forms::PictureBox();
					mapVisual[i, j]->Width = 50;  // Ширина клетки
					mapVisual[i, j]->Height = 50; // Высота клетки
					mapVisual[i, j]->Top = i * 50;
					mapVisual[i, j]->Left = j * 50;
					mapVisual[i, j]->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

					// Устанавливаем цвет клетки на основе значения карты
					switch (map[i, j]) {
					case 1: //Поле
						mapVisual[i, j]->BackColor = System::Drawing::Color::Green;
						break;
					case 2://Дорога
						mapVisual[i, j]->BackColor = System::Drawing::Color::Brown;
						break;
					case 3://Башня
						mapVisual[i, j]->BackColor = System::Drawing::Color::Gray;
						break;
					case 4://Главная башня
						mapVisual[i, j]->BackColor = System::Drawing::Color::Red;
						break;
					}

					// Добавляем клетку на форму
					this->Controls->Add(mapVisual[i, j]);
				}
			}
		}

		void placeEnemy(int i, int j, Enemy^ enemy) {
			System::Windows::Forms::PictureBox^ enemyVisual = gcnew System::Windows::Forms::PictureBox();

			//Размеры врага
			enemyVisual->Width = 30;
			enemyVisual->Height = 30;

			// Позиционирование в центре клетки
			enemyVisual->Top = i * 50 + 10; //Сдвиг вниз
			enemyVisual->Left = j * 50 + 10; //Сдвиг вправо

			 // Настройка визуального отображения
			enemyVisual->BackColor = enemy->getColor();
			enemyVisual->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			// Добавляем врага на форму
			this->Controls->Add(enemyVisual);

			// Сохраняем ссылку на PictureBox в списке для дальнейшего удаления
			enemyVisuals->Add(enemyVisual);

			enemy->setXY(0, 1);
		}

		void clearEnemys() {
			for (int i = enemyVisuals->Count - 1; i >= 0; i--) {
				this->Controls->Remove(enemyVisuals[i]); // Удаляем врага с формы
				enemyVisuals->RemoveAt(i);  // Удаляем из списка
			}
		}

		void updateEnemys() {
			clearEnemys();

			for (int i = 0; i < enemys->Count; i++) {
				Enemy^ enemy = enemys[i];
				if(enemy->getPlace() >= 1) placeEnemy(enemy->getX(), enemy->getY(), enemy);
			}
		}

		void buyEnemy(int wave, List<Enemy^>^ enemys) {
			if (wave % 5 == 0 && enemysCount == 0) {
				BossEnemy^ boss = gcnew BossEnemy();
				if (States::Instance->EnemysMoney >= boss->getCost()) {
					States::Instance->EnemysMoney = States::Instance->EnemysMoney - boss->getCost();
					boss->setMoveStrategy(gcnew SlowMove());
					boss->setXY(-1, 1);
					enemys->Add(boss);
					enemysCount++;
					enemys[enemysCount - 1]->setPlace(-1 * enemysCount);
				}
			}

			Enemy^ newEnemy = gcnew Enemy();
			int r = rand() % 5;
			r++;
			FastEnemy^ fastEnemy = gcnew FastEnemy();
			switch (r) {
			case 1:
				newEnemy->setName("Zombe");
				newEnemy->setCost(4);
				newEnemy->setHp(100);
				newEnemy->setDmg(10);
				newEnemy->setPct('Z');
				newEnemy->setMoveStrategy(gcnew NormalMove());
				newEnemy->setColor(System::Drawing::Color::FromArgb(30, 89, 69));
				break;
			case 2:
				newEnemy->setName("Skeleton");
				newEnemy->setCost(2);
				newEnemy->setHp(30);
				newEnemy->setDmg(20);
				newEnemy->setPct('S');
				newEnemy->setMoveStrategy(gcnew NormalMove());
				newEnemy->setColor(System::Drawing::Color::FromArgb(165, 165, 165));
				break;
			case 3:
				newEnemy->setName("Angry Zombe");
				newEnemy->setCost(6);
				newEnemy->setHp(75);
				newEnemy->setDmg(25);
				newEnemy->setPct('A');
				newEnemy->setMoveStrategy(gcnew AdaptiveMove());
				newEnemy->setColor(System::Drawing::Color::FromArgb(72, 6, 7));
				break;
			case 4:
				newEnemy->setName(fastEnemy->getName());
				newEnemy->setCost(fastEnemy->getCost());
				newEnemy->setHp(fastEnemy->getHp());
				newEnemy->setDmg(fastEnemy->getDmg());
				newEnemy->setPct(fastEnemy->getPct());
				newEnemy->setMoveStrategy(gcnew FastMove());
				newEnemy->setColor(System::Drawing::Color::FromArgb(244, 169, 0));
				break;
			case 5:
				newEnemy->setName("Fly");
				newEnemy->setCost(1);
				newEnemy->setHp(5);
				newEnemy->setDmg(10);
				newEnemy->setPct('*');
				newEnemy->setMoveStrategy(gcnew NormalMove());
				newEnemy->setColor(System::Drawing::Color::FromArgb(148, 0, 211));
				break;
			}
			if (States::Instance->EnemysMoney >= newEnemy->getCost()) {
				States::Instance->EnemysMoney = States::Instance->EnemysMoney - newEnemy->getCost();
				newEnemy->setXY(-1, 1);
				enemys->Add(newEnemy);
				enemysCount++;
				enemys[enemysCount - 1]->setPlace(-1 * enemysCount);
			}
		}
		void Wave() {
			int k = 0; bool f = true; int i = 0; int count = enemysCount;

			do {
				for (int j = 0; j < 12; j++) {
					if (States::Instance->Towers[j]->getLvl() >= 1) {
						if (States::Instance->Towers[j]->isBoosted()) {
							for (int p = 0; p < 2; p++) {
								for (i = 0; i < enemysCount; i++) {
									if (enemys[i]->isAlive()) {
										if (States::Instance->Towers[j]->isNear(enemys[i]->getPlace(), j) && (States::Instance->Towers[j]->getLvl() != 0) && (enemys[i]->getPlace() >= 1)) {
											enemys[i]->takeDmg(States::Instance->Towers[j]->getDamage());
											break;
										}
									}
								}
							}
						}

						for (i = 0; i < enemysCount; i++) {
							if (enemys[i]->isAlive()) {
								if (States::Instance->Towers[j]->isNear(enemys[i]->getPlace(), j) && (States::Instance->Towers[j]->getLvl() != 0) && (enemys[i]->getPlace() >= 1)) {
									enemys[i]->takeDmg(States::Instance->Towers[j]->getDamage());
									break;
								}
							}
						}
					}
				}
				for (i = 0; i < enemysCount; i++) {
					if (enemys[i]->isAlive() && enemys[i] != nullptr) {
						if (States::Instance->MainTower->isNear(enemys[i]->getPlace()) && (enemys[i]->getPlace() >= 0)) {
							enemys[i]->takeDmg(States::Instance->MainTower->getDamage());
							break;
						}
					}
				}
				for (i = 0; i < enemysCount; i++) {
					if (enemys[i]->isAlive()) {
						if (enemys[i]->getPlace() != 53 && enemys[i]->getPlace() >= 1) {
							enemys[i]->Move();
						}
						else if (enemys[i]->getPlace() == 53) {
							States::Instance->MainTower->takeDmg(enemys[i]->getDmg());
						}
						else {
							enemys[i]->Move();
						}
					}
					else {
						States::Instance->Money += enemys[i]->getCost() * 2;
						enemys->RemoveAt(i);
						enemysCount--;
						i--;
					}
				}
				updateEnemys();
				Application::DoEvents();
				Threading::Thread::Sleep(800);
				if (enemysCount == 0) f = 0;
				if (States::Instance->MainTower->isAlive() != true) f = 0;
			} while (f);
			enemysCount = 0;
			
		}
	};
}
