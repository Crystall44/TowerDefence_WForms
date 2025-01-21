#pragma once
#include"ExtraAboutEnemys.h"
#include <vector>
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AboutEnemys
	/// </summary>
	public ref class AboutEnemys : public System::Windows::Forms::Form
	{
	public:
		AboutEnemys(void)
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
		~AboutEnemys()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:






	private: System::Windows::Forms::Button^ ExtraEnemys;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::Button^ SortByName;
	private: System::Windows::Forms::Button^ SortByHp;
	private: System::Windows::Forms::Button^ SortByDmg;
	private: System::Windows::Forms::Button^ SortBySpeed;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ SortByRare;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dmg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ speed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rare;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ExtraEnemys = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->SortByName = (gcnew System::Windows::Forms::Button());
			this->SortByHp = (gcnew System::Windows::Forms::Button());
			this->SortByDmg = (gcnew System::Windows::Forms::Button());
			this->SortBySpeed = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SortByRare = (gcnew System::Windows::Forms::Button());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dmg = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->speed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->num, this->name,
					this->hp, this->dmg, this->speed, this->rare
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(655, 323);
			this->dataGridView1->TabIndex = 0;
			// 
			// ExtraEnemys
			// 
			this->ExtraEnemys->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ExtraEnemys->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExtraEnemys->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExtraEnemys->Location = System::Drawing::Point(673, 12);
			this->ExtraEnemys->Name = L"ExtraEnemys";
			this->ExtraEnemys->Size = System::Drawing::Size(161, 85);
			this->ExtraEnemys->TabIndex = 1;
			this->ExtraEnemys->Text = L"Подробнее о врагах";
			this->ExtraEnemys->UseVisualStyleBackColor = false;
			this->ExtraEnemys->Click += gcnew System::EventHandler(this, &AboutEnemys::ExtraEnemys_Click);
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Search->Location = System::Drawing::Point(673, 103);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(161, 76);
			this->Search->TabIndex = 2;
			this->Search->Text = L"Поиск";
			this->Search->UseVisualStyleBackColor = false;
			// 
			// Sort
			// 
			this->Sort->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Sort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort->Location = System::Drawing::Point(673, 185);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(161, 74);
			this->Sort->TabIndex = 3;
			this->Sort->Text = L"Сортировка";
			this->Sort->UseVisualStyleBackColor = false;
			this->Sort->Click += gcnew System::EventHandler(this, &AboutEnemys::Sort_Click);
			// 
			// SortByName
			// 
			this->SortByName->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SortByName->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortByName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortByName->Location = System::Drawing::Point(12, 383);
			this->SortByName->Name = L"SortByName";
			this->SortByName->Size = System::Drawing::Size(136, 63);
			this->SortByName->TabIndex = 4;
			this->SortByName->Text = L"Имени";
			this->SortByName->UseVisualStyleBackColor = false;
			this->SortByName->Visible = false;
			this->SortByName->Click += gcnew System::EventHandler(this, &AboutEnemys::SortByName_Click);
			// 
			// SortByHp
			// 
			this->SortByHp->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SortByHp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortByHp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortByHp->Location = System::Drawing::Point(154, 383);
			this->SortByHp->Name = L"SortByHp";
			this->SortByHp->Size = System::Drawing::Size(147, 63);
			this->SortByHp->TabIndex = 5;
			this->SortByHp->Text = L"Здоровью";
			this->SortByHp->UseVisualStyleBackColor = false;
			this->SortByHp->Visible = false;
			this->SortByHp->Click += gcnew System::EventHandler(this, &AboutEnemys::SortByHp_Click);
			// 
			// SortByDmg
			// 
			this->SortByDmg->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SortByDmg->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortByDmg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortByDmg->Location = System::Drawing::Point(307, 383);
			this->SortByDmg->Name = L"SortByDmg";
			this->SortByDmg->Size = System::Drawing::Size(147, 63);
			this->SortByDmg->TabIndex = 6;
			this->SortByDmg->Text = L"Урону";
			this->SortByDmg->UseVisualStyleBackColor = false;
			this->SortByDmg->Visible = false;
			this->SortByDmg->Click += gcnew System::EventHandler(this, &AboutEnemys::SortByDmg_Click);
			// 
			// SortBySpeed
			// 
			this->SortBySpeed->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SortBySpeed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortBySpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortBySpeed->Location = System::Drawing::Point(460, 383);
			this->SortBySpeed->Name = L"SortBySpeed";
			this->SortBySpeed->Size = System::Drawing::Size(139, 63);
			this->SortBySpeed->TabIndex = 7;
			this->SortBySpeed->Text = L"Скорости";
			this->SortBySpeed->UseVisualStyleBackColor = false;
			this->SortBySpeed->Visible = false;
			this->SortBySpeed->Click += gcnew System::EventHandler(this, &AboutEnemys::SortBySpeed_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(673, 265);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(160, 70);
			this->Exit->TabIndex = 8;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &AboutEnemys::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 338);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Сортировать по:";
			this->label1->Visible = false;
			// 
			// SortByRare
			// 
			this->SortByRare->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->SortByRare->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortByRare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortByRare->Location = System::Drawing::Point(605, 383);
			this->SortByRare->Name = L"SortByRare";
			this->SortByRare->Size = System::Drawing::Size(139, 63);
			this->SortByRare->TabIndex = 10;
			this->SortByRare->Text = L"Редкости";
			this->SortByRare->UseVisualStyleBackColor = false;
			this->SortByRare->Visible = false;
			this->SortByRare->Click += gcnew System::EventHandler(this, &AboutEnemys::SortByRare_Click);
			// 
			// num
			// 
			this->num->HeaderText = L"№";
			this->num->Name = L"num";
			this->num->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"Имя";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// hp
			// 
			this->hp->HeaderText = L"Здоровье";
			this->hp->Name = L"hp";
			this->hp->ReadOnly = true;
			// 
			// dmg
			// 
			this->dmg->HeaderText = L"Урон";
			this->dmg->Name = L"dmg";
			this->dmg->ReadOnly = true;
			// 
			// speed
			// 
			this->speed->HeaderText = L"Скорость";
			this->speed->Name = L"speed";
			this->speed->ReadOnly = true;
			// 
			// rare
			// 
			this->rare->HeaderText = L"Редкость";
			this->rare->Name = L"rare";
			this->rare->ReadOnly = true;
			// 
			// AboutEnemys
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(846, 492);
			this->Controls->Add(this->SortByRare);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->SortBySpeed);
			this->Controls->Add(this->SortByDmg);
			this->Controls->Add(this->SortByHp);
			this->Controls->Add(this->SortByName);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->ExtraEnemys);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"AboutEnemys";
			this->Text = L"AboutEnemys";
			this->Load += gcnew System::EventHandler(this, &AboutEnemys::AboutEnemys_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AboutEnemys_Load(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewRow^ row1 = gcnew DataGridViewRow();
		row1->Cells->Add(gcnew DataGridViewTextBoxCell());
		row1->Cells[0]->Value = 1;
		row1->Cells->Add(gcnew DataGridViewTextBoxCell());
		row1->Cells[1]->Value = "Zombe";
		row1->Cells->Add(gcnew DataGridViewTextBoxCell());
		row1->Cells[2]->Value = 100;
		row1->Cells->Add(gcnew DataGridViewTextBoxCell());
		row1->Cells[3]->Value = 10;
		row1->Cells->Add(gcnew DataGridViewTextBoxCell());
		row1->Cells[4]->Value = "Обычная";
		row1->Cells->Add(gcnew DataGridViewTextBoxCell());
		row1->Cells[5]->Value = 2;
		DataGridViewRow^ row2 = gcnew DataGridViewRow();
		row2->Cells->Add(gcnew DataGridViewTextBoxCell());
		row2->Cells[0]->Value = 2;
		row2->Cells->Add(gcnew DataGridViewTextBoxCell());
		row2->Cells[1]->Value = "Skeleton";
		row2->Cells->Add(gcnew DataGridViewTextBoxCell());
		row2->Cells[2]->Value = 30;
		row2->Cells->Add(gcnew DataGridViewTextBoxCell());
		row2->Cells[3]->Value = 20;
		row2->Cells->Add(gcnew DataGridViewTextBoxCell());
		row2->Cells[4]->Value = "Обычная";
		row2->Cells->Add(gcnew DataGridViewTextBoxCell());
		row2->Cells[5]->Value = 1;
		DataGridViewRow^ row3 = gcnew DataGridViewRow();
		row3->Cells->Add(gcnew DataGridViewTextBoxCell());
		row3->Cells[0]->Value = 3;
		row3->Cells->Add(gcnew DataGridViewTextBoxCell());
		row3->Cells[1]->Value = "Angry Zombe";
		row3->Cells->Add(gcnew DataGridViewTextBoxCell());
		row3->Cells[2]->Value = 75;
		row3->Cells->Add(gcnew DataGridViewTextBoxCell());
		row3->Cells[3]->Value = 25;
		row3->Cells->Add(gcnew DataGridViewTextBoxCell());
		row3->Cells[4]->Value = "Зависит от здоровья";
		row3->Cells->Add(gcnew DataGridViewTextBoxCell());
		row3->Cells[5]->Value = 3;
		DataGridViewRow^ row4 = gcnew DataGridViewRow();
		row4->Cells->Add(gcnew DataGridViewTextBoxCell());
		row4->Cells[0]->Value = 4;
		row4->Cells->Add(gcnew DataGridViewTextBoxCell());
		row4->Cells[1]->Value = "FastEnemy";
		row4->Cells->Add(gcnew DataGridViewTextBoxCell());
		row4->Cells[2]->Value = 50;
		row4->Cells->Add(gcnew DataGridViewTextBoxCell());
		row4->Cells[3]->Value = 20;
		row4->Cells->Add(gcnew DataGridViewTextBoxCell());
		row4->Cells[4]->Value = "Быстрая";
		row4->Cells->Add(gcnew DataGridViewTextBoxCell());
		row4->Cells[5]->Value = 3;
		DataGridViewRow^ row5 = gcnew DataGridViewRow();
		row5->Cells->Add(gcnew DataGridViewTextBoxCell());
		row5->Cells[0]->Value = 5;
		row5->Cells->Add(gcnew DataGridViewTextBoxCell());
		row5->Cells[1]->Value = "Fly";
		row5->Cells->Add(gcnew DataGridViewTextBoxCell());
		row5->Cells[2]->Value = 5;
		row5->Cells->Add(gcnew DataGridViewTextBoxCell());
		row5->Cells[3]->Value = 10;
		row5->Cells->Add(gcnew DataGridViewTextBoxCell());
		row5->Cells[4]->Value = "Обычная";
		row5->Cells->Add(gcnew DataGridViewTextBoxCell());
		row5->Cells[5]->Value = 1;
		DataGridViewRow^ row6 = gcnew DataGridViewRow();
		row6->Cells->Add(gcnew DataGridViewTextBoxCell());
		row6->Cells[0]->Value = 6;
		row6->Cells->Add(gcnew DataGridViewTextBoxCell());
		row6->Cells[1]->Value = "Boss";
		row6->Cells->Add(gcnew DataGridViewTextBoxCell());
		row6->Cells[2]->Value = 500;
		row6->Cells->Add(gcnew DataGridViewTextBoxCell());
		row6->Cells[3]->Value = 50;
		row6->Cells->Add(gcnew DataGridViewTextBoxCell());
		row6->Cells[4]->Value = "Медленная";
		row6->Cells->Add(gcnew DataGridViewTextBoxCell());
		row6->Cells[5]->Value = 4;
		this->dataGridView1->Rows->Add(row1);
		this->dataGridView1->Rows->Add(row2);
		this->dataGridView1->Rows->Add(row3);
		this->dataGridView1->Rows->Add(row4);
		this->dataGridView1->Rows->Add(row5);
		this->dataGridView1->Rows->Add(row6);
	}
	private: System::Void ExtraEnemys_Click(System::Object^ sender, System::EventArgs^ e) {
		ExtraAboutEnemys^ extraenemys = gcnew ExtraAboutEnemys;
		this->Hide();
		extraenemys->ShowDialog();
		this->Show();
	}
	private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
		SortByDmg->Show();
		SortByHp->Show();
		SortByName->Show();
		SortByRare->Show();
		SortBySpeed->Show();
		label1->Show();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void SortByName_Click(System::Object^ sender, System::EventArgs^ e) {
	SortDataGridView(1, System::ComponentModel::ListSortDirection::Ascending);
	SortByDmg->Hide();
	SortByHp->Hide();
	SortByName->Hide();
	SortByRare->Hide();
	SortBySpeed->Hide();
	label1->Hide();
}
private: System::Void SortByHp_Click(System::Object^ sender, System::EventArgs^ e) {
	SortDataGridView(2, System::ComponentModel::ListSortDirection::Ascending);
	SortByDmg->Hide();
	SortByHp->Hide();
	SortByName->Hide();
	SortByRare->Hide();
	SortBySpeed->Hide();
	label1->Hide();
}
private: System::Void SortByDmg_Click(System::Object^ sender, System::EventArgs^ e) {
	SortDataGridView(3, System::ComponentModel::ListSortDirection::Ascending);
	SortByDmg->Hide();
	SortByHp->Hide();
	SortByName->Hide();
	SortByRare->Hide();
	SortBySpeed->Hide();
	label1->Hide();
}
private: System::Void SortBySpeed_Click(System::Object^ sender, System::EventArgs^ e) {
	SortDataGridView(4, System::ComponentModel::ListSortDirection::Ascending);
	SortByDmg->Hide();
	SortByHp->Hide();
	SortByName->Hide();
	SortByRare->Hide();
	SortBySpeed->Hide();
	label1->Hide();
}
private: System::Void SortByRare_Click(System::Object^ sender, System::EventArgs^ e) {
	SortDataGridView(5, System::ComponentModel::ListSortDirection::Ascending);
	SortByDmg->Hide();
	SortByHp->Hide();
	SortByName->Hide();
	SortByRare->Hide();
	SortBySpeed->Hide();
	label1->Hide();
}
private:
	private: void SortDataGridView(int columnIndex, System::ComponentModel::ListSortDirection sortDirection)
	{
		// Sorting rows by 'Age' (second column)
		if (sortDirection == System::ComponentModel::ListSortDirection::Ascending)
		{
			dataGridView1->Sort(dataGridView1->Columns[columnIndex], System::ComponentModel::ListSortDirection::Ascending);
		}
		else
		{
			dataGridView1->Sort(dataGridView1->Columns[columnIndex], System::ComponentModel::ListSortDirection::Descending);
		}
	}
};
}
