#include "MainWindow.h"

using namespace StudentRecordsManager;

[STAThreadAttribute]
int main()
{
	Application::Run(gcnew MainWindow());
	return 0;
}

