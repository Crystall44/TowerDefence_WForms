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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->Upgrade->Location = System::Drawing::Point(252, 132);
			this->Upgrade->Name = L"Upgrade";
			this->Upgrade->Size = System::Drawing::Size(217, 61);
			this->Upgrade->TabIndex = 1;
			this->Upgrade->Text = L"Улучишить";
			this->Upgrade->UseVisualStyleBackColor = false;
			this->Upgrade->Click += gcnew System::EventHandler(this, &ShopMainTower::Upgrade_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(252, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(217, 89);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Восстановить здоровье";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(252, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(217, 61);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// ShopMainTower
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(695, 408);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
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
	}
	private: System::Void Upgrade_Click(System::Object^ sender, System::EventArgs^ e) {
		if (States::Instance->Money >= States::Instance->MainUpgradeCost) {
			States::Instance->MainTower->setHp(States::Instance->MainTower->getHp() + 500);
			States::Instance->RepairCost += 10;
			if (States::Instance->MainTower->getHp() > 3000) States::Instance->MainTower->setHp(3000);
		}
	}
};
}
