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
	/// ������ ��� ShopExtraTowers
	/// </summary>
	public ref class ShopExtraTowers : public System::Windows::Forms::Form
	{
	public:
		ShopExtraTowers(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
