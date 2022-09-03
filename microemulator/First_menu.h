#pragma once
#include <Windows.h>
#include "tinyxml2.h"
#include "SingIn.h"
#include "Registration.h"

namespace microemulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ First_menu
	/// </summary>
	public ref class First_menu : public System::Windows::Forms::Form
	{
	public:
		First_menu(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~First_menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âîéòèÂÏğîôèëüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüÎò÷åòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîôèëüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âîéòèÂÏğîôèëüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ çàğåãèñòğèğîâàòüñÿToolStripMenuItem;
	private: System::Windows::Forms::Label^ screen;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ RE;
	private: System::Windows::Forms::Label^ RZ;
	private: System::Windows::Forms::Label^ RY;
	private: System::Windows::Forms::Label^ RX;
	private: System::Windows::Forms::Label^ RT;
	private: System::Windows::Forms::Label^ R4;
	private: System::Windows::Forms::Label^ R5;
	private: System::Windows::Forms::Label^ R6;
	private: System::Windows::Forms::Label^ R7;
	private: System::Windows::Forms::Label^ R8;
	private: System::Windows::Forms::Label^ R9;
	private: System::Windows::Forms::Label^ RA;
	private: System::Windows::Forms::Label^ RB;
	private: System::Windows::Forms::Label^ RD;
	private: System::Windows::Forms::Label^ RC;
	private: System::Windows::Forms::Label^ R2;
	private: System::Windows::Forms::Label^ R3;
	private: System::Windows::Forms::Label^ R1;
	private: System::Windows::Forms::Label^ RF;
	private: System::Windows::Forms::Label^ order;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(First_menu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âîéòèÂÏğîôèëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüÎò÷åòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîôèëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âîéòèÂÏğîôèëüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàğåãèñòğèğîâàòüñÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->screen = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->RE = (gcnew System::Windows::Forms::Label());
			this->RZ = (gcnew System::Windows::Forms::Label());
			this->RY = (gcnew System::Windows::Forms::Label());
			this->RX = (gcnew System::Windows::Forms::Label());
			this->RT = (gcnew System::Windows::Forms::Label());
			this->R4 = (gcnew System::Windows::Forms::Label());
			this->R5 = (gcnew System::Windows::Forms::Label());
			this->R6 = (gcnew System::Windows::Forms::Label());
			this->R7 = (gcnew System::Windows::Forms::Label());
			this->R8 = (gcnew System::Windows::Forms::Label());
			this->R9 = (gcnew System::Windows::Forms::Label());
			this->RA = (gcnew System::Windows::Forms::Label());
			this->RB = (gcnew System::Windows::Forms::Label());
			this->RD = (gcnew System::Windows::Forms::Label());
			this->RC = (gcnew System::Windows::Forms::Label());
			this->R2 = (gcnew System::Windows::Forms::Label());
			this->R3 = (gcnew System::Windows::Forms::Label());
			this->R1 = (gcnew System::Windows::Forms::Label());
			this->RF = (gcnew System::Windows::Forms::Label());
			this->order = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Teal;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->ïğîôèëüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñîõğàíèòüÊîäToolStripMenuItem,
					this->âîéòèÂÏğîôèëüToolStripMenuItem, this->ñîçäàòüÎò÷åòToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->ìåíşToolStripMenuItem->Text = L"ìåíş";
			// 
			// ñîõğàíèòüÊîäToolStripMenuItem
			// 
			this->ñîõğàíèòüÊîäToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->ñîõğàíèòüÊîäToolStripMenuItem->Name = L"ñîõğàíèòüÊîäToolStripMenuItem";
			this->ñîõğàíèòüÊîäToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->ñîõğàíèòüÊîäToolStripMenuItem->Text = L"ñîõğàíèòü êîä";
			// 
			// âîéòèÂÏğîôèëüToolStripMenuItem
			// 
			this->âîéòèÂÏğîôèëüToolStripMenuItem->Name = L"âîéòèÂÏğîôèëüToolStripMenuItem";
			this->âîéòèÂÏğîôèëüToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->âîéòèÂÏğîôèëüToolStripMenuItem->Text = L"îòêğûòü êîä";
			// 
			// ñîçäàòüÎò÷åòToolStripMenuItem
			// 
			this->ñîçäàòüÎò÷åòToolStripMenuItem->Name = L"ñîçäàòüÎò÷åòToolStripMenuItem";
			this->ñîçäàòüÎò÷åòToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->ñîçäàòüÎò÷åòToolStripMenuItem->Text = L"ñîçäàòü îò÷åò";
			// 
			// ïğîôèëüToolStripMenuItem
			// 
			this->ïğîôèëüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âîéòèÂÏğîôèëüToolStripMenuItem1,
					this->çàğåãèñòğèğîâàòüñÿToolStripMenuItem
			});
			this->ïğîôèëüToolStripMenuItem->Name = L"ïğîôèëüToolStripMenuItem";
			this->ïğîôèëüToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->ïğîôèëüToolStripMenuItem->Text = L"ïğîôèëü";
			// 
			// âîéòèÂÏğîôèëüToolStripMenuItem1
			// 
			this->âîéòèÂÏğîôèëüToolStripMenuItem1->Name = L"âîéòèÂÏğîôèëüToolStripMenuItem1";
			this->âîéòèÂÏğîôèëüToolStripMenuItem1->Size = System::Drawing::Size(184, 22);
			this->âîéòèÂÏğîôèëüToolStripMenuItem1->Text = L"âîéòè â ïğîôèëü";
			this->âîéòèÂÏğîôèëüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &First_menu::âîéòèÂÏğîôèëüToolStripMenuItem1_Click);
			// 
			// çàğåãèñòğèğîâàòüñÿToolStripMenuItem
			// 
			this->çàğåãèñòğèğîâàòüñÿToolStripMenuItem->Name = L"çàğåãèñòğèğîâàòüñÿToolStripMenuItem";
			this->çàğåãèñòğèğîâàòüñÿToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->çàğåãèñòğèğîâàòüñÿToolStripMenuItem->Text = L"çàğåãèñòğèğîâàòüñÿ";
			this->çàğåãèñòğèğîâàòüñÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &First_menu::çàğåãèñòğèğîâàòüñÿToolStripMenuItem_Click);
			// 
			// screen
			// 
			this->screen->AutoSize = true;
			this->screen->BackColor = System::Drawing::Color::Green;
			this->screen->Location = System::Drawing::Point(73, 66);
			this->screen->Name = L"screen";
			this->screen->Size = System::Drawing::Size(0, 13);
			this->screen->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(79, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"F";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &First_menu::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(79, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(36, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"K";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &First_menu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(79, 291);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(36, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &First_menu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(79, 354);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(36, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &First_menu::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(79, 417);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(36, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &First_menu::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkGray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(79, 480);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(36, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"0";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &First_menu::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightGray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(121, 480);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(36, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L".";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &First_menu::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkGray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(121, 417);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(36, 23);
			this->button8->TabIndex = 12;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &First_menu::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(121, 354);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(36, 23);
			this->button9->TabIndex = 11;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &First_menu::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(121, 291);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(36, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &First_menu::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlText;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(121, 228);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(36, 23);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Ï>x";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &First_menu::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlText;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(121, 165);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(36, 23);
			this->button12->TabIndex = 8;
			this->button12->Text = L"->";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(163, 480);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(36, 23);
			this->button13->TabIndex = 19;
			this->button13->Text = L"/-/";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &First_menu::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkGray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(163, 417);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(36, 23);
			this->button14->TabIndex = 18;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &First_menu::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkGray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(163, 354);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(36, 23);
			this->button15->TabIndex = 17;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &First_menu::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkGray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(163, 291);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(36, 23);
			this->button16->TabIndex = 16;
			this->button16->Text = L"9";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &First_menu::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlText;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->Location = System::Drawing::Point(163, 228);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(36, 23);
			this->button17->TabIndex = 15;
			this->button17->Text = L"x>Ï";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &First_menu::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlText;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Location = System::Drawing::Point(163, 165);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(36, 23);
			this->button18->TabIndex = 14;
			this->button18->Text = L"<-";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::LightGray;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(205, 480);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(36, 23);
			this->button19->TabIndex = 25;
			this->button19->Text = L"ÂÏ";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &First_menu::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::LightGray;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(205, 417);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(36, 23);
			this->button20->TabIndex = 24;
			this->button20->Text = L"<->";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &First_menu::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::LightGray;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(205, 354);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(36, 23);
			this->button21->TabIndex = 23;
			this->button21->Text = L"+";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &First_menu::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::LightGray;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(205, 291);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(36, 23);
			this->button22->TabIndex = 22;
			this->button22->Text = L"-";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &First_menu::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ControlText;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button23->Location = System::Drawing::Point(205, 228);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(36, 23);
			this->button23->TabIndex = 21;
			this->button23->Text = L"ÁÏ";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlText;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button24->Location = System::Drawing::Point(205, 165);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(36, 23);
			this->button24->TabIndex = 20;
			this->button24->Text = L"B/0";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Crimson;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(247, 480);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(36, 23);
			this->button25->TabIndex = 31;
			this->button25->Text = L"ÑÕ";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &First_menu::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::LightGray;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(247, 417);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(36, 23);
			this->button26->TabIndex = 30;
			this->button26->Text = L"B^";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &First_menu::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::LightGray;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(247, 354);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(36, 23);
			this->button27->TabIndex = 29;
			this->button27->Text = L"*";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &First_menu::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::LightGray;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(247, 291);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(36, 23);
			this->button28->TabIndex = 28;
			this->button28->Text = L"/";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &First_menu::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ControlText;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button29->Location = System::Drawing::Point(247, 228);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(36, 23);
			this->button29->TabIndex = 27;
			this->button29->Text = L"ÏÏ";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ControlText;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button30->Location = System::Drawing::Point(247, 165);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(36, 23);
			this->button30->TabIndex = 26;
			this->button30->Text = L"ñ/Ï";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButton1->Location = System::Drawing::Point(309, 123);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(37, 18);
			this->radioButton1->TabIndex = 32;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"ğ";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButton2->Location = System::Drawing::Point(309, 149);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(48, 18);
			this->radioButton2->TabIndex = 33;
			this->radioButton2->Text = L"ãğä";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->radioButton3->Location = System::Drawing::Point(309, 176);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(36, 18);
			this->radioButton3->TabIndex = 34;
			this->radioButton3->Text = L"ã";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// RE
			// 
			this->RE->AutoSize = true;
			this->RE->BackColor = System::Drawing::Color::Gray;
			this->RE->Location = System::Drawing::Point(595, 401);
			this->RE->Name = L"RE";
			this->RE->Size = System::Drawing::Size(0, 13);
			this->RE->TabIndex = 35;
			// 
			// RZ
			// 
			this->RZ->AutoSize = true;
			this->RZ->BackColor = System::Drawing::Color::Gray;
			this->RZ->Location = System::Drawing::Point(492, 102);
			this->RZ->Name = L"RZ";
			this->RZ->Size = System::Drawing::Size(0, 13);
			this->RZ->TabIndex = 36;
			// 
			// RY
			// 
			this->RY->AutoSize = true;
			this->RY->BackColor = System::Drawing::Color::Gray;
			this->RY->Location = System::Drawing::Point(492, 127);
			this->RY->Name = L"RY";
			this->RY->Size = System::Drawing::Size(0, 13);
			this->RY->TabIndex = 37;
			// 
			// RX
			// 
			this->RX->AutoSize = true;
			this->RX->BackColor = System::Drawing::Color::Gray;
			this->RX->Location = System::Drawing::Point(492, 151);
			this->RX->Name = L"RX";
			this->RX->Size = System::Drawing::Size(0, 13);
			this->RX->TabIndex = 38;
			// 
			// RT
			// 
			this->RT->AutoSize = true;
			this->RT->BackColor = System::Drawing::Color::Gray;
			this->RT->Location = System::Drawing::Point(492, 76);
			this->RT->Name = L"RT";
			this->RT->Size = System::Drawing::Size(0, 13);
			this->RT->TabIndex = 39;
			// 
			// R4
			// 
			this->R4->AutoSize = true;
			this->R4->BackColor = System::Drawing::Color::Gray;
			this->R4->Location = System::Drawing::Point(595, 151);
			this->R4->Name = L"R4";
			this->R4->Size = System::Drawing::Size(0, 13);
			this->R4->TabIndex = 40;
			// 
			// R5
			// 
			this->R5->AutoSize = true;
			this->R5->BackColor = System::Drawing::Color::Gray;
			this->R5->Location = System::Drawing::Point(595, 176);
			this->R5->Name = L"R5";
			this->R5->Size = System::Drawing::Size(0, 13);
			this->R5->TabIndex = 41;
			// 
			// R6
			// 
			this->R6->AutoSize = true;
			this->R6->BackColor = System::Drawing::Color::Gray;
			this->R6->Location = System::Drawing::Point(595, 201);
			this->R6->Name = L"R6";
			this->R6->Size = System::Drawing::Size(0, 13);
			this->R6->TabIndex = 42;
			// 
			// R7
			// 
			this->R7->AutoSize = true;
			this->R7->BackColor = System::Drawing::Color::Gray;
			this->R7->Location = System::Drawing::Point(595, 225);
			this->R7->Name = L"R7";
			this->R7->Size = System::Drawing::Size(0, 13);
			this->R7->TabIndex = 43;
			// 
			// R8
			// 
			this->R8->AutoSize = true;
			this->R8->BackColor = System::Drawing::Color::Gray;
			this->R8->Location = System::Drawing::Point(595, 250);
			this->R8->Name = L"R8";
			this->R8->Size = System::Drawing::Size(0, 13);
			this->R8->TabIndex = 44;
			// 
			// R9
			// 
			this->R9->AutoSize = true;
			this->R9->BackColor = System::Drawing::Color::Gray;
			this->R9->Location = System::Drawing::Point(595, 275);
			this->R9->Name = L"R9";
			this->R9->Size = System::Drawing::Size(0, 13);
			this->R9->TabIndex = 45;
			// 
			// RA
			// 
			this->RA->AutoSize = true;
			this->RA->BackColor = System::Drawing::Color::Gray;
			this->RA->Location = System::Drawing::Point(595, 301);
			this->RA->Name = L"RA";
			this->RA->Size = System::Drawing::Size(0, 13);
			this->RA->TabIndex = 46;
			// 
			// RB
			// 
			this->RB->AutoSize = true;
			this->RB->BackColor = System::Drawing::Color::Gray;
			this->RB->Location = System::Drawing::Point(595, 326);
			this->RB->Name = L"RB";
			this->RB->Size = System::Drawing::Size(0, 13);
			this->RB->TabIndex = 47;
			// 
			// RD
			// 
			this->RD->AutoSize = true;
			this->RD->BackColor = System::Drawing::Color::Gray;
			this->RD->Location = System::Drawing::Point(595, 376);
			this->RD->Name = L"RD";
			this->RD->Size = System::Drawing::Size(0, 13);
			this->RD->TabIndex = 48;
			// 
			// RC
			// 
			this->RC->AutoSize = true;
			this->RC->BackColor = System::Drawing::Color::Gray;
			this->RC->Location = System::Drawing::Point(595, 351);
			this->RC->Name = L"RC";
			this->RC->Size = System::Drawing::Size(0, 13);
			this->RC->TabIndex = 49;
			// 
			// R2
			// 
			this->R2->AutoSize = true;
			this->R2->BackColor = System::Drawing::Color::Gray;
			this->R2->Location = System::Drawing::Point(595, 102);
			this->R2->Name = L"R2";
			this->R2->Size = System::Drawing::Size(0, 13);
			this->R2->TabIndex = 50;
			// 
			// R3
			// 
			this->R3->AutoSize = true;
			this->R3->BackColor = System::Drawing::Color::Gray;
			this->R3->Location = System::Drawing::Point(595, 127);
			this->R3->Name = L"R3";
			this->R3->Size = System::Drawing::Size(0, 13);
			this->R3->TabIndex = 51;
			// 
			// R1
			// 
			this->R1->AutoSize = true;
			this->R1->BackColor = System::Drawing::Color::Gray;
			this->R1->Location = System::Drawing::Point(595, 76);
			this->R1->Name = L"R1";
			this->R1->Size = System::Drawing::Size(0, 13);
			this->R1->TabIndex = 52;
			// 
			// RF
			// 
			this->RF->AutoSize = true;
			this->RF->BackColor = System::Drawing::Color::Gray;
			this->RF->Location = System::Drawing::Point(595, 426);
			this->RF->Name = L"RF";
			this->RF->Size = System::Drawing::Size(0, 13);
			this->RF->TabIndex = 53;
			// 
			// order
			// 
			this->order->AutoSize = true;
			this->order->BackColor = System::Drawing::Color::Green;
			this->order->Location = System::Drawing::Point(263, 66);
			this->order->Name = L"order";
			this->order->Size = System::Drawing::Size(0, 13);
			this->order->TabIndex = 54;
			// 
			// First_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->order);
			this->Controls->Add(this->RF);
			this->Controls->Add(this->R1);
			this->Controls->Add(this->R3);
			this->Controls->Add(this->R2);
			this->Controls->Add(this->RC);
			this->Controls->Add(this->RD);
			this->Controls->Add(this->RB);
			this->Controls->Add(this->RA);
			this->Controls->Add(this->R9);
			this->Controls->Add(this->R8);
			this->Controls->Add(this->R7);
			this->Controls->Add(this->R6);
			this->Controls->Add(this->R5);
			this->Controls->Add(this->R4);
			this->Controls->Add(this->RT);
			this->Controls->Add(this->RX);
			this->Controls->Add(this->RY);
			this->Controls->Add(this->RZ);
			this->Controls->Add(this->RE);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->screen);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"First_menu";
			this->Text = L"First_menu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ registerX = "0", ^ registerZ = "0", ^ registerY = "0", ^ registerT = "0",
			^ register1 = "0", ^ register2 = "0", ^ register3 = "0", ^ register4 = "0",
			^ register5 = "0", ^ register6 = "0", ^ register7 = "0", ^ register8 = "0",
			^ register9 = "0", ^ registerA = "0", ^ registerB = "0", ^ registerC = "0",
			^ registerD = "0", ^ registerE = "0", ^ register0 = "0", ^ num_order = "0";
		bool program_mode = false;
		bool writeX = false, readX = false;
		bool F_mode = false;
		bool K_mode = false;
	private: void update() {
		if (program_mode) {

		}
		else {
			this->screen->Text = registerX;
			this->RX->Text = registerX;
			this->RY->Text = registerY;
			this->RZ->Text = registerZ;
			this->RT->Text = registerT;
			this->R1->Text = register1;
			this->R2->Text = register2;
			this->R3->Text = register3;
			this->R4->Text = register4;
			this->R5->Text = register5;
			this->R6->Text = register6;
			this->R7->Text = register7;
			this->R8->Text = register8;
			this->R9->Text = register9;
			this->RA->Text = registerA;
			this->RB->Text = registerB;
			this->RC->Text = registerC;
			this->RD->Text = registerD;
			this->RE->Text = registerE;
			this->RF->Text = register0;
			writeX = false, readX = false;
			F_mode = false;
			K_mode = false;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		F_mode = true;
		K_mode = false;
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(pow(Convert::ToDouble(registerX), Convert::ToDouble(registerY)));
			}
			else if (K_mode) {

			}
			else {
				String^ num = registerY;
				registerY = registerX;
				registerX = num;
			}
			update();
		}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(tan(Convert::ToDouble(registerX)));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register9 = registerX;
			}
			else if (readX) {
				registerX = register9;
			}
			else {
				registerX += "9";
			}
			update();
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(cos(Convert::ToDouble(registerX)));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register8 = registerX;
			}
			else if (readX) {
				registerX = register8;
			}
			else {
				registerX += "8";
			}
			update();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(sin(Convert::ToDouble(registerX)));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register7 = registerX;
			}
			else if (readX) {
				registerX = register7;
			}
			else {
				registerX += "7";
			}
			update();
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(pow(tan(Convert::ToDouble(registerX)), -1.0));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register6 = registerX;
			}
			else if (readX) {
				registerX = register6;
			}
			else {
				registerX += "6";
			}
			update();
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(pow(cos(Convert::ToDouble(registerX)), -1.0));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register5 = registerX;
			}
			else if (readX) {
				registerX = register5;
			}
			else {
				registerX += "5";
			}
			update();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(pow(sin(Convert::ToDouble(registerX)), -1.0));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register4 = registerX;
			}
			else if (readX) {
				registerX = register4;
			}
			else {
				registerX += "4";
			}
			update();
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(logb(Convert::ToDouble(registerX)));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register3 = registerX;
			}
			else if (readX) {
				registerX = register3;
			}
			else {
				registerX += "3";
			}
			update();
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(log10(Convert::ToDouble(registerX)));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register2 = registerX;
			}
			else if (readX) {
				registerX = register2;
			}
			else {
				registerX += "2";
			}
			update();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(exp(Convert::ToDouble(registerX)));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register1 = registerX;
			}
			else if (readX) {
				registerX = register1;
			}
			else {
				registerX += "1";
			}
			update();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(pow(10.0, Convert::ToDouble(registerX)));
			}
			else if (K_mode) {

			}
			else if (writeX) {
				register0 = registerX;
			}
			else if (readX) {
				registerX = register0;
			}
			else {
				registerX += "0";
			}
			update();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {

			}
			else if (K_mode) {

			}
			else if (writeX) {
				registerA = registerX;
			}
			else if (readX) {
				registerX = registerA;
			}
			else {
				registerX += ",";
			}
			update();
		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(3.14159265359);
			}
			else if (K_mode) {

			}
			else {
				registerX = Convert::ToString(Convert::ToDouble(registerX) + Convert::ToDouble(registerY));
			}
			update();
		}
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(sqrt(Convert::ToDouble(registerX)));
			}
			else {
				registerX = Convert::ToString(Convert::ToDouble(registerY) - Convert::ToDouble(registerX));
			}
			update();
		}
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(1.0 / Convert::ToDouble(registerX));
			}
			else {
				registerX = Convert::ToString(Convert::ToDouble(registerY) / Convert::ToDouble(registerX));
			}
			update();
		}
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {
				registerX = Convert::ToString(pow(Convert::ToDouble(registerX), 2.0));
			}
			else {
				registerX = Convert::ToString(Convert::ToDouble(registerY) * Convert::ToDouble(registerX));
			}
			update();
		}
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {

			}
			else if (K_mode) {

			}
			else if (writeX) {
				registerD = registerX;
			}
			else if (readX) {
				registerX = registerD;
			}
			else {
				registerX = "0";
			}
			update();
		}
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {

			}
			else if (K_mode) {

			}
			else if (writeX) {
				registerE = registerX;
			}
			else if (readX) {
				registerX = registerE;
			}
			else {
				registerY = registerX;
				registerZ = registerY;
				registerT = registerY;
			}
			update();
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (F_mode) {

		}
		else {
			writeX = !writeX;
			readX = false;
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (F_mode) {

		}
		else {
			readX = !readX;
			writeX = false;
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {

			}
			else if (K_mode) {

			}
			else if (writeX) {
				registerB = registerX;
			}
			else if (readX) {
				registerX = registerB;
			}
			else {
				registerX = Convert::ToString(Convert::ToDouble(registerX) * (-1.0));
			}
			update();
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (program_mode) {

		}
		else {
			if (F_mode) {

			}
			else if (K_mode) {

			}
			else if (writeX) {
				registerC = registerX;
			}
			else if (readX) {
				registerX = registerC;
			}
			update();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		K_mode = true;
		F_mode = false;
	}
private: System::Void âîéòèÂÏğîôèëüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SingIn window;
	window.ShowDialog();
}
private: System::Void çàğåãèñòğèğîâàòüñÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Registration window;
	window.ShowDialog();
}
};
}
