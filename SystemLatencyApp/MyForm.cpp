#pragma once
#include "MyForm.h"
#include <windows.h>
#include <iostream>


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SystemLatencyApp::MyForm mainForm;
	Application::Run(% mainForm);
	return 0;
}