#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include "tinyxml2.h"
#include <fstream>

namespace microemulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ OpenCode
	/// </summary>
	public ref class OpenCode : public System::Windows::Forms::Form
	{
	public:
		OpenCode(void)
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
		~OpenCode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"открыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OpenCode::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"название";
			// 
			// OpenCode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"OpenCode";
			this->Text = L"OpenCode";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ name_p = "", ^ name = "", ^ cod;
	public: int* code = new int[105];
	private: void MarshalString(String^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		name_p = this->textBox1->Text;
		tinyxml2::XMLDocument DB;
		if (DB.LoadFile("data_base.xml") == tinyxml2::XML_SUCCESS) {
			tinyxml2::XMLElement* user = DB.FirstChildElement("users");
			bool search = false;
			if (user != NULL) {
				user = user->FirstChildElement("user");
				if (user != NULL) {
					while (user != NULL) {
						std::string name_user = user->Attribute("name");
						String^ s = gcnew System::String(name_user.c_str());
						if (s == name) {
							user = user->FirstChildElement("project");
							while (user != NULL) {
								std::string name_project = user->Attribute("name");
								String^ p = gcnew System::String(name_project.c_str());
								if (p == name_p) {
									std::string com = user->Attribute("code");
									String^ c = gcnew System::String(com.c_str());
									cod = c;
									for (int i = 0; i < 105; i+=3) {
										code[i] = Convert::ToInt32(cod[i] + cod[i + 1]);
									}
									MessageBox::Show("успешно открыт");
								}
								user = user->NextSiblingElement("project");
							}
						}
						user = user->NextSiblingElement("user");
					}
				}
				MessageBox::Show("не получилось");
			}
		}
	}
	};
}
