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
	/// ������ ��� Waves
	/// </summary>
	public ref class Waves : public System::Windows::Forms::Form
	{
	private:
		cli::array<System::Windows::Forms::PictureBox^, 2>^ mapVisual;
		int enemysCount = 0;
		int rows = 13;
		int cols = 13;
		List<Enemy^>^ enemys = gcnew List<Enemy^>();
	private: System::Windows::Forms::Label^ mainHp;
		   List<System::Windows::Forms::PictureBox^>^ enemyVisuals = gcnew List<System::Windows::Forms::PictureBox^>();
	public:
		Waves(void) {
			InitializeComponent();  // ������������� ����������� �����
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainHp = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// mainHp
			// 
			this->mainHp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainHp->Location = System::Drawing::Point(-5, 650);
			this->mainHp->Name = L"mainHp";
			this->mainHp->Size = System::Drawing::Size(703, 79);
			this->mainHp->TabIndex = 0;
			// 
			// Waves
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 726);
			this->Controls->Add(this->mainHp);
			this->Name = L"Waves";
			this->Text = L"Waves";
			this->Load += gcnew System::EventHandler(this, &Waves::Waves_Load);
			this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void Waves_Load(System::Object^ sender, System::EventArgs^ e) {
		DrawMap();
		Threading::Tasks::Task::Run(gcnew Action(this, &Waves::StartWaveProcessing));

	}
	private: void StartWaveProcessing() {
		mainHp->Text = "�������� ������� ����� = " + States::Instance->MainTower->getHp();
		States::Instance->Wave += 1;
		if (States::Instance->Wave % 5 == 0)
		   States::Instance->Booster++;
		 // ������������ ������ ������
		int mon = States::Instance->EnemysMoney / 20;
		while (States::Instance->EnemysMoney > 0) {
			buyEnemy(States::Instance->Wave, enemys);
		}
		mon++;
		for (int i = 0; i <= mon; i++) {
			States::Instance->EnemysMoney += 20;
		}
		// ��������� ����� ������
		Wave();
		if (States::Instance->MainTower->isAlive()) {
			System::Windows::Forms::MessageBox::Show("����� " + States::Instance->Wave + " ��������!", "������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("������� ����� ���������! �� ���������.", "���������...", System::Windows::Forms::MessageBoxButtons::OK);
			Application::Restart();
		}
    }
	public:
		void DrawMap() {
			// �������� ����� �� States
			auto map = States::Instance->Map;
			int towerNumber = 0;
			// ������� ������ PictureBox ��� ������������
			mapVisual = gcnew cli::array<System::Windows::Forms::PictureBox^, 2>(rows, cols);

			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					// ������� PictureBox ��� ������ ������
					mapVisual[i, j] = gcnew System::Windows::Forms::PictureBox();
					mapVisual[i, j]->Width = 50;  // ������ ������
					mapVisual[i, j]->Height = 50; // ������ ������
					mapVisual[i, j]->Top = i * 50;
					mapVisual[i, j]->Left = j * 50;
					mapVisual[i, j]->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

					// ������������� ���� ������ �� ������ �������� �����
					switch (map[i, j]) {
					case 1: //����
						mapVisual[i, j]->BackColor = System::Drawing::Color::Green;
						break;
					case 2://������
						mapVisual[i, j]->BackColor = System::Drawing::Color::Brown;
						break;
					case 3://�����
						if (States::Instance->Towers[towerNumber]->getLvl() > 0) {
							// ������� ���������� PictureBox (��������� ������� ������ �����)
							System::Windows::Forms::PictureBox^ innerBox = gcnew System::Windows::Forms::PictureBox();
							innerBox->Width = 25;  // ������ ���������� ��������
							innerBox->Height = 25;
							innerBox->BackColor = System::Drawing::Color::FromArgb(105, 105, 105);

							// ���������� ��������� ������� ������ ���������
							innerBox->Top = (mapVisual[i, j]->Height - innerBox->Height) / 2;  // �������� ������
							innerBox->Left = (mapVisual[i, j]->Width - innerBox->Width) / 2;   // �������� �����
							 // ��������� ��������� PictureBox � ��������
							mapVisual[i, j]->Controls->Add(innerBox);
						}
						mapVisual[i, j]->BackColor = System::Drawing::Color::Gray;
						towerNumber++;
						break;
					case 4://������� �����
						mapVisual[i, j]->BackColor = System::Drawing::Color::Red;
						break;
					}

					// ��������� ������ �� �����
					this->Controls->Add(mapVisual[i, j]);
				}
			}
		}

		void placeEnemy(int i, int j, Enemy^ enemy) {
			System::Windows::Forms::PictureBox^ enemyVisual = gcnew System::Windows::Forms::PictureBox();

			//������� �����
			enemyVisual->Width = 30;
			enemyVisual->Height = 30;

			// ���������������� � ������ ������
			enemyVisual->Top = i * 50 + 10; //����� ����
			enemyVisual->Left = j * 50 + 10; //����� ������

			 // ��������� ����������� �����������
			enemyVisual->BackColor = enemy->getColor();
			enemyVisual->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			// ��������� ����� �� �����
			this->Controls->Add(enemyVisual);

			enemyVisual->BringToFront();

			// ��������� ������ �� PictureBox � ������ ��� ����������� ��������
			enemyVisuals->Add(enemyVisual);
		}

		void clearEnemys() {
			for (int i = enemyVisuals->Count - 1; i >= 0; i--) {
				this->Controls->Remove(enemyVisuals[i]); // ������� ����� � �����
				enemyVisuals->RemoveAt(i);  // ������� �� ������
			}
			enemyVisuals->Clear();
		}

		void updateEnemys() {
			clearEnemys();

			for (int i = 0; i < enemys->Count; i++) {
				Enemy^ enemy = enemys[i];
				if(enemy->getPlace() >= -1) placeEnemy(enemy->getX(), enemy->getY(), enemy);
			}
		}

		void buyEnemy(int wave, List<Enemy^>^ enemys) {
			if (wave % 5 == 0 && enemysCount == 0) {
				BossEnemy^ boss = gcnew BossEnemy();
				if (States::Instance->EnemysMoney >= boss->getCost()) {
					States::Instance->EnemysMoney = States::Instance->EnemysMoney - boss->getCost();
					boss->setMoveStrategy(gcnew SlowMove());
					boss->setXY(1, 0);
					boss->setColor(System::Drawing::Color::Black);
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
				newEnemy->setXY(1, 0);
				newEnemy->setPlace(-1 * enemys->Count);
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
						if (enemys[i]->getPlace() != 52) {
							enemys[i]->Move(enemys[i]);
						}
						else if (enemys[i]->getPlace() == 52) {
							States::Instance->MainTower->takeDmg(enemys[i]->getDmg());
						}
					}
					else {
						States::Instance->Money += enemys[i]->getCost() * 2;
						enemys->RemoveAt(i);
						enemysCount--;
						i--;
					}
				}

				this->Invoke(gcnew Action(this, &Waves::updateEnemys));
				mainHp->Text = "�������� ������� ����� = " + States::Instance->MainTower->getHp();
				Threading::Thread::Sleep(800);
				if (enemysCount == 0) f = 0;
				if (States::Instance->MainTower->isAlive() != true) f = 0;
			} while (f);
			enemysCount = 0;
			this->Close();
		}
	};
}
