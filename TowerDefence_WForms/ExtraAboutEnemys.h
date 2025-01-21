#pragma once
namespace TowerDefenceWForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ExtraAboutEnemys
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ExtraAboutEnemys()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// ExtraAboutEnemys
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1046, 948);
			this->Name = L"ExtraAboutEnemys";
			this->Text = L"ExtraAboutEnemys";
			this->Load += gcnew System::EventHandler(this, &ExtraAboutEnemys::ExtraAboutEnemys_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExtraAboutEnemys_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void By_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
