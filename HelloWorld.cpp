#include "HelloWorld.h"
#include <wx/wx.h>

IMPLEMENT_APP(HelloWorld)

// This is executed upon startup, like 'main()' in non-wxWidgets programs.
bool HelloWorld::OnInit()
{
	wxFrame* frame = new wxFrame((wxFrame*)NULL, -1, _T("Hello wxWidgets World"));
	frame->CreateStatusBar();
	frame->SetStatusText(_T("Hello World"));
	frame->Show(true);
	SetTopWindow(frame);
	return true;
}