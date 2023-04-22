#pragma once
#include <wx/wx.h>
class HelloWorld: public wxApp
{
public:
	virtual bool OnInit();
};

DECLARE_APP(HelloWorld)
