#pragma once

namespace AproksFun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxEps;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBoxEps = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxEps
			// 
			this->textBoxEps->Location = System::Drawing::Point(244, 159);
			this->textBoxEps->Margin = System::Windows::Forms::Padding(4);
			this->textBoxEps->Name = L"textBoxEps";
			this->textBoxEps->Size = System::Drawing::Size(93, 22);
			this->textBoxEps->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(207, 159);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 17);
			this->label10->TabIndex = 27;
			this->label10->Text = L"eps:=";
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(132, 155);
			this->textBoxB->Margin = System::Windows::Forms::Padding(4);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(65, 22);
			this->textBoxB->TabIndex = 26;
			this->textBoxB->Text = L"2,1";
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(36, 155);
			this->textBoxA->Margin = System::Windows::Forms::Padding(4);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(64, 22);
			this->textBoxA->TabIndex = 25;
			this->textBoxA->Text = L"0,7";
			this->textBoxA->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBoxA_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(109, 159);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 17);
			this->label7->TabIndex = 24;
			this->label7->Text = L"b:=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 159);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 17);
			this->label6->TabIndex = 23;
			this->label6->Text = L"a:=";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"1)Метод средних квадратов", L"2)Метод правых квадратов",
					L"3)Метод левых квадратов"
			});
			this->listBox2->Location = System::Drawing::Point(16, 202);
			this->listBox2->Margin = System::Windows::Forms::Padding(4);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(283, 52);
			this->listBox2->TabIndex = 33;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 278);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 31;
			this->button2->Text = L"int(F(x,y))";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(36, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(303, 133);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(346, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(737, 530);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 35;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1039, 539);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxEps);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxB);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm2";
			this->Text = L"Laba 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double myfun(double x) {
			double f = (sqrt(0.6 * x + 1.5));
			double f1 = (2 * x + sqrt(x * x + 3));
			return (f / f1);
		}
		float middle_square(float a, float b, float e)
		{
			ofstream file("middle_square.txt");
			file << "Метод средних квадратов" << endl;
			float n = 1, s = 0, s1 = 0;
			do {
				s1 = s;
				n *= 2;
				float h = (b - a) / n;
				for (int i = 0; i < n - 1; i++)
					s += myfun(((a + h * i) + (a + h * (i + 1))) / 2);
				s *= h;
			} while (abs(s - s1) >= e);
			file << "int:=" << endl;
			file << s << endl;
			file << "N:=" << endl;
			file << n << endl;
			
			file.close();
			Process::Start("notepad.exe", "middle_square.txt");
			return s;

		}
		float left_square(float a, float b, float e)
		{
			ofstream file("left_square.txt");
			file << "Метод левых квадратов" << endl;
			float n = 1, s = 0, s1 = 0;
			do {
				s1 = s;
				n *= 2;
				float h = (b - a) / n;
				for (int i = 0; i < n - 1; i++)
					s += myfun(a + h * i);
				s *= h;
			} while (abs(s - s1) >= e);
			file << "int:=" << endl;
			file << s << endl;
			file << "N:=" << endl;
			file << n << endl;
			
			file.close();
			Process::Start("notepad.exe", "left_square.txt");
			return s;
		}
		float right_square(float a, float b, float e)
		{
			ofstream file("right_square.txt");
			file << "Метод правых квадратов" << endl;
			float n = 1, s = 0, s1 = 0;
			do {
				s1 = s;
				n *= 2;
				float h = (b - a) / n;
				for (int i = 1; i < n; i++)
					s += myfun(a + h * i);
				s *= h;
			} while (abs(s - s1) >= e);
			file << "int:=" << endl;
			file << s << endl;
			file << "N:=" << endl;
			file << n << endl;
			
			file.close();

			Process::Start("notepad.exe", "right_square.txt");
			return s;
		}
	private: System::Void textBoxA_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
		 
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "Russian");
	String^ sA = textBoxA->Text; if (sA == "") { MessageBox::Show("Пустое поле A  "); return; }
	String^ sB = textBoxB->Text; if (sB == "") { MessageBox::Show("Пустое поле B  "); return; }
	String^ sEps = textBoxEps->Text; if (sEps == "") { MessageBox::Show("Пустое поле Eps  "); return; }
	float a, b; a = Convert::ToDouble(sA); b = Convert::ToDouble(sB);
	float eps; eps = Convert::ToDouble(sEps);
	//--
//	a = 0.7; b = 2.1; 
	//eps = 0.001;
	//--
	if (listBox2->SelectedIndex == 0) {
		middle_square(a, b, eps);
	}
	if(listBox2->SelectedIndex == 1) {
		left_square(a, b, eps);
	}
	if (listBox2->SelectedIndex == 1) {
		right_square(a, b, eps);
	}
	 

}
};
}
