#pragma once
#include <iostream>
#include<fstream>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string>
#include <cstring>
#include <cstdio>
#include<algorithm>
#include<clocale>

using namespace std;



struct listChar {
	char inf = NULL;
	listChar* next = NULL;
};

struct listInt {
	int inf = NULL;
	listInt* next = NULL;
};



namespace AproksFun {

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonAprox;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonGraph;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;





	private: System::Windows::Forms::PictureBox^ pictureBox1;







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
		/// s
		
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAprox = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonGraph = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(240, 118);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(36, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 118);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Кол во точек :=";
			// 
			// buttonAprox
			// 
			this->buttonAprox->Location = System::Drawing::Point(16, 361);
			this->buttonAprox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonAprox->Name = L"buttonAprox";
			this->buttonAprox->Size = System::Drawing::Size(108, 44);
			this->buttonAprox->TabIndex = 0;
			this->buttonAprox->Text = L"Aprox";
			this->buttonAprox->UseVisualStyleBackColor = true;
			this->buttonAprox->Click += gcnew System::EventHandler(this, &MyForm::buttonAprox_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(12, 118);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 66);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Open TXT \r\nfor write(x,y)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// buttonGraph
			// 
			this->buttonGraph->Location = System::Drawing::Point(164, 361);
			this->buttonGraph->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonGraph->Name = L"buttonGraph";
			this->buttonGraph->Size = System::Drawing::Size(132, 44);
			this->buttonGraph->TabIndex = 4;
			this->buttonGraph->Text = L"Graph";
			this->buttonGraph->UseVisualStyleBackColor = true;
			this->buttonGraph->Click += gcnew System::EventHandler(this, &MyForm::buttonGraph_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 23);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Способ задачи начальных значений";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"1)Ввод координат X и Y с клавиатуры" });
			this->listBox1->Location = System::Drawing::Point(12, 47);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(283, 42);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 95);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Для первого способа:";
			// 
			// chart1
			// 
			this->chart1->BorderSkin->BorderWidth = 3;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(347, 3);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"(x,y)";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Lime;
			series2->Legend = L"Legend1";
			series2->Name = L"F(x)=a+bx";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(809, 482);
			this->chart1->TabIndex = 14;
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 443);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(231, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1159, 497);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonGraph);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonAprox);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"Апроксимация функции:";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void pushStack(listChar*& head, char value) {
			listChar* tmp = new listChar;
			tmp->inf = value;
			if (head->inf == NULL) {
				head = tmp;
			}
			else {
				tmp->next = head;
				head = tmp;
			}
		}

		char deleteListElement(listChar*& head) {
			if (head->inf == NULL) {
				//printf("Список уже пуст\n");
				return 0;
			}
			else {
				char ret = head->inf;
				if (head->next == NULL) {
					head->inf = NULL;
				}
				else {
					listChar* tmp = new listChar;
					tmp = head;
					head = head->next;
					delete(tmp);
				}
				return ret;
			}
		}


		void pushStack(listInt*& head, int value) {
			listInt* tmp = new listInt;
			tmp->inf = value;
			if (head->inf == NULL) {
				head = tmp;
			}
			else {
				tmp->next = head;
				head = tmp;
			}
		}

		char deleteListElement(listInt*& head) {
			if (head->inf == NULL) {
				//printf("Список уже пуст\n");
				return 0;
			}
			else {
				int ret = head->inf;
				if (head->next == NULL) {
					head->inf = NULL;
				}
				else {
					listInt* tmp = new listInt;
					tmp = head;
					head = head->next;
					delete(tmp);
				}
				return ret;
			}
		}

		int Priority(char symbol) {
			if (symbol == '(' || symbol == ')') {
				return 1;
			}
			else if (symbol == '+' || symbol == '-') {
				return 2;
			}
			else if (symbol == '*' || symbol == '/') {
				return 3;
			}
			else {
				return 0;
			}
		}

		bool NumOrLitera(char ch) {
			if ((ch > 47 && ch < 58) || (ch < 123 && ch > 96)) return true;
			else return false;
		}

		char* getRPN(char* phrase, int length, double x) {
			for (int i = 0; i < length; i++) {
				if (*phrase == 'x') {
					*phrase = Convert::ToChar(x);
				}phrase++;
			}
			ofstream f("PROVERKA.txt");
			for (int i = 0; i < length; i++) {
				f << *phrase; phrase++;
			}
			Process::Start("notepad.exe", "PROVERKA.txt"); f.close();
			listChar* opz = new listChar;
			char* outstr = new char[length + 1];
			for (int i = 0; i < length; i++) {
				outstr[i] = ' ';
			}
			outstr[length] = '\0';
			int iter = 0;
			for (int i = 0; i < length; i++) {
				if (NumOrLitera(phrase[i])) {
					outstr[iter] = phrase[i];
					iter++;
				}

				else {
					if (Priority(phrase[i]) == 1) {
						if (phrase[i] == '(') {
							pushStack(opz, phrase[i]);
						}
						else {
							while (Priority(opz->inf) != 1) {
								outstr[iter] = deleteListElement(opz);
								iter++;
							}
							deleteListElement(opz);
						}
					}
					else {
						if (Priority(opz->inf) < Priority(phrase[i])) {
							pushStack(opz, phrase[i]);
						}
						else {
							while (Priority(opz->inf) >= Priority(phrase[i]) && Priority(opz->inf) != 0) {
								outstr[iter] = deleteListElement(opz);
								iter++;
							}
							if (Priority(opz->inf) < Priority(phrase[i])) {
								pushStack(opz, phrase[i]);
							}
						}
					}
				}
			}
			while (Priority(opz->inf) > 0) {
				outstr[iter] = deleteListElement(opz);
				iter++;
			}
			//printf("Обратная польская запись: %s\n", outstr);
			return outstr;
		}

		int solvePhrase(char* phrase, int length) {
			listInt* list = new listInt;
			int first, second;
			for (int i = 0; i < length; i++) {
				if (NumOrLitera(phrase[i])) {
					pushStack(list, phrase[i] - 48);
				}
				else {
					if (phrase[i] == '+') {
						first = deleteListElement(list);
						second = deleteListElement(list);
						pushStack(list, second + first);
					}
					else if (phrase[i] == '-') {
						first = deleteListElement(list);
						second = deleteListElement(list);
						pushStack(list, second - first);
					}
					else if (phrase[i] == '*') {
						first = deleteListElement(list);
						second = deleteListElement(list);
						pushStack(list, second * first);
					}
					else if (phrase[i] == '/') {
						first = deleteListElement(list);
						second = deleteListElement(list);
						pushStack(list, second / first);
					}
				}
			}
			return list->inf;
		}

		char* setPhrase(int& length) {

			ifstream f("phrase.txt");
			char* phrase = new char[length + 1];
			phrase[length] = '\0';
			f >> phrase;
			return phrase; f.close();
		}

		double FUNK(double x,double a, double b) {
			double bx; bx = b * x; double abx; abx = a + bx;
			return abx;
		}
		void GenAB() {
			fstream f("fileXY.txt"); String^ s1 = textBox1->Text; int n = Convert::ToInt16(s1);
			ofstream f1("genXYAproxFun.txt"); double k;
			for (int i = 0; i < n; i++) {
				f >> k; f1 << k; f1 << " ";
			}
		
			
			f1 << endl;
			int a = 1;
			ifstream file("fileAnsw.txt", ios_base::in);
			double a1, b1;
			file >> a1; file >> b1; f.close();
			ifstream f2("fileXY.txt");
			file.close();// f.close(); f.open("fileXY.txt");
			
					for (int i = 0; i < n; i++) {
						f2 >> k; double y = FUNK(k, a1, b1); f1 << y; f1 << " ";
					}

				
				
			f.close(); f1.close();
		}
		// Задание начального набора значений
		//double** getData(int n) {
		//	String ^S1 = textBoxA->Text; String ^S2 = textBoxB->Text;
		//	double a=Convert::ToDouble(S1);  double b=Convert::ToDouble(S2);
		//	//
		//	double** f;
		//	//
		//	ofstream o("fileGenData1.txt"); o << "X"; o << " "; o << "Y"; o << endl;
		//	String^ s3 = textBox1->Text;
		//	String^ s4 = textBox2->Text;
		//	StreamWriter^ sw = gcnew StreamWriter("phrase.txt");
		//	sw->Write(s4); sw->Close();
		//	int length; length= s4->Length;
		//	char*phrase=setPhrase(length);
		//	f = new double* [2];
		//	f[0] = new double[n];
		//	f[1] = new double[n];
		//	double y = 0;
		//	double step = (b - a) / (n - 1);
		//	for (int i = 0; i < n; i++) {
		//		double x = a + step * i;
		//		f[0][i] = x;
		//		o << f[0][i]; o << " ";
		//		y=solvePhrase(getRPN(phrase, length,x), length);
		//		f[1][i] = y;
		//		o << f[1][i]; o << endl;
		//		//f[1][i] = //функция от X-pow((x * x), 1. / 3) - pow((1 - (x * x)), 1. / 3);
		//		//o << f[1][i]; o << " ";
		//	}
		////	Process::Start("notepad.exe","fileGenerationGetData1.txt");
		//	o.close();
		//	return f;
		//}
		double **getData2(int n) {
			ifstream file("fileXY.txt");
			int i = 0; double** f; int a = 1; 
			f = new double*[2];
			f[0] = new double[n];
			f[1] = new double[n];
			for (int i = 0; i < n; i++) {
				file >> f[0][i];
			}
			while (!file.eof())
			{
				if (a == 2)
				{
					for (int i = 0; i < n; i++) {
						file >> f[1][i];
					}
					
				}
				++a;
			}
		//	Process::Start("notepad.exe", "fileXY.txt");
			file.close();
			return f;
			
		}
		// Вычисление коэффициентов аппроксимирующей прямой
		void getApprox(double** x, double* a, double* b, int n) {

			/*double sumx = 0;
			double sumy = 0;
			double sumx2 = 0;
			double sumxy = 0;
			for (int i = 0; i < n; i++) {
				sumx += x[0][i];
				sumy += x[1][i];
				sumx2 += x[0][i] * x[0][i];
				sumxy += x[0][i] * x[1][i];
			}*/
			double Mx = 0;
			double My = 0;
			double Mx2 = 0;
			double Mxy = 0;
			double delta, delta_a, delta_b;
			double* array_of_x = new double[n]; double  *array_of_y = new double[n];

			for (int i = 0; i < n; i++)
			{
				array_of_x[i] = x[0][i];
			}
			for (int i = 0; i < n; i++)
			{
				array_of_y[i] = x[1][i];
			}
			for (int i = 0; i < n; i++)
			{
				Mx += array_of_x[i];
				My += array_of_y[i];
				Mx2 += array_of_x[i] * array_of_x[i];
				Mxy += array_of_x[i] * array_of_y[i];
			}
			Mx /= n;
			My /= n;
			Mx2 /= n;
			Mxy /= n;

			delta = Mx2 - Mx * Mx;
			delta_a = My * Mx2 - Mxy * Mx;
			delta_b = Mxy - Mx * My;

			*a = delta_a / delta;
			*b = delta_b / delta;

			//*b = (n * sumxy - (sumx * sumy)) / (n * sumx2 - sumx * sumx);
			//*a = (sumy - *a * sumx) / n;
			//*a = (sumy / n) - (sumx / n);
			//*b = ((sumxy / n) - (sumx / n) * ((sumy / n) - (sumx / n))) / (sumx2/n);
			delete[]array_of_x; delete[] array_of_y;
			return;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "Ru");
		String^ s1 = textBox1->Text; if (s1 == "") { MessageBox::Show("Пустое поле количества элементов "); return; }
	
		String^ s2 = "Введите :=" + s1 + " пар X и Y через пробел. X-первой строчкой, Y - второй.";
		//File::WriteAllText("fileXY.txt", s2);
		MessageBox::Show(s2);
		Process::Start("notepad.exe", "fileXY.txt");	
	}
	private: System::Void buttonAprox_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "Russian");
		String^ s1 = textBox1->Text; if (s1 == "") { MessageBox::Show("Пустое поле количества элементов "); return; }
		int n = Convert::ToInt16(s1);
		double** x, a, b;
		if (listBox1->SelectedIndex==1) {
			//x = getData(n);
			getApprox(x, &a, &b, n); String^ st = Convert::ToString(a) + " " + Convert::ToString(b);
			StreamWriter^ sw = gcnew StreamWriter("fileAnsw.txt"); sw->Write(st);

			sw->Close();
			Process::Start("notepad.exe", "fileGenData1.txt");
			GenAB();
	}
		
		if (listBox1->SelectedIndex == 0) {
			x = getData2(n);
			getApprox(x, &a, &b, n);
			//String^ st = Convert::ToString(a) + " " + Convert::ToString(b);
			StreamWriter^ sw = gcnew StreamWriter("fileAnsw.txt"); sw->WriteLine(a); sw->WriteLine(b);
			sw->Close();
			fstream f("fileAnsw.txt");
			string k, k1; f >> k; f >> k1;
			replace(begin(k), end(k), ',', '.'); replace(begin(k1), end(k1), ',', '.');
			f.close();

			ofstream fo("fileAnsw.txt");
			fo << k << endl; fo << k1; fo.close();
			MessageBox::Show("а и b для аппроксимирующей функции посчитаны. Первое строка:= a, второя:= b");
			Process::Start("notepad.exe", "fileAnsw.txt");
			
			GenAB();
			MessageBox::Show("таблица значений  аппроксимирующей функции посчитана. Первое строка:= X, второя:= Y");
			Process::Start("notepad.exe", "genXYAproxFun.txt");
		}
		
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonGraph_Click(System::Object^ sender, System::EventArgs^ e) {
	//setlocale(LC_ALL, "Russian"); 
	ifstream fileXY("fileXY.txt"); 
	ifstream fileFun("genXYAproxFun.txt");
	String^ s1 = textBox1->Text;
	int n = Convert::ToInt16(s1);
	//String^ s1 = textBox1->Text; 
//	String^ sA = textBoxA->Text; if (sA == "") 
	//double a = Convert::ToDouble(sA); 
//	String^ sB = textBoxB->Text; double b = Convert::ToDouble(sB);
	//double step = (b - a) / (n - 1); 
	double x, y;
	chart1->Series[0]->Points->Clear();
	double* arX = new double[n];
	double* arY = new double[n];
	for (int i = 0; i < n; i++) {
		fileXY >> arX[i];
	}
	for (int i = 0; i < n; i++) {
		fileXY >> arY[i];
	}
	
	for (int i = 0; i < n; i++) {
		x = arX[i];
		y = arY[i];
		chart1->Series[0]->Points->AddXY(x, y); 
	}
	for (int i = 0; i < n; i++) {
		fileFun >> arX[i];
	}
	for (int i = 0; i < n; i++) {
		fileFun >> arY[i];
	}
	for (int i = 0; i < n; i++) {
		x = arX[i];
		y = arY[i];
		chart1->Series[1]->Points->AddXY(x, y);
	}
	fileXY.close();	fileFun.close();
	delete []arX; delete []arY;

	//label2->Text = Convert::ToString(a);
	//label3->Text = Convert::ToString(b);
	//ofstream ab("ab.txt"); ab << a; ab << " "; ab << b; ab.close(); file.close();
	//Process::Start("notepad.exe", "ab.txt");
	

}
private: System::Void textBoxB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	  
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
