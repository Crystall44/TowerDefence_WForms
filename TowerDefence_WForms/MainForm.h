#pragma once
#include"Info.h"
#include"AboutEnemys.h"
#include"Game.h"
#include <stdio.h>
#include <iostream>
using namespace std;
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ exit;

	private: System::Windows::Forms::Button^ enemys;

	private: System::Windows::Forms::Button^ info;

	private: System::Windows::Forms::Button^ play;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->enemys = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::Button());
			this->play = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1117, 187);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tower Defence";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->exit);
			this->panel1->Controls->Add(this->enemys);
			this->panel1->Controls->Add(this->info);
			this->panel1->Controls->Add(this->play);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 190);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1117, 605);
			this->panel1->TabIndex = 1;
			// 
			// exit
			// 
			this->exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->exit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(475, 410);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(201, 94);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Выход";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MainForm::exit_Click);
			// 
			// enemys
			// 
			this->enemys->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->enemys->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->enemys->Cursor = System::Windows::Forms::Cursors::Hand;
			this->enemys->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enemys->Location = System::Drawing::Point(475, 275);
			this->enemys->Name = L"enemys";
			this->enemys->Size = System::Drawing::Size(201, 94);
			this->enemys->TabIndex = 2;
			this->enemys->Text = L"О врагах";
			this->enemys->UseVisualStyleBackColor = false;
			this->enemys->Click += gcnew System::EventHandler(this, &MainForm::enemys_Click);
			// 
			// info
			// 
			this->info->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->info->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->info->Cursor = System::Windows::Forms::Cursors::Hand;
			this->info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info->Location = System::Drawing::Point(475, 145);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(201, 94);
			this->info->TabIndex = 1;
			this->info->Text = L"Об игре";
			this->info->UseVisualStyleBackColor = false;
			this->info->Click += gcnew System::EventHandler(this, &MainForm::info_Click);
			// 
			// play
			// 
			this->play->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->play->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->play->Location = System::Drawing::Point(475, 23);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(201, 94);
			this->play->TabIndex = 0;
			this->play->Text = L"Играть";
			this->play->UseVisualStyleBackColor = false;
			this->play->Click += gcnew System::EventHandler(this, &MainForm::play_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1117, 795);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		//Выход из приложения
		Application::Exit();
	}
	private: System::Void enemys_Click(System::Object^ sender, System::EventArgs^ e) {
		//О врагах(другая форма)
		AboutEnemys^ about = gcnew AboutEnemys;
		this->Hide();
		about->ShowDialog();
		this->Show();
	}
	private: System::Void info_Click(System::Object^ sender, System::EventArgs^ e) {
		//Информация(другая форма)
		Info^ infor = gcnew Info;
		infor->Show();
	}
	private: System::Void play_Click(System::Object^ sender, System::EventArgs^ e) {
		//Играть(другая форма)
		Game^ game = gcnew Game();
		this->Hide();
		game->ShowDialog();
		this->Show();
	}
};
}

