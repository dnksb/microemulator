#pragma once
#include "tinyxml2.h"
#include <iostream>
#include <string>
#include <string.h>

namespace microemulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"зарегистрироватьс€";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(92, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"логин";
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Registration";
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ name = "", ^ password = "";
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		name = this->textBox1->Text;
		password = this->textBox2->Text;
		tinyxml2::XMLDocument DB;
		if (DB.LoadFile("data_base.xml") == tinyxml2::XML_SUCCESS) {
			tinyxml2::XMLElement* user = DB.FirstChildElement("users");
			bool search = false;
			if (user != NULL) {
				user = user->FirstChildElement("user");
				if (user != NULL) {
					while (user != NULL) {
						std::string name_user = user->Attribute("name");
						System::String^ s = gcnew System::String(name_user.c_str());
						if (s == name) {
							search = true;
							MessageBox::Show("пользоваетель с таким именем уже существует");
							break;
						}
						user = user->NextSiblingElement("user");
					}
				}
			}

		}
	}
	};
}
