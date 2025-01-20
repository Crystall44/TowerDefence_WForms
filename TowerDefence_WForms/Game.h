#pragma once
#include"AboutEnemys.h"
#include"Shop.h"
#include"Waves.h"
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ exit;
	protected:

	private: System::Windows::Forms::Button^ about;

	private: System::Windows::Forms::Button^ shop;

	private: System::Windows::Forms::Button^ start;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->about = (gcnew System::Windows::Forms::Button());
			this->shop = (gcnew System::Windows::Forms::Button());
			this->start = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->exit);
			this->panel1->Controls->Add(this->about);
			this->panel1->Controls->Add(this->shop);
			this->panel1->Controls->Add(this->start);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(783, 608);
			this->panel1->TabIndex = 0;
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(440, 367);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(208, 117);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Выход";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Game::exit_Click);
			// 
			// about
			// 
			this->about->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->about->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->about->Location = System::Drawing::Point(134, 367);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(223, 117);
			this->about->TabIndex = 2;
			this->about->Text = L"О врагах";
			this->about->UseVisualStyleBackColor = false;
			this->about->Click += gcnew System::EventHandler(this, &Game::about_Click);
			// 
			// shop
			// 
			this->shop->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->shop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->shop->Location = System::Drawing::Point(134, 201);
			this->shop->Name = L"shop";
			this->shop->Size = System::Drawing::Size(514, 124);
			this->shop->TabIndex = 1;
			this->shop->Text = L"Магазин";
			this->shop->UseVisualStyleBackColor = false;
			this->shop->Click += gcnew System::EventHandler(this, &Game::shop_Click);
			// 
			// start
			// 
			this->start->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start->Location = System::Drawing::Point(134, 39);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(514, 117);
			this->start->TabIndex = 0;
			this->start->Text = L"Начать новую волну";
			this->start->UseVisualStyleBackColor = false;
			this->start->Click += gcnew System::EventHandler(this, &Game::start_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(783, 608);
			this->Controls->Add(this->panel1);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Вы уверены, что хотите выйти?\nДанные будут удалены!", "Выход из игры", System::Windows::Forms::MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			States::Instance->Reset();
			this->Close();
		}
		else {
		}
	}
	private: System::Void about_Click(System::Object ^ sender, System::EventArgs ^ e) {
		AboutEnemys^ about = gcnew AboutEnemys;
		this->Hide();
		about->ShowDialog();
		this->Show();
	}
	private: System::Void shop_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Shop^ shop = gcnew Shop;
		this->Hide();
		shop->ShowDialog();
		this->Show();
	}
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
		Waves^ waves = gcnew Waves;
		this->Hide();
		waves->ShowDialog();
		this->Show();
	}
};
	}
