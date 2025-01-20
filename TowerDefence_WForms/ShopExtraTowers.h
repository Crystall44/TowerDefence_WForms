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
	/// —водка дл€ ShopExtraTowers
	/// </summary>
	public ref class ShopExtraTowers : public System::Windows::Forms::Form
	{
	public:
		ShopExtraTowers(void)
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
		~ShopExtraTowers()
		{
			if (components)
			{
				delete components;
			}
		}

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
			// ShopExtraTowers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"ShopExtraTowers";
			this->Text = L"ShopExtraTowers";
			this->Load += gcnew System::EventHandler(this, &ShopExtraTowers::ShopExtraTowers_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ShopExtraTowers_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
