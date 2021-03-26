#pragma once
#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <stdlib.h>

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âû÷èñëèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âû÷èñëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(92, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Âû÷èñëèòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(281, 302);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 282);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 26);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 318);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(111, 26);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(103, 282);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"b";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(79, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Óêàæèòå êîíöû îòğåçêîâ:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(272, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Êîğåíü óğîâíåíèÿ:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(42, 71);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(435, 166);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(276, 370);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 32);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Î÷èñòèòü";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gainsboro;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ìåíşToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(522, 36);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âû÷èñëèòüToolStripMenuItem,
					this->î÷èñòèòüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(69, 30);
			this->ìåíşToolStripMenuItem->Text = L"Ôàéë";
			// 
			// âû÷èñëèòüToolStripMenuItem
			// 
			this->âû÷èñëèòüToolStripMenuItem->Name = L"âû÷èñëèòüToolStripMenuItem";
			this->âû÷èñëèòüToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->âû÷èñëèòüToolStripMenuItem->Text = L"Âû÷èñëèòü";
			this->âû÷èñëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âû÷èñëèòüToolStripMenuItem_Click);
			// 
			// î÷èñòèòüToolStripMenuItem
			// 
			this->î÷èñòèòüToolStripMenuItem->Name = L"î÷èñòèòüToolStripMenuItem";
			this->î÷èñòèòüToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->î÷èñòèòüToolStripMenuItem->Text = L"Î÷èñòèòü";
			this->î÷èñòèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(522, 462);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Ìåòîä äåëåíèÿ îòğåçêà ïîïîëàì";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		double a = System::Convert::ToDouble(textBox1->Text);
		double b = System::Convert::ToDouble(textBox2->Text);

		float result = Count(a, b);
		label1->Text = System::Convert::ToString(result);

	}

	public:
	float Function(float x) {
		float f = log(x) + sqrt(3.73) - pow((pow((x - 2), 2)), 1 / 3.0) - (x / 2);
		return f;
	}

	float Count(int a, int b) { //êîììåíòàğèè ïî ôóíêöèè
		float eps = 0.0001;
		float c = (a + b) / 2;

		while (Function(c) > eps) {

			if (Function(c)>0) {
				b = c;
			}
			else {
				a = c;
			}
			c = (a + b) / 2;
		}
		return c;
	}
public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
}
public: System::Void âû÷èñëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	double a = System::Convert::ToDouble(textBox1->Text);
	double b = System::Convert::ToDouble(textBox2->Text);

	float result = Count(a, b);
	label1->Text = System::Convert::ToString(result);
}

private: System::Void î÷èñòèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
}

private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}
};

}
