#pragma once
#include "Registration.h"
#include "tinyxml2.h"

namespace microemulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SingIn
	/// </summary>
	public ref class SingIn : public System::Windows::Forms::Form
	{
	public:
		SingIn(void)
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
		~SingIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"логин";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"пароль";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SingIn::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"зарегистрироватьс€";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SingIn::button2_Click);
			// 
			// SingIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"SingIn";
			this->Text = L"SingIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ name = "", ^ password = "";
	public: bool search = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		name = this->textBox1->Text;
		password = this->textBox2->Text;
		tinyxml2::XMLDocument DB;
		if (DB.LoadFile("data_base.xml") == tinyxml2::XML_SUCCESS) {
			tinyxml2::XMLElement* user = DB.FirstChildElement("users");
			if (user != NULL) {
				user = user->FirstChildElement("user");
				if (user != NULL) {
					while (user != NULL) {
						std::string name_user = user->Attribute("name");
						System::String^ s = gcnew System::String(name_user.c_str());
						if (s == name) {
							search = true;
							std::string password_user = user->Attribute("password");
							System::String^ p = gcnew System::String(password_user.c_str());
							if (password == p) {
								MessageBox::Show("успешно вошли в профиль");
								this->Close();
								break;
							}
							else {
								MessageBox::Show("пароль не верный");
							}
						}
						user = user->NextSiblingElement("user");
					}
				}
			}
			if (!search) {
				MessageBox::Show("такой профиль не найден");
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Registration window;
		window.ShowDialog();
		this->Close();
	}
	};
}
