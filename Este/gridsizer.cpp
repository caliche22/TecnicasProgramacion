#include "gridsizer.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1019, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, 1017, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1018, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1016, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1015, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1012, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1010, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1013, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1014, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}



string setstring(int a){
	stringstream ss;
	ss<<a;
	string tot=ss.str();
	return tot;
}

//void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	//nClicks += 1;
	//cout<<nClicks<<endl;
//}


void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	//cout<<nClicks<<endl;
	if (nClicks==1){
		valor1 = 1;
		display->Clear();
		display->SetValue(setstring(valor1));
		
	}
	else{
	 	if (nClicks==2){
			valor2 = 1;
			display->Clear();
			display->SetValue(setstring(valor2));
		}
	}

}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	//cout<<nClicks<<endl;
	if (nClicks==1){
		valor1 = 2;
		display->Clear();
		display->SetValue(setstring(valor1));

	}
	else {
		if (nClicks==2){
			valor2 = 2;
			display->Clear();
		     	display->SetValue(setstring(valor2));

		}
	}
	
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	//cout<<nClicks<<endl;
	if (nClicks==1){
		valor1 = 3;
		display->Clear();
		display->SetValue(setstring(valor1));

	}

	else {
		if (nClicks==2){
			valor2 = 3;
			display->Clear();
			display->SetValue(setstring(valor2));

		}
	}
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)){
        nClicks +=1;
        //cout<<nClicks<<endl;
        if (nClicks==1){
                 valor1 = 4;
                 display->Clear();
		 display->SetValue(setstring(valor1));

         } 
         else {
               if (nClicks==2){
                          valor2 = 4;
                          display->Clear();
			  display->SetValue(setstring(valor2));

                }
             }
} 

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 5;
		display->Clear();
		display->SetValue(setstring(valor1));

	}
	else{
		if (nClicks==2){
			valor2 = 5;
			display->Clear();
			display->SetValue(setstring(valor2));

		}
	}
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 6;
		display->Clear();
		display->SetValue(setstring(valor1));

	}
	else{
		if (nClicks==2){
			valor2 = 6;
			display->Clear();
			display->SetValue(setstring(valor2));

		}
	}
}
void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 7;
		display->Clear();
		display->SetValue(setstring(valor1));

	}
	else{
		if (nClicks==2){
			valor2 = 7;
			display->Clear();
			display->SetValue(setstring(valor2));

		}
	}
}

void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 8;
		display->Clear();
		display->SetValue(setstring(valor1));

	}
	else{
		if (nClicks==2){
			valor2 = 8;
			display->Clear();
		 	display->SetValue(setstring(valor2));

		}
	}
}

void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 9;
		display->Clear();
		display->SetValue(setstring(valor1));

	}
	else{
		if (nClicks==2){
			valor2 = 9;
			display->Clear();
			display->SetValue(setstring(valor2));

		}
	}
}

void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==1){
		valor1 = 0;
		display->Clear();
		display->SetValue(setstring(valor1));

	}
	else{
		if (nClicks==2){
			valor2 = 0;
			display->Clear();
			display->SetValue(setstring(valor2));

		}
	}
}




void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	int total = valor1 + valor2;
	display->Clear();
	display->SetValue(setstring(valor1)+" "+"+"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtPrd (wxCommandEvent& WXUNUSED (event)){
	int total = valor1 * valor2;
	display->Clear();
	display->SetValue(setstring(valor1)+" "+"*"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtRst (wxCommandEvent& WXUNUSED (event)){
	int total = valor1 - valor2;
	display->Clear();
	display->SetValue(setstring(valor1)+" "+"-"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)){
	 float total = valor1/valor2;
	 display->Clear();
	 display->SetValue(setstring(valor1)+" "+"/"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtClose (wxCommandEvent& WXUNUSED (event)){
	Close(TRUE);
}

void GridSizer::onBtBck (wxCommandEvent& WXUNUSED (event)){
	nClicks +=1;
	if (nClicks==2){
		valor1 = 0;
	}
	else{
		if (nClicks==3){
			valor2 = 0;
		}
	}
	nClicks = 0;
	display->Clear();
}


BEGIN_EVENT_TABLE(GridSizer, wxFrame)
   // EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1015,  GridSizer::onBtPrd)
    EVT_BUTTON(1012,  GridSizer::onBtRst)
    EVT_BUTTON(1016,  GridSizer::onBtDiv)
    EVT_BUTTON(1003,  GridSizer::onBt3)
    EVT_BUTTON(1004,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1006,  GridSizer::onBt6)
    EVT_BUTTON(1007,  GridSizer::onBt7)
    EVT_BUTTON(1008,  GridSizer::onBt8)
    EVT_BUTTON(1009,  GridSizer::onBt9)
    EVT_BUTTON(1010,  GridSizer::onBt0)
    EVT_BUTTON(1018,  GridSizer::onBtClose)
    EVT_BUTTON(1019,  GridSizer::onBtBck)
END_EVENT_TABLE()
