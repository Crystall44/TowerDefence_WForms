#pragma once
#include"States.h"
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ShopMainTower
	/// </summary>
	public ref class ShopMainTower : public System::Windows::Forms::Form
	{
	public:
		ShopMainTower(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ShopMainTower()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ Upgrade;
	private: System::Windows::Forms::Button^ Heal;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ moneyInfo;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Upgrade = (gcnew System::Windows::Forms::Button());
			this->Heal = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->moneyInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(695, 129);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Главная башня";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Upgrade
			// 
			this->Upgrade->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Upgrade->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Upgrade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Upgrade->Location = System::Drawing::Point(243, 227);
			this->Upgrade->Name = L"Upgrade";
			this->Upgrade->Size = System::Drawing::Size(217, 61);
			this->Upgrade->TabIndex = 1;
			this->Upgrade->UseVisualStyleBackColor = false;
			this->Upgrade->Click += gcnew System::EventHandler(this, &ShopMainTower::Upgrade_Click);
			// 
			// Heal
			// 
			this->Heal->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Heal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Heal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Heal->Location = System::Drawing::Point(243, 310);
			this->Heal->Name = L"Heal";
			this->Heal->Size = System::Drawing::Size(217, 89);
			this->Heal->TabIndex = 2;
			this->Heal->UseVisualStyleBackColor = false;
			this->Heal->Click += gcnew System::EventHandler(this, &ShopMainTower::Heal_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(243, 423);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(217, 61);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &ShopMainTower::Exit_Click);
			// 
			// moneyInfo
			// 
			this->moneyInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->moneyInfo->Location = System::Drawing::Point(162, 109);
			this->moneyInfo->Name = L"moneyInfo";
			this->moneyInfo->Size = System::Drawing::Size(485, 115);
			this->moneyInfo->TabIndex = 21;
			// 
			// ShopMainTower
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(695, 507);
			this->Controls->Add(this->moneyInfo);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Heal);
			this->Controls->Add(this->Upgrade);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"ShopMainTower";
			this->Text = L"ShopMainTower";
			this->Load += gcnew System::EventHandler(this, &ShopMainTower::ShopMainTower_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShopMainTower_Load(System::Object^ sender, System::EventArgs^ e) {
		//Загрузка магазина
		Heal->Text = L"Восстановить здоровье(" + States::Instance->RepairCost + ")";
		Upgrade->Text = L"Улучшить(" + States::Instance->MainUpgradeCost + ")";
		moneyInfo->Text = L"Средства:" + States::Instance->Money + "\nБустеров:" + States::Instance->Booster + "\nЗдоровье главной башни:" + States::Instance->MainTower->getHp();
	}
	private: System::Void Upgrade_Click(System::Object^ sender, System::EventArgs^ e) {
		//Улучшить главную башню
		if (States::Instance->Money >= States::Instance->MainUpgradeCost && States::Instance->MainTower->getLvl() < 10) {
			//Если хватает средств и уровень < 10
			States::Instance->MainTower->upgrade();
			States::Instance->Money -= States::Instance->MainUpgradeCost;
			States::Instance->MainUpgradeCost += 20;
			System::Windows::Forms::MessageBox::Show("Главная башня улучшена успешно! Урон увеличен на 20.", "Улучшение главной башни", System::Windows::Forms::MessageBoxButtons::OK);
			moneyInfo->Text = L"Средства:" + States::Instance->Money + "\nБустеров:" + States::Instance->Booster + "\nЗдоровье главной башни:" + States::Instance->MainTower->getHp();
			Upgrade->Text = L"Улучшить(" + States::Instance->MainUpgradeCost + ")";
		}
		else if(States::Instance->Money < States::Instance->MainUpgradeCost) {
			//Если не хватает средств
			System::Windows::Forms::MessageBox::Show("У вас недостаточно средств!", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
		}
		else {
			//Если главная башня прокачана на максимум
			System::Windows::Forms::MessageBox::Show("Главная башня прокачана на максимум!", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void Heal_Click(System::Object^ sender, System::EventArgs^ e) {
		//Восстановить здоровье
		if (States::Instance->Money >= States::Instance->RepairCost) {
			//Если хватает средств - восстанавливем здоровье
			States::Instance->MainTower->setHp(States::Instance->MainTower->getHp() + 500);
			States::Instance->Money -= States::Instance->RepairCost;
			States::Instance->RepairCost += 10;
			if (States::Instance->MainTower->getHp() > 3000) States::Instance->MainTower->setHp(3000);
			moneyInfo->Text = L"Средства:" + States::Instance->Money + "\nБустеров:" + States::Instance->Booster + "\nЗдоровье главной башни:" + States::Instance->MainTower->getHp();
			Heal->Text = L"Восстановить здоровье(" + States::Instance->RepairCost + ")";
		}
		else {
			//Если не хватает средств
			System::Windows::Forms::MessageBox::Show("У вас недостаточно средств!", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
		}
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		//Выход из формы
		this->Close();
	}
};
}
