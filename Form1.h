#pragma once

#include <regex>
#include <string>
#include <iostream>
#include <cmath>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	/// 
	
	double a, b;
	int count;
	bool Sign = 1;

	
	



	void ReplaceStringInPlace(std::string& subject, const std::string& search,
		const std::string& replace) {
		size_t pos = 0;
		while ((pos = subject.find(search, pos)) != std::string::npos) {
			subject.replace(pos, search.length(), replace);
			pos += replace.length();
		}

	}



	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
			
		}
		void calculate()
		{
			try {
				switch (count)
				{
				case 1:
					b = a + System::Convert::ToDouble(result->Text);
					result->Text = b.ToString();
					break;
				case 2:
					b = a - System::Convert::ToDouble(result->Text);
					result->Text = b.ToString();
					break;
				case 3:
					b = a * System::Convert::ToDouble(result->Text);
					result->Text = b.ToString();
					break;
				case 4:
					
					if (System::Convert::ToDouble(result->Text) == 0)
					{
						result->Text = "Error/Ошибка";
					}
					else
					{
						b = (a) / (System::Convert::ToDouble(result->Text));
						result->Text = b.ToString();
						
					}
					break;

				case 5:
					b = sqrt(a);
					
					result->Text = b.ToString();
					break;

				case 6:
					if ((a == int(a)) && (System::Convert::ToDouble(result->Text) == (int)System::Convert::ToDouble(result->Text))) {
						b = (int)a % (int)System::Convert::ToDouble(result->Text);

						result->Text = b.ToString();
					}
					else {
						result->Clear();
						MessageBox::Show("К целоцисленному делению допускаются только ЦЕЛЫЕ числа.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					
					break;
				case 7:
					b = 1/a;

					result->Text = b.ToString();
					break;

					
				default:
					break;
				}

			}
			catch (...) {

			}
			

		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
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
	private: System::Windows::Forms::TextBox^ result;
	private: System::Windows::Forms::Label^ label1;






	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(53, 97);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(93, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(34, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(53, 137);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(34, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(93, 137);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(34, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(13, 177);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(34, 34);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(53, 177);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(34, 34);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(93, 177);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(34, 34);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(13, 217);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(34, 34);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(53, 217);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(34, 34);
			this->button11->TabIndex = 10;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(93, 217);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(34, 34);
			this->button12->TabIndex = 11;
			this->button12->Text = L"+\\-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(196, 217);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(34, 34);
			this->button13->TabIndex = 19;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(156, 217);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(34, 34);
			this->button14->TabIndex = 18;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(196, 177);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(34, 34);
			this->button15->TabIndex = 17;
			this->button15->Text = L"1/х";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(156, 177);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(34, 34);
			this->button16->TabIndex = 16;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(196, 137);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(34, 34);
			this->button17->TabIndex = 15;
			this->button17->Text = L"//";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(156, 137);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(34, 34);
			this->button18->TabIndex = 14;
			this->button18->Text = L"-";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(196, 97);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(34, 34);
			this->button19->TabIndex = 13;
			this->button19->Text = L"\t√";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(156, 97);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(34, 34);
			this->button20->TabIndex = 12;
			this->button20->Text = L"+";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(13, 57);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(74, 34);
			this->button21->TabIndex = 20;
			this->button21->Text = L"Backspace";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(93, 57);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(74, 34);
			this->button22->TabIndex = 21;
			this->button22->Text = L"CE";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(173, 57);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(57, 34);
			this->button23->TabIndex = 22;
			this->button23->Text = L"C";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(13, 21);
			this->result->Name = L"result";
			this->result->ReadOnly = true;
			this->result->Size = System::Drawing::Size(216, 20);
			this->result->TabIndex = 23;
			this->result->Text = L"0";
			this->result->Click += gcnew System::EventHandler(this, &Form1::result_Click);
			this->result->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->result->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::result_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(181, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 24;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(242, 259);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->result);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (result->Text == "0") {
			result->Text = "3";
		}
		else {
			result->Text = result->Text + "3";
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text = "4";
	}
	else {
		result->Text = result->Text + "4";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text = "0";
	}
	else {
		result->Text = result->Text + "0";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	result->Text = result->Text + ",";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Sign == true)
	{
		result->Text = "-" + result->Text;
		Sign = false;
	}
	else if (Sign == false)
	{
		
		System::String^ tmp = result->Text;
		tmp = tmp->Replace("-", "");
		result->Text = tmp;
		result->Text = result->Text->Replace("-", "");
		Sign = true;
		
	}
	
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		a = System::Convert::ToDouble(result->Text);
		result->Clear();
		count = 1;
		label1->Text = a.ToString() + "+";
		Sign = true;

	}

	catch (...) {
		System::Console::WriteLine("Error");
	}

	
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text = "1";
	}
	else {
		result->Text = result->Text + "1";
	}
}
private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text = "2";
	}
	else {
		result->Text = result->Text + "2";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text = "5";
	}
	else {
		result->Text = result->Text + "5";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text =  "6";
	}
	else {
		result->Text = result->Text + "6";
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text = "7";
	}
	else {
		result->Text = result->Text + "7";
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result->Text == "0") {
		result->Text = "8";
	}
	else {
		result->Text = result->Text + "8";
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if(result->Text == "0") {
		result->Text = "9";
	}
		else {
		result->Text = result->Text + "9";
		}
}
private: System::Void result_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8 && e->KeyChar != 42 && e->KeyChar != 43 && e->KeyChar != 44 && e->KeyChar != 45 && e->KeyChar != 47)
	{
		e->Handled = true;
	}
}
private: System::Void label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		a = System::Convert::ToDouble(result->Text);
		result->Clear();
		count = 2;
		label1->Text = a.ToString() + "-";
		Sign = true;
	}
	catch (...) {
		
		System::Console::WriteLine("Error");
	}
	
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
		a = System::Convert::ToDouble(result->Text);
		result->Clear();
		count = 3;
		label1->Text = a.ToString() + "*";
		Sign = true;

	}
	catch (...) {
		System::Console::WriteLine("Error");
		
	}
	
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	try{
		a = System::Convert::ToDouble(result->Text);
		result->Clear();
		count = 4;
		label1->Text = a.ToString() + "/";
		Sign = true;

	}

	catch (...) {
		System::Console::WriteLine("Error");
	}

	
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "";
	calculate();

	
	
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {

	result->Text = "";
	label1->Text = "";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {

	int lenght = result->Text->Length - 1;
	auto text = result->Text;
	result->Clear();
	for (int i = 0; i < lenght; i++)
	{
		result->Text = result->Text + text[i];
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		a = System::Convert::ToDouble(result->Text);
		result->Clear();
		count = 5;
		label1->Text = "sqrt(" + a.ToString() + ")";
		Sign = true;

	}

	catch (...) {
		System::Console::WriteLine("Error");
	}

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	result->Text = "";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		a = System::Convert::ToDouble(result->Text);
		result->Clear();
		count = 6;
		label1->Text = a.ToString() + "//";
		Sign = true;

	}

	catch (...) {
		System::Console::WriteLine("Error");
	}
}



private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		a = System::Convert::ToDouble(result->Text);
		result->Clear();
		count = 7;
		label1->Text = "1/" + a.ToString();
		Sign = true;

	}

	catch (...) {
		System::Console::WriteLine("Error");
	}
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
