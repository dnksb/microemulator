#include "First_menu.h"
#include <WinUser.h>
#include <Windows.h>
#include <cstdlib>
using namespace microemulator;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	microemulator::First_menu form;
	form.set_command();
	Application::Run(% form);
}