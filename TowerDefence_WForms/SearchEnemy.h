#pragma once

namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SearchEnemy
	/// </summary>
	public ref class SearchEnemy : public System::Windows::Forms::Form
	{
	public:
		SearchEnemy(void)
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
		~SearchEnemy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit;
	protected:
	private: System::Windows::Forms::Button^ SearchByName;
	private: System::Windows::Forms::Button^ SearchByColor;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ escape;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ aboutFindEnemy;
	private: System::Windows::Forms::Label^ pct;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

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
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->SearchByName = (gcnew System::Windows::Forms::Button());
			this->SearchByColor = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->escape = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->aboutFindEnemy = (gcnew System::Windows::Forms::Label());
			this->pct = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(18, 263);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(201, 58);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &SearchEnemy::Exit_Click);
			// 
			// SearchByName
			// 
			this->SearchByName->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SearchByName->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchByName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SearchByName->Location = System::Drawing::Point(18, 70);
			this->SearchByName->Name = L"SearchByName";
			this->SearchByName->Size = System::Drawing::Size(201, 58);
			this->SearchByName->TabIndex = 1;
			this->SearchByName->Text = L"По имени";
			this->SearchByName->UseVisualStyleBackColor = false;
			this->SearchByName->Click += gcnew System::EventHandler(this, &SearchEnemy::SearchByName_Click);
			// 
			// SearchByColor
			// 
			this->SearchByColor->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SearchByColor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchByColor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SearchByColor->Location = System::Drawing::Point(18, 143);
			this->SearchByColor->Name = L"SearchByColor";
			this->SearchByColor->Size = System::Drawing::Size(201, 58);
			this->SearchByColor->TabIndex = 2;
			this->SearchByColor->Text = L"По картинке";
			this->SearchByColor->UseVisualStyleBackColor = false;
			this->SearchByColor->Click += gcnew System::EventHandler(this, &SearchEnemy::SearchByColor_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(619, 57);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Поиск по:";
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Search->Location = System::Drawing::Point(18, 143);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(201, 58);
			this->Search->TabIndex = 4;
			this->Search->Text = L"Поиск";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Visible = false;
			this->Search->Click += gcnew System::EventHandler(this, &SearchEnemy::Search_Click);
			// 
			// escape
			// 
			this->escape->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->escape->Cursor = System::Windows::Forms::Cursors::Hand;
			this->escape->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->escape->Location = System::Drawing::Point(18, 263);
			this->escape->Name = L"escape";
			this->escape->Size = System::Drawing::Size(201, 58);
			this->escape->TabIndex = 5;
			this->escape->Text = L"Назад";
			this->escape->UseVisualStyleBackColor = false;
			this->escape->Visible = false;
			this->escape->Click += gcnew System::EventHandler(this, &SearchEnemy::escape_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(18, 108);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(201, 20);
			this->maskedTextBox1->TabIndex = 6;
			this->maskedTextBox1->Visible = false;
			// 
			// aboutFindEnemy
			// 
			this->aboutFindEnemy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutFindEnemy->Location = System::Drawing::Point(12, 9);
			this->aboutFindEnemy->Name = L"aboutFindEnemy";
			this->aboutFindEnemy->Size = System::Drawing::Size(619, 192);
			this->aboutFindEnemy->TabIndex = 7;
			this->aboutFindEnemy->Visible = false;
			// 
			// pct
			// 
			this->pct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pct->Location = System::Drawing::Point(12, 204);
			this->pct->Name = L"pct";
			this->pct->Size = System::Drawing::Size(241, 47);
			this->pct->TabIndex = 8;
			this->pct->Text = L"Картинка врага - ";
			this->pct->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(259, 204);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(21, 70);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &SearchEnemy::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(77, 70);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &SearchEnemy::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(133, 70);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &SearchEnemy::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(189, 70);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 50);
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &SearchEnemy::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(301, 70);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 50);
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &SearchEnemy::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(245, 70);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(50, 50);
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &SearchEnemy::pictureBox7_Click);
			// 
			// SearchEnemy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(644, 517);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pct);
			this->Controls->Add(this->aboutFindEnemy);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->escape);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SearchByColor);
			this->Controls->Add(this->SearchByName);
			this->Controls->Add(this->Exit);
			this->Name = L"SearchEnemy";
			this->Text = L"SearchEnemy";
			this->Load += gcnew System::EventHandler(this, &SearchEnemy::SearchEnemy_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SearchByName_Click(System::Object^ sender, System::EventArgs^ e) {
		//Поиск по имени(отображения элементов для этого)
		SearchByColor->Visible = false;
		SearchByName->Visible = false;
		Exit->Visible = false;
		escape->Visible = true;
		Search->Visible = true;
		label1->Text = "Введите имя врага(Английский):";
		maskedTextBox1->Visible = true;
	}
	private: System::Void SearchByColor_Click(System::Object^ sender, System::EventArgs^ e) {
		//Поиск по цвету(отображения элементов для этого)
		label1->Text = "Выберите картинку врага:";
		SearchByColor->Visible = false;
		SearchByName->Visible = false;
		Exit->Visible = false;
		escape->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = true;
		pictureBox6->Visible = true;
		pictureBox7->Visible = true;
	}
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
	//Кнопка поиска(по имени)
	if (maskedTextBox1->Text != "") {
		System::String^ text = maskedTextBox1->Text->ToLower();
		//Проверка на ввод
		if (text == "zombe") {
			maskedTextBox1->Visible = false;
			Search->Visible = false;
			label1->Visible = false;
			maskedTextBox1->Text = "";
			pictureBox1->BackColor = System::Drawing::Color::FromArgb(30, 89, 69);
			pictureBox1->Visible = true;
			pct->Visible = true;
			aboutFindEnemy->Visible = true;
			aboutFindEnemy->Text = "Зомби - обычный враг, который имеет большое количество здоровья. Не представляет особой угрозы, но может быть щитом для других врагов, что делает его довольно опасным.Имеет малый урон и обычную скорость.";
		}
		else if (text == "skeleton") {
			maskedTextBox1->Visible = false;
			Search->Visible = false;
			label1->Visible = false;
			maskedTextBox1->Text = "";
			pictureBox1->BackColor = System::Drawing::Color::FromArgb(165, 165, 165);
			pictureBox1->Visible = true;
			pct->Visible = true;
			aboutFindEnemy->Visible = true;
			aboutFindEnemy->Text = "Скелет - обычный враг, который имеет мало здоровья, появляется часто.В одиночку не представляет никакой угрозы.Но могут создавать неприятности, ведь может появится сразу много скелетов за счёт их малой редкости.";
		}
		else if (text == "angry zombe" || text == "angry") {
			maskedTextBox1->Visible = false;
			Search->Visible = false;
			label1->Visible = false;
			maskedTextBox1->Text = "";
			pictureBox1->BackColor = System::Drawing::Color::FromArgb(72, 6, 7);
			pictureBox1->Visible = true;
			pct->Visible = true;
			aboutFindEnemy->Visible = true;
			aboutFindEnemy->Text = "Злой зомби - усиленный зомби, с меньшим количеством здоровья, но с большим уроном.Представляет сам по себе опасность, ведь как только его здоровье падает до половины - начинает двигаться в 2 раза быстрее.";
		}
		else if (text == "fastenemy" || text == "fast enemy" || text == "fast") {
			maskedTextBox1->Visible = false;
			Search->Visible = false;
			label1->Visible = false;
			maskedTextBox1->Text = "";
			pictureBox1->BackColor = System::Drawing::Color::FromArgb(244, 169, 0);
			pictureBox1->Visible = true;
			pct->Visible = true;
			aboutFindEnemy->Visible = true;
			aboutFindEnemy->Text = "Быстрый враг - соответствует названию, быстрый и опасный враг.Двигается очень быстро, наносит много урона, но у него совсем мало здоровья.";
		}
		else if (text == "fly") {
			maskedTextBox1->Visible = false;
			Search->Visible = false;
			label1->Visible = false;
			maskedTextBox1->Text = "";
			pictureBox1->BackColor = System::Drawing::Color::FromArgb(148, 0, 211);
			pictureBox1->Visible = true;
			pct->Visible = true;
			aboutFindEnemy->Visible = true;
			aboutFindEnemy->Text = "Муха - самый слабый и обычный враг. Имеет очень малое количество урона и здоровья. Не представляет опастности почти всегда, кроме случаев когда их много, или они скрываются среди врагов.";
		}
		else if (text == "boss") {
			maskedTextBox1->Visible = false;
			Search->Visible = false;
			label1->Visible = false;
			maskedTextBox1->Text = "";
			pictureBox1->BackColor = System::Drawing::Color::Black;
			pictureBox1->Visible = true;
			pct->Visible = true;
			aboutFindEnemy->Visible = true;
			aboutFindEnemy->Text = "Босс - выходит на каждую 5 волну, и только 1 босс на карте. Очень медленный, но очень опасный враг.Огромное количество здоровья и урона, до него игра кажеться совсем лёгкой,не так ли?";
		}
		else {//Если враг не найден
			System::Windows::Forms::MessageBox::Show("Враг не найден!", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
			maskedTextBox1->Text = "";
		}
	}
	else {//Если поле для ввода пустое
		System::Windows::Forms::MessageBox::Show("Поле для ввода пустое!", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK);
		maskedTextBox1->Text = "";
	}
}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		//Выход
		this->Close();
	}
	private: System::Void escape_Click(System::Object^ sender, System::EventArgs^ e) {
		//Назад(вернутся в изначальную форму,например,из поиска по имени. Скрытие многих элементов)
		maskedTextBox1->Text = "";
		aboutFindEnemy->Text = "";
		aboutFindEnemy->Visible = false;
		pictureBox1->Visible = false;
		pct->Visible = false;
		maskedTextBox1->Visible = false;
		Search->Visible = false;
		SearchByColor->Visible = true;
		SearchByName->Visible = true;
		Exit->Visible = true;
		escape->Visible = false;
		Search->Visible = false;
		label1->Text = "Поиск по:";
		label1->Visible = true;
		maskedTextBox1->Visible = false;
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Нажатие на 1 из цветов
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		label1->Visible = false;
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(30, 89, 69);
		pictureBox1->Visible = true;
		pct->Visible = true;
		aboutFindEnemy->Visible = true;
		aboutFindEnemy->Text = "Зомби - обычный враг, который имеет большое количество здоровья. Не представляет особой угрозы, но может быть щитом для других врагов, что делает его довольно опасным.Имеет малый урон и обычную скорость.";
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Нажатие на 1 из цветов
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(165, 165, 165);
		pictureBox1->Visible = true;
		pct->Visible = true;
		aboutFindEnemy->Visible = true;
		aboutFindEnemy->Text = "Скелет - обычный враг, который имеет мало здоровья, появляется часто.В одиночку не представляет никакой угрозы.Но могут создавать неприятности, ведь может появится сразу много скелетов за счёт их малой редкости.";
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Нажатие на 1 из цветов
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(72, 6, 7);
		pictureBox1->Visible = true;
		pct->Visible = true;
		aboutFindEnemy->Visible = true;
		aboutFindEnemy->Text = "Злой зомби - усиленный зомби, с меньшим количеством здоровья, но с большим уроном.Представляет сам по себе опасность, ведь как только его здоровье падает до половины - начинает двигаться в 2 раза быстрее.";
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		//Нажатие на 1 из цветов
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(244, 169, 0);
		pictureBox1->Visible = true;
		pct->Visible = true;
		aboutFindEnemy->Visible = true;
		aboutFindEnemy->Text = "Быстрый враг - соответствует названию, быстрый и опасный враг.Двигается очень быстро, наносит много урона, но у него совсем мало здоровья.";
	}
	private: System::Void SearchEnemy_Load(System::Object^ sender, System::EventArgs^ e) {
		//Загрузка формы(загрузка цветов врагов)
		pictureBox2->BackColor = System::Drawing::Color::FromArgb(30, 89, 69);
		pictureBox3->BackColor = System::Drawing::Color::FromArgb(165, 165, 165);
		pictureBox4->BackColor = System::Drawing::Color::FromArgb(72, 6, 7);
		pictureBox5->BackColor = System::Drawing::Color::FromArgb(244, 169, 0);
		pictureBox6->BackColor = System::Drawing::Color::FromArgb(148, 0, 211);
		pictureBox7->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		//Нажатие на 1 из цветов
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(148, 0, 211);
		pictureBox1->Visible = true;
		pct->Visible = true;
		aboutFindEnemy->Visible = true;
		aboutFindEnemy->Text = "Муха - самый слабый и обычный враг. Имеет очень малое количество урона и здоровья. Не представляет опастности почти всегда, кроме случаев когда их много, или они скрываются среди врагов.";
	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		//Нажатие на 1 из цветов
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox1->BackColor = System::Drawing::Color::Black;
		pictureBox1->Visible = true;
		pct->Visible = true;
		aboutFindEnemy->Visible = true;
		aboutFindEnemy->Text = "Босс - выходит на каждую 5 волну, и только 1 босс на карте. Очень медленный, но очень опасный враг.Огромное количество здоровья и урона, до него игра кажеться совсем лёгкой,не так ли?";
	}
};
}
