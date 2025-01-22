#pragma once
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ExtraAboutEnemys
	/// </summary>
	public ref class ExtraAboutEnemys : public System::Windows::Forms::Form
	{
	public:
		ExtraAboutEnemys(void)
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
		~ExtraAboutEnemys()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Zombe;
	private: System::Windows::Forms::Label^ Skeleton;
	private: System::Windows::Forms::Label^ AngryZombe;
	private: System::Windows::Forms::Label^ FastEnemy;
	private: System::Windows::Forms::Label^ Fly;
	private: System::Windows::Forms::Label^ Boss;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ aboutZ;
	private: System::Windows::Forms::Label^ aboutS;
	private: System::Windows::Forms::Label^ aboutA;
	private: System::Windows::Forms::Label^ aboutF;
	private: System::Windows::Forms::Label^ aboutFly;
	private: System::Windows::Forms::Label^ aboutB;
	protected:






	protected:






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExtraAboutEnemys::typeid));
			this->Zombe = (gcnew System::Windows::Forms::Label());
			this->Skeleton = (gcnew System::Windows::Forms::Label());
			this->AngryZombe = (gcnew System::Windows::Forms::Label());
			this->FastEnemy = (gcnew System::Windows::Forms::Label());
			this->Fly = (gcnew System::Windows::Forms::Label());
			this->Boss = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->aboutZ = (gcnew System::Windows::Forms::Label());
			this->aboutS = (gcnew System::Windows::Forms::Label());
			this->aboutA = (gcnew System::Windows::Forms::Label());
			this->aboutF = (gcnew System::Windows::Forms::Label());
			this->aboutFly = (gcnew System::Windows::Forms::Label());
			this->aboutB = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// Zombe
			// 
			this->Zombe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Zombe->Location = System::Drawing::Point(13, 13);
			this->Zombe->Name = L"Zombe";
			this->Zombe->Size = System::Drawing::Size(225, 50);
			this->Zombe->TabIndex = 0;
			this->Zombe->Text = L"Zombe(зомби)";
			// 
			// Skeleton
			// 
			this->Skeleton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Skeleton->Location = System::Drawing::Point(12, 170);
			this->Skeleton->Name = L"Skeleton";
			this->Skeleton->Size = System::Drawing::Size(265, 50);
			this->Skeleton->TabIndex = 1;
			this->Skeleton->Text = L"Skeleton(Скелет)";
			// 
			// AngryZombe
			// 
			this->AngryZombe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AngryZombe->Location = System::Drawing::Point(13, 327);
			this->AngryZombe->Name = L"AngryZombe";
			this->AngryZombe->Size = System::Drawing::Size(398, 50);
			this->AngryZombe->TabIndex = 2;
			this->AngryZombe->Text = L"Angry Zombe(Злой зомби)";
			// 
			// FastEnemy
			// 
			this->FastEnemy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FastEnemy->Location = System::Drawing::Point(12, 484);
			this->FastEnemy->Name = L"FastEnemy";
			this->FastEnemy->Size = System::Drawing::Size(395, 50);
			this->FastEnemy->TabIndex = 3;
			this->FastEnemy->Text = L"FastEnemy(Быстрый враг)";
			// 
			// Fly
			// 
			this->Fly->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Fly->Location = System::Drawing::Point(12, 641);
			this->Fly->Name = L"Fly";
			this->Fly->Size = System::Drawing::Size(155, 50);
			this->Fly->TabIndex = 4;
			this->Fly->Text = L"Fly(Муха)";
			// 
			// Boss
			// 
			this->Boss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Boss->Location = System::Drawing::Point(13, 798);
			this->Boss->Name = L"Boss";
			this->Boss->Size = System::Drawing::Size(181, 50);
			this->Boss->TabIndex = 5;
			this->Boss->Text = L"Boss(Босс)";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(244, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(283, 170);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(417, 327);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(414, 484);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(173, 641);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 50);
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(200, 798);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 50);
			this->pictureBox6->TabIndex = 11;
			this->pictureBox6->TabStop = false;
			// 
			// aboutZ
			// 
			this->aboutZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutZ->Location = System::Drawing::Point(13, 66);
			this->aboutZ->Name = L"aboutZ";
			this->aboutZ->Size = System::Drawing::Size(923, 101);
			this->aboutZ->TabIndex = 12;
			this->aboutZ->Text = resources->GetString(L"aboutZ.Text");
			// 
			// aboutS
			// 
			this->aboutS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutS->Location = System::Drawing::Point(12, 223);
			this->aboutS->Name = L"aboutS";
			this->aboutS->Size = System::Drawing::Size(924, 101);
			this->aboutS->TabIndex = 13;
			this->aboutS->Text = resources->GetString(L"aboutS.Text");
			// 
			// aboutA
			// 
			this->aboutA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutA->Location = System::Drawing::Point(13, 380);
			this->aboutA->Name = L"aboutA";
			this->aboutA->Size = System::Drawing::Size(923, 101);
			this->aboutA->TabIndex = 14;
			this->aboutA->Text = resources->GetString(L"aboutA.Text");
			// 
			// aboutF
			// 
			this->aboutF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutF->Location = System::Drawing::Point(13, 537);
			this->aboutF->Name = L"aboutF";
			this->aboutF->Size = System::Drawing::Size(923, 101);
			this->aboutF->TabIndex = 15;
			this->aboutF->Text = L"Быстрый враг - соответствует названию, быстрый и опасный враг.Двигается очень быс"
				L"тро, наносит много урона, но у него совсем мало здоровья.";
			// 
			// aboutFly
			// 
			this->aboutFly->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutFly->Location = System::Drawing::Point(13, 694);
			this->aboutFly->Name = L"aboutFly";
			this->aboutFly->Size = System::Drawing::Size(923, 101);
			this->aboutFly->TabIndex = 16;
			this->aboutFly->Text = L"Муха - самый слабый и обычный враг. Имеет очень малое количество урона и здоровья"
				L". Не представляет опастности почти всегда, кроме случаев когда их много, или они"
				L" скрываются среди врагов.";
			// 
			// aboutB
			// 
			this->aboutB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutB->Location = System::Drawing::Point(13, 851);
			this->aboutB->Name = L"aboutB";
			this->aboutB->Size = System::Drawing::Size(923, 101);
			this->aboutB->TabIndex = 17;
			this->aboutB->Text = L"Босс - выходит на каждую 5 волну, и только 1 босс на карте. Очень медленный, но о"
				L"чень опасный враг.Огромное количество здоровья и урона, до него игра кажеться со"
				L"всем лёгкой,не так ли\?";
			// 
			// ExtraAboutEnemys
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(948, 954);
			this->Controls->Add(this->aboutB);
			this->Controls->Add(this->aboutFly);
			this->Controls->Add(this->aboutF);
			this->Controls->Add(this->aboutA);
			this->Controls->Add(this->aboutS);
			this->Controls->Add(this->aboutZ);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Boss);
			this->Controls->Add(this->Fly);
			this->Controls->Add(this->FastEnemy);
			this->Controls->Add(this->AngryZombe);
			this->Controls->Add(this->Skeleton);
			this->Controls->Add(this->Zombe);
			this->Name = L"ExtraAboutEnemys";
			this->Text = L"ExtraAboutEnemys";
			this->Load += gcnew System::EventHandler(this, &ExtraAboutEnemys::ExtraAboutEnemys_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExtraAboutEnemys_Load(System::Object^ sender, System::EventArgs^ e) {
		//Загрузить цвета врагов
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(30, 89, 69);
		pictureBox2->BackColor = System::Drawing::Color::FromArgb(165, 165, 165);
		pictureBox3->BackColor = System::Drawing::Color::FromArgb(72, 6, 7);
		pictureBox4->BackColor = System::Drawing::Color::FromArgb(244, 169, 0);
		pictureBox5->BackColor = System::Drawing::Color::FromArgb(148, 0, 211);
		pictureBox6->BackColor = System::Drawing::Color::Black;
	}
};
}
