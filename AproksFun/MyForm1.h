#pragma once
#include "MyForm.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"

//#include "MyForm3.h"
namespace AproksFun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonLaba1;
	protected:

	private: System::Windows::Forms::Label^ labelLaba1;
	private: System::Windows::Forms::Label^ label2Laba;
	private: System::Windows::Forms::Button^ buttonQuad;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->buttonLaba1 = (gcnew System::Windows::Forms::Button());
			this->labelLaba1 = (gcnew System::Windows::Forms::Label());
			this->label2Laba = (gcnew System::Windows::Forms::Label());
			this->buttonQuad = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonLaba1
			// 
			this->buttonLaba1->Location = System::Drawing::Point(85, 13);
			this->buttonLaba1->Margin = System::Windows::Forms::Padding(4);
			this->buttonLaba1->Name = L"buttonLaba1";
			this->buttonLaba1->Size = System::Drawing::Size(121, 34);
			this->buttonLaba1->TabIndex = 0;
			this->buttonLaba1->Text = L"Aprox";
			this->buttonLaba1->UseVisualStyleBackColor = true;
			this->buttonLaba1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// labelLaba1
			// 
			this->labelLaba1->AutoSize = true;
			this->labelLaba1->Location = System::Drawing::Point(16, 20);
			this->labelLaba1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelLaba1->Name = L"labelLaba1";
			this->labelLaba1->Size = System::Drawing::Size(76, 25);
			this->labelLaba1->TabIndex = 1;
			this->labelLaba1->Text = L"Laba1:=";
			// 
			// label2Laba
			// 
			this->label2Laba->AutoSize = true;
			this->label2Laba->Location = System::Drawing::Point(16, 73);
			this->label2Laba->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2Laba->Name = L"label2Laba";
			this->label2Laba->Size = System::Drawing::Size(76, 25);
			this->label2Laba->TabIndex = 2;
			this->label2Laba->Text = L"Laba2:=";
			// 
			// buttonQuad
			// 
			this->buttonQuad->Location = System::Drawing::Point(85, 66);
			this->buttonQuad->Margin = System::Windows::Forms::Padding(4);
			this->buttonQuad->Name = L"buttonQuad";
			this->buttonQuad->Size = System::Drawing::Size(121, 34);
			this->buttonQuad->TabIndex = 3;
			this->buttonQuad->Text = L"Quad Integral";
			this->buttonQuad->UseVisualStyleBackColor = true;
			this->buttonQuad->Click += gcnew System::EventHandler(this, &MyForm1::buttonQuad_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 124);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Trap";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 132);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Laba3:=";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 188);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Laba4:=";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(100, 175);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 48);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Monte Carlo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Laba5:=";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(100, 243);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Simpson";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(379, 381);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonQuad);
			this->Controls->Add(this->label2Laba);
			this->Controls->Add(this->labelLaba1);
			this->Controls->Add(this->buttonLaba1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm1";
			this->Text = L"„исленные  методы ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ laba1 = gcnew MyForm();
		laba1->Show();
	}
	private: System::Void buttonQuad_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ laba2 = gcnew MyForm2();
		laba2->Show();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	MyForm3^ laba3 = gcnew MyForm3();
	laba3->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ laba4 = gcnew MyForm4();
	laba4->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ laba5 = gcnew MyForm5();
	laba5->Show();
}
};
}
