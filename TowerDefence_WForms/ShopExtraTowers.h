#pragma once
#include"States.h"
#include"Towers.h"
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� ShopExtraTowers
	/// </summary>
	public ref class ShopExtraTowers : public System::Windows::Forms::Form
	{
	private:
		int towerNumber;
	public:
		ShopExtraTowers(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~ShopExtraTowers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ Boost;
	private: System::Windows::Forms::Button^ Del;
	private: System::Windows::Forms::Button^ upgrade;
	private: System::Windows::Forms::Button^ By;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ usual;
	private: System::Windows::Forms::Button^ rapidFire;
	private: System::Windows::Forms::Button^ SniperTower;
	private: System::Windows::Forms::Button^ escape;
	private: System::Windows::Forms::Button^ upDmg;
	private: System::Windows::Forms::Button^ upRange;
	private: System::Windows::Forms::Button^ exit2;
	private: System::Windows::Forms::Label^ moneyInfo;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Boost = (gcnew System::Windows::Forms::Button());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->upgrade = (gcnew System::Windows::Forms::Button());
			this->By = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->usual = (gcnew System::Windows::Forms::Button());
			this->rapidFire = (gcnew System::Windows::Forms::Button());
			this->SniperTower = (gcnew System::Windows::Forms::Button());
			this->escape = (gcnew System::Windows::Forms::Button());
			this->upDmg = (gcnew System::Windows::Forms::Button());
			this->upRange = (gcnew System::Windows::Forms::Button());
			this->exit2 = (gcnew System::Windows::Forms::Button());
			this->moneyInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 663);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(749, 42);
			this->label1->TabIndex = 11;
			this->label1->Text = L"�������� �����(����� ������ �� �����)";
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(665, 12);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(216, 81);
			this->Exit->TabIndex = 10;
			this->Exit->Text = L"�����";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &ShopExtraTowers::Exit_Click);
			// 
			// Boost
			// 
			this->Boost->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Boost->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Boost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Boost->Location = System::Drawing::Point(704, 788);
			this->Boost->Name = L"Boost";
			this->Boost->Size = System::Drawing::Size(158, 81);
			this->Boost->TabIndex = 9;
			this->Boost->Text = L"�������";
			this->Boost->UseVisualStyleBackColor = false;
			this->Boost->Visible = false;
			this->Boost->Click += gcnew System::EventHandler(this, &ShopExtraTowers::Boost_Click);
			// 
			// Del
			// 
			this->Del->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Del->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Del->Location = System::Drawing::Point(455, 788);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(243, 81);
			this->Del->TabIndex = 8;
			this->Del->Text = L"������� �����";
			this->Del->UseVisualStyleBackColor = false;
			this->Del->Visible = false;
			this->Del->Click += gcnew System::EventHandler(this, &ShopExtraTowers::Del_Click);
			// 
			// upgrade
			// 
			this->upgrade->BackColor = System::Drawing::SystemColors::ControlDark;
			this->upgrade->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upgrade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->upgrade->Location = System::Drawing::Point(271, 789);
			this->upgrade->Name = L"upgrade";
			this->upgrade->Size = System::Drawing::Size(178, 80);
			this->upgrade->TabIndex = 7;
			this->upgrade->Text = L"��������";
			this->upgrade->UseVisualStyleBackColor = false;
			this->upgrade->Visible = false;
			this->upgrade->Click += gcnew System::EventHandler(this, &ShopExtraTowers::upgrade_Click);
			// 
			// By
			// 
			this->By->BackColor = System::Drawing::SystemColors::ControlDark;
			this->By->Cursor = System::Windows::Forms::Cursors::Hand;
			this->By->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->By->Location = System::Drawing::Point(4, 788);
			this->By->Name = L"By";
			this->By->Size = System::Drawing::Size(261, 81);
			this->By->TabIndex = 6;
			this->By->Text = L"������ �����";
			this->By->UseVisualStyleBackColor = false;
			this->By->Visible = false;
			this->By->Click += gcnew System::EventHandler(this, &ShopExtraTowers::By_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(19, 709);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(843, 76);
			this->label2->TabIndex = 12;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// usual
			// 
			this->usual->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->usual->Cursor = System::Windows::Forms::Cursors::Hand;
			this->usual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->usual->Location = System::Drawing::Point(4, 788);
			this->usual->Name = L"usual";
			this->usual->Size = System::Drawing::Size(219, 80);
			this->usual->TabIndex = 13;
			this->usual->Text = L"������� �����(10)";
			this->usual->UseVisualStyleBackColor = false;
			this->usual->Visible = false;
			this->usual->Click += gcnew System::EventHandler(this, &ShopExtraTowers::usual_Click);
			// 
			// rapidFire
			// 
			this->rapidFire->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->rapidFire->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rapidFire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rapidFire->Location = System::Drawing::Point(229, 788);
			this->rapidFire->Name = L"rapidFire";
			this->rapidFire->Size = System::Drawing::Size(306, 80);
			this->rapidFire->TabIndex = 14;
			this->rapidFire->Text = L"����� ����������������(25)";
			this->rapidFire->UseVisualStyleBackColor = false;
			this->rapidFire->Visible = false;
			this->rapidFire->Click += gcnew System::EventHandler(this, &ShopExtraTowers::rapidFire_Click);
			// 
			// SniperTower
			// 
			this->SniperTower->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SniperTower->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SniperTower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SniperTower->Location = System::Drawing::Point(541, 789);
			this->SniperTower->Name = L"SniperTower";
			this->SniperTower->Size = System::Drawing::Size(200, 80);
			this->SniperTower->TabIndex = 15;
			this->SniperTower->Text = L"����� �������(25)";
			this->SniperTower->UseVisualStyleBackColor = false;
			this->SniperTower->Visible = false;
			this->SniperTower->Click += gcnew System::EventHandler(this, &ShopExtraTowers::SniperTower_Click);
			// 
			// escape
			// 
			this->escape->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->escape->Cursor = System::Windows::Forms::Cursors::Hand;
			this->escape->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->escape->Location = System::Drawing::Point(747, 788);
			this->escape->Name = L"escape";
			this->escape->Size = System::Drawing::Size(134, 80);
			this->escape->TabIndex = 16;
			this->escape->Text = L"������";
			this->escape->UseVisualStyleBackColor = false;
			this->escape->Visible = false;
			this->escape->Click += gcnew System::EventHandler(this, &ShopExtraTowers::escape_Click);
			// 
			// upDmg
			// 
			this->upDmg->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->upDmg->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upDmg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->upDmg->Location = System::Drawing::Point(4, 788);
			this->upDmg->Name = L"upDmg";
			this->upDmg->Size = System::Drawing::Size(351, 80);
			this->upDmg->TabIndex = 17;
			this->upDmg->Text = L"��������� ����";
			this->upDmg->UseVisualStyleBackColor = false;
			this->upDmg->Visible = false;
			this->upDmg->Click += gcnew System::EventHandler(this, &ShopExtraTowers::upDmg_Click);
			// 
			// upRange
			// 
			this->upRange->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->upRange->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upRange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->upRange->Location = System::Drawing::Point(361, 788);
			this->upRange->Name = L"upRange";
			this->upRange->Size = System::Drawing::Size(337, 80);
			this->upRange->TabIndex = 18;
			this->upRange->Text = L"��������� ���������";
			this->upRange->UseVisualStyleBackColor = false;
			this->upRange->Visible = false;
			this->upRange->Click += gcnew System::EventHandler(this, &ShopExtraTowers::upRange_Click);
			// 
			// exit2
			// 
			this->exit2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->exit2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit2->Location = System::Drawing::Point(715, 789);
			this->exit2->Name = L"exit2";
			this->exit2->Size = System::Drawing::Size(164, 79);
			this->exit2->TabIndex = 19;
			this->exit2->Text = L"�����";
			this->exit2->UseVisualStyleBackColor = false;
			this->exit2->Visible = false;
			this->exit2->Click += gcnew System::EventHandler(this, &ShopExtraTowers::exit2_Click);
			// 
			// moneyInfo
			// 
			this->moneyInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->moneyInfo->Location = System::Drawing::Point(665, 96);
			this->moneyInfo->Name = L"moneyInfo";
			this->moneyInfo->Size = System::Drawing::Size(214, 115);
			this->moneyInfo->TabIndex = 20;
			// 
			// ShopExtraTowers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(891, 880);
			this->Controls->Add(this->moneyInfo);
			this->Controls->Add(this->exit2);
			this->Controls->Add(this->upRange);
			this->Controls->Add(this->upDmg);
			this->Controls->Add(this->escape);
			this->Controls->Add(this->SniperTower);
			this->Controls->Add(this->rapidFire);
			this->Controls->Add(this->usual);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Boost);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->upgrade);
			this->Controls->Add(this->By);
			this->Name = L"ShopExtraTowers";
			this->Text = L"ShopExtraTowers";
			this->Load += gcnew System::EventHandler(this, &ShopExtraTowers::ShopExtraTowers_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShopExtraTowers_Load(System::Object^ sender, System::EventArgs^ e) {
		// �������� ����� �� States
		moneyInfo->Text = L"��������:" + States::Instance->Money + "\n��������:" + States::Instance->Booster;
		auto map = States::Instance->Map;
		cli::array<System::Windows::Forms::Control^, 2>^ mapVisual;
		int enemysCount = 0;
		int rows = 13;
		int cols = 13;
		// ������� ������ PictureBox ��� ������������
		mapVisual = gcnew cli::array<System::Windows::Forms::Control^, 2>(rows, cols);

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (map[i, j] == 3) {// ��� ����� ������� ������
					auto button = gcnew System::Windows::Forms::Button();
					button->Width = 50;
					button->Height = 50;
					button->Top = i * 50;
					button->Left = j * 50;
					button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					button->BackColor = System::Drawing::Color::Gray;

					button->Tag = gcnew System::Tuple<int, int>(i, j);
					button->Click += gcnew System::EventHandler(this, &ShopExtraTowers::OnTowerButtonClick);
					mapVisual[i, j] = button;
					this->Controls->Add(button);
				}
				else {
					auto pictureBox = gcnew System::Windows::Forms::PictureBox();
					pictureBox->Width = 50;
					pictureBox->Height = 50;
					pictureBox->Top = i * 50;
					pictureBox->Left = j * 50;
					pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					
					// ������������� ���� ������ �� ������ �������� �����
					switch (map[i, j]) {
					case 1: //����
						pictureBox->BackColor = System::Drawing::Color::Green;
						break;
					case 2://������
						pictureBox->BackColor = System::Drawing::Color::Brown;
						break;
					case 4://������� �����
						pictureBox->BackColor = System::Drawing::Color::Red;
						break;
					}
					
					// ��������� ������ �� �����
					mapVisual[i, j] = pictureBox;
					this->Controls->Add(mapVisual[i, j]);
				}

			}
		}
	}

	public:
		void OnTowerButtonClick(System::Object^ sender, System::EventArgs^ e) {
			auto button = safe_cast<System::Windows::Forms::Button^>(sender);

			// �������� ���������� ������ �� Tag
			auto coords = safe_cast<System::Tuple<int, int>^>(button->Tag);
			int row = coords->Item1;
			int col = coords->Item2;
			switch (row) {
			case 2:
				if (col == 4) towerNumber = 0;
				if (col == 7) towerNumber = 1;
				if (col == 11) towerNumber = 2;
				break;
			case 4:
				if (col == 1) towerNumber = 3;
				if (col == 7) towerNumber = 4;
				break;
			case 6:
				if (col == 7) towerNumber = 5;
				if (col == 11) towerNumber = 6;
				break;
			case 7:
				if (col == 2) towerNumber = 7;
				if (col == 4) towerNumber = 8;
				break;
			case 9:
				if (col == 8) towerNumber = 9;
				break;
			case 10:
				if (col == 1) towerNumber = 10;
				if (col == 5) towerNumber = 11;
				break;
			}
			By->Visible = true;
			upgrade->Visible = true;
			Del->Visible = true;
			Boost->Visible = true;
			usual->Visible = false;
			rapidFire->Visible = false;
			SniperTower->Visible = false;
			escape->Visible = false;
			auto map = States::Instance->Map;
			label2->Text = "������� = " + States::Instance->Towers[towerNumber]->getLvl() + " ���� = " + States::Instance->Towers[towerNumber]->getDamage() + " ��������� = " + States::Instance->Towers[towerNumber]->getRange();
			label2->Visible = true;
			upDmg->Visible = false;
			upRange->Visible = false;
			exit2->Visible = false;
			towerNumber++;
			label1->Text = "������� ����� �" + towerNumber;
			towerNumber--;
		}

	private: System::Void By_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Visible = false;
		label1->Text = "�������� ��� �����:";
		usual->Visible = true;
		rapidFire->Visible = true;
		SniperTower->Visible = true;
		escape->Visible = true;
		By->Visible = false;
		upgrade->Visible = false;
		Del->Visible = false;
		Boost->Visible = false;
		Exit->Visible = false;

	}
	private: System::Void upgrade_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "��������� ��������� = " + States::Instance->Towers[towerNumber]->getLvl() * 5;
		label2->Text = "������� = " + States::Instance->Towers[towerNumber]->getLvl() + " ���� = " + States::Instance->Towers[towerNumber]->getDamage() + " ��������� = " + States::Instance->Towers[towerNumber]->getRange();
		label2->Visible = true;
		upDmg->Visible = true;
		upRange->Visible = true;
		exit2->Visible = true;
		By->Visible = false;
		upgrade->Visible = false;
		Del->Visible = false;
		Boost->Visible = false;
		Exit->Visible = false;

	}
	private: System::Void Del_Click(System::Object^ sender, System::EventArgs^ e) {
		if (States::Instance->Towers[towerNumber]->getLvl() != 0) {
			System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("�� �������, ��� ������ ������� �����?\n�������� �� ����� ����������!", "�������� �����", System::Windows::Forms::MessageBoxButtons::YesNo);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				States::Instance->Towers[towerNumber]->Del();
				System::Windows::Forms::MessageBox::Show("����� ���� �������.", "�������� �����", System::Windows::Forms::MessageBoxButtons::OK);
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("��� ����� ��� �� ���������!", "������", System::Windows::Forms::MessageBoxButtons::OK);
		}
		label1->Text = "�������� �����(����� ������ �� �����)";
		By->Visible = false;
		upgrade->Visible = false;
		Del->Visible = false;
		Boost->Visible = false;
	}
	private: System::Void Boost_Click(System::Object^ sender, System::EventArgs^ e) {
		if (States::Instance->Booster != 0) {
			if (!States::Instance->Towers[towerNumber]->isBoosted()) {
				States::Instance->Towers[towerNumber]->Boost();
				States::Instance->Booster--;
				moneyInfo->Text = L"��������:" + States::Instance->Money + "\n��������:" + States::Instance->Booster;
				System::Windows::Forms::MessageBox::Show("����� ������� �������! ���������������� ��������� �����,�� ���� �������� �� 10.", "�������� �����", System::Windows::Forms::MessageBoxButtons::OK);
			}
			else {
				System::Windows::Forms::MessageBox::Show("����� ��� �������!", "������", System::Windows::Forms::MessageBoxButtons::OK);
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("� ��� ��� ��������! �������� �� ����� ������ ��� ������.", "������", System::Windows::Forms::MessageBoxButtons::OK);
		}
		label1->Text = "�������� �����(����� ������ �� �����)";
		By->Visible = false;
		upgrade->Visible = false;
		Del->Visible = false;
		Boost->Visible = false;
	}
	private: System::Void usual_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((States::Instance->Money >= 10) && (States::Instance->Towers[towerNumber]->getLvl() == 0)) {
			States::Instance->Money -= 10;
			States::Instance->Towers[towerNumber]->Build(15,2,1,false);
			System::Windows::Forms::MessageBox::Show("����� ��������� �������!", "������� �����", System::Windows::Forms::MessageBoxButtons::OK);
			moneyInfo->Text = L"��������:" + States::Instance->Money + "\n��������:" + States::Instance->Booster;
		}
		else if(States::Instance->Money < 10) {
			System::Windows::Forms::MessageBox::Show("� ��� ������������ ��� ����� �������!", "������������ �������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("��� ����� ��� ���������!", "������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void rapidFire_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((States::Instance->Money >= 25) && (States::Instance->Towers[towerNumber]->getLvl() == 0)) {
			States::Instance->Money -= 25;
			States::Instance->Towers[towerNumber]->Build(10,2,1,true);
			System::Windows::Forms::MessageBox::Show("����� ��������� �������!", "������� �����", System::Windows::Forms::MessageBoxButtons::OK);
			moneyInfo->Text = L"��������:" + States::Instance->Money + "\n��������:" + States::Instance->Booster;
		}
		else if (States::Instance->Money < 25) {
			System::Windows::Forms::MessageBox::Show("� ��� ������������ ��� ����� �������!", "������������ �������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("��� ����� ��� ���������!", "������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void SniperTower_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((States::Instance->Money >= 25) && (States::Instance->Towers[towerNumber]->getLvl() == 0)) {
			States::Instance->Money -= 25;
			States::Instance->Towers[towerNumber]->Build(20, 5, 1, true);
			System::Windows::Forms::MessageBox::Show("����� ��������� �������!", "������� �����", System::Windows::Forms::MessageBoxButtons::OK);
			moneyInfo->Text = L"��������:" + States::Instance->Money + "\n��������:" + States::Instance->Booster;
		}
		else if (States::Instance->Money < 25) {
			System::Windows::Forms::MessageBox::Show("� ��� ������������ ��� ����� �������!", "������������ �������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("��� ����� ��� ���������!", "������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void escape_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "�������� �����(����� ������ �� �����)";
		usual->Visible = false;
		rapidFire->Visible = false;
		SniperTower->Visible = false;
		escape->Visible = false;
		Exit->Visible = true;
	}
	private: System::Void upDmg_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((States::Instance->Money >= (States::Instance->Towers[towerNumber]->getLvl() * 5)) && (States::Instance->Towers[towerNumber]->getLvl() != 0)) {
			States::Instance->Money -= States::Instance->Towers[towerNumber]->getLvl() * 5;
			States::Instance->Towers[towerNumber]->upDmg();
			System::Windows::Forms::MessageBox::Show("����� �������� �������! ���� �������� �� 10.", "���������", System::Windows::Forms::MessageBoxButtons::OK);
			moneyInfo->Text = L"��������:" + States::Instance->Money + "\n��������:" + States::Instance->Booster;
			label1->Text = "��������� ��������� = " + States::Instance->Towers[towerNumber]->getLvl() * 5;
			label2->Text = "������� = " + States::Instance->Towers[towerNumber]->getLvl() + " ���� = " + States::Instance->Towers[towerNumber]->getDamage() + " ��������� = " + States::Instance->Towers[towerNumber]->getRange();
		}
		else if (States::Instance->Money < (States::Instance->Towers[towerNumber]->getLvl() * 5)) {
			System::Windows::Forms::MessageBox::Show("� ��� ������������ ��� ����� �������!", "������������ �������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("��� ����� ��� �������� �� ��������!", "������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void upRange_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((States::Instance->Money >= (States::Instance->Towers[towerNumber]->getLvl() * 5)) && (States::Instance->Towers[towerNumber]->getLvl() != 0)) {
			States::Instance->Money -= States::Instance->Towers[towerNumber]->getLvl() * 5;
			States::Instance->Towers[towerNumber]->upRange();
			System::Windows::Forms::MessageBox::Show("����� �������� �������! ��������� ��������� �� 1.", "���������", System::Windows::Forms::MessageBoxButtons::OK);
			moneyInfo->Text = L"��������:" + States::Instance->Money + "\n��������:" + States::Instance->Booster;
			label1->Text = "��������� ��������� = " + States::Instance->Towers[towerNumber]->getLvl() * 5;
			label2->Text = "������� = " + States::Instance->Towers[towerNumber]->getLvl() + " ���� = " + States::Instance->Towers[towerNumber]->getDamage() + " ��������� = " + States::Instance->Towers[towerNumber]->getRange();
		}
		else if (States::Instance->Money < (States::Instance->Towers[towerNumber]->getLvl() * 5)) {
			System::Windows::Forms::MessageBox::Show("� ��� ������������ ��� ����� �������!", "������������ �������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else {
			System::Windows::Forms::MessageBox::Show("��� ����� ��� �������� �� ��������!", "������!", System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void exit2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "�������� �����(����� ������ �� �����)";
		label2->Visible = false;
		upDmg->Visible = false;
		upRange->Visible = false;
		exit2->Visible = false;
		By->Visible = true;
		upgrade->Visible = true;
		Del->Visible = true;
		Boost->Visible = true;
		Exit->Visible = true;
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

};
}
