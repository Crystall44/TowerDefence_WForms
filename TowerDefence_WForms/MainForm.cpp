#include "MainForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace TowerDefenceWForms;

[STAThread]
int main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());
	return 0;
}


