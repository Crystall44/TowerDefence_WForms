#pragma once
#include"ShopMainTower.h"
#include"ShopExtraTowers.h"
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Shop
	/// </summary>
	public ref class Shop : public System::Windows::Forms::Form
	{
	public:
		Shop(void)
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
		~Shop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ Towers;
	private: System::Windows::Forms::Button^ MainTower;
	private: System::Windows::Forms::Label^ label1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->moneyInfo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Towers = (gcnew System::Windows::Forms::Button());
			this->MainTower = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->moneyInfo);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->Towers);
			this->panel1->Controls->Add(this->MainTower);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(765, 608);
			this->panel1->TabIndex = 0;
			// 
			// moneyInfo
			// 
			this->moneyInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->moneyInfo->Location = System::Drawing::Point(269, 96);
			this->moneyInfo->Name = L"moneyInfo";
			this->moneyInfo->Size = System::Drawing::Size(433, 115);
			this->moneyInfo->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(765, 129);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Магазин";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Exit
			// 
			this->Exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Exit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(232, 473);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(303, 88);
			this->Exit->TabIndex = 2;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Shop::Exit_Click);
			// 
			// Towers
			// 
			this->Towers->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Towers->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Towers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Towers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Towers->Location = System::Drawing::Point(232, 354);
			this->Towers->Name = L"Towers";
			this->Towers->Size = System::Drawing::Size(303, 90);
			this->Towers->TabIndex = 1;
			this->Towers->Text = L"Вспомогательные башни";
			this->Towers->UseVisualStyleBackColor = false;
			this->Towers->Click += gcnew System::EventHandler(this, &Shop::Towers_Click);
			// 
			// MainTower
			// 
			this->MainTower->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->MainTower->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->MainTower->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MainTower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainTower->Location = System::Drawing::Point(232, 235);
			this->MainTower->Name = L"MainTower";
			this->MainTower->Size = System::Drawing::Size(303, 94);
			this->MainTower->TabIndex = 0;
			this->MainTower->Text = L"Главная башня";
			this->MainTower->UseVisualStyleBackColor = false;
			this->MainTower->Click += gcnew System::EventHandler(this, &Shop::MainTower_Click);
			// 
			// Shop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(765, 608);
			this->Controls->Add(this->panel1);
			this->Name = L"Shop";
			this->Text = L"Shop";
			this->Load += gcnew System::EventHandler(this, &Shop::Shop_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Shop_Load(System::Object^ sender, System::EventArgs^ e) {
		//Загрузка магазина - показ средств
		moneyInfo->Text = L"Средства:" + States::Instance->Money + "\nБустеров:" + States::Instance->Booster;
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		//Выход из магазина
		this->Close();
	}
private: System::Void MainTower_Click(System::Object^ sender, System::EventArgs^ e) {
	//Главная башня(другая форма)
	ShopMainTower^ mainT = gcnew ShopMainTower;
	this->Hide();
	mainT->ShowDialog();
	moneyInfo->Text = L"Средства:" + States::Instance->Money + "\nБустеров:" + States::Instance->Booster;
	this->Show();
}
private: System::Void Towers_Click(System::Object^ sender, System::EventArgs^ e) {
	//Вспомогательные башни(другая форма)
	ShopExtraTowers^ extraT = gcnew ShopExtraTowers;
	this->Hide();
	extraT->ShowDialog();
	moneyInfo->Text = L"Средства:" + States::Instance->Money + "\nБустеров:" + States::Instance->Booster;
	this->Show();
}
};
}
