#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include"MyFormTH3.h"
using namespace std;
namespace AproksFun {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 316);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Рассчитать.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 394);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"a:=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(171, 20);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"b:=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(53, 20);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(97, 28);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,7";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(213, 20);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(97, 28);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"2,1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 72);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"EPS:=";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(76, 62);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(126, 28);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0,001";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 101);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(375, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(397, -14);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(768, 525);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(197, 316);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 63);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Theory";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1178, 520);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm3";
			this->Text = L"Метод трапеций ";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		float FUNC(float x) {
			//return 2 * x + 1;
			double f = (sqrt(0.6 * x + 1.5));
			double f1 = (2 * x + sqrt(x * x + 3));
			return (f / f1);
			
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, eps, h, S = 0, S1 = 0, x;
		ofstream f("laba3.txt"); f.close();
		fstream ff("laba3.txt");
		int n = 2;
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		eps = Convert::ToDouble(textBox3->Text);
		if ((textBox1->Text != "" && textBox1->Text != "" && textBox1->Text != "")) {
			double *arrX = new double[10000];
			double * arrY  = new double[10000];
			chart1->ChartAreas[0]->AxisX->Interval = 0,5;
			chart1->ChartAreas[0]->AxisY->Interval = 0,5;
			for (double j = a; j <= b; j += 0.01)chart1->Series[0]->Points->AddXY(j, FUNC(j));
			while (1) {
				h = (b - a) / n;
				S = FUNC(a) + FUNC(b); int j = 0;
				for (double x = a; x < b; x += h) {
					S += 2 * FUNC(x);
					//arrX[j] = x;
					//arrY[j] = FUNC(x);
					//chart1->Series[0]->Points->AddXY(arrX[j],arrY[j]);
					j++;
				}
				S *= h / 2;
				if (abs(S1 - S) <= eps) {

					 String^ Y= Convert::ToString(floor(S * 10000) / 10000) ;
					 msclr::interop::marshal_context context;
					 string Y2 = context.marshal_as <std::string>(Y);
					ff << "Значение интеграллла:= " << endl;
					ff << Y2 << endl;
					String^ Y3= Convert::ToString(n);
					msclr::interop::marshal_context context2;
					ff << "Значение N:= " << endl;
					string Y4 = context2.marshal_as <std::string>(Y3);
					ff << Y4;
					ff.close();
					Process::Start("notepad.exe", "laba3.txt");
					
					//label6->Text = Convert::ToString(floor(S * 10000) / 10000);
					//label7->Text = Convert::ToString(n);
					return;
				}

				else { S1 = S; S = 0; n = 2 * n; }
			}
		}
		else{
			MessageBox::Show("Выберите метод и введите данные", "Ошибка");
	}
	}
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormTH3^ l = gcnew MyFormTH3();
	l->Show();
}
};
}
