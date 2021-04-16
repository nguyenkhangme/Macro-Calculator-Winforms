#pragma once

#include "calculate.h"

namespace KeyGenDe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::Runtime::InteropServices::Marshal;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		 calculateMarcoGym calculateMachine;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Data::DataSet^ dataSet1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kg:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(154, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(104, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Body Fat %:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Calories Surf:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Activity: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(388, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"TDEE:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(520, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Carb";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(457, 156);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Fat";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(388, 156);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Protein";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sedentary(office job)", L"Light Exercise (1 - 2 days/week)",
					L"Moderate Exercise (3 - 5 days/week)", L"Heavy Exercise (6 - 7 days/week)", L"Athlete (2x per day)"
			});
			this->comboBox1->Location = System::Drawing::Point(104, 153);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(228, 21);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(104, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(101, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(363, 39);
			this->label9->TabIndex = 13;
			this->label9->Text = L"=== Developed by Duncan - https://vietnambodybuilder.blogspot.com/ ===\n Guide: ht"
				L"tps://vietnambodybuilder.blogspot.com/documentation \n iOS: https://vietnambodybuilder."
				L"blogspot.com/iOS";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(388, 128);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Bulking Calories:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(387, 213);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 16;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			this->errorProvider1->DataSource = this->bindingSource1;
			// 
			// bindingSource1
			// 
			this->bindingSource1->DataSource = this->dataSet1;
			this->bindingSource1->Position = 0;
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 286);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 573);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculate Marco Gym";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		//calculateMachine.transfer->transferCenter(textBox1->Text);
		string activity = toStandardString(comboBox1->Text);
		double kg = 0;
		double bodyFat = 0;
		double caloriesSurf = 0;
		int activityValue = 0;

		//Test case
		if (toStandardString(textBox1->Text) == "duncan") {
			kg = 63;
			bodyFat = 12;
			caloriesSurf = 500;
			activityValue = 3;
		}
		else { //Real Handle
			if (stod(toStandardString(textBox1->Text)) != NULL) {
				kg = stod(toStandardString(textBox1->Text));
			}
			else {
				kg = 0;
			}
			//kg = stod(toStandardString(textBox1->Text));
			bodyFat = stod(toStandardString(textBox2->Text));
			caloriesSurf = stod(toStandardString(textBox3->Text));


			if (activity == "Sedentary(office job)") {
				activityValue = 1;
			}
			if (activity == "Light Exercise (1 - 2 days/week)") {
				activityValue = 2;
			}
			if (activity == "Moderate Exercise (3 - 5 days/week)") {
				activityValue = 3;
			}
			if (activity == "Heavy Exercise (6 - 7 days/week)") {
				activityValue = 4;
			}
			if (activity == "Athlete (2x per day)") {
				activityValue = 5;
			}
		}
		
		calculateMachine.calculateActivity(activityValue);

		calculateMachine.bodyInformation.weightKilogram = kg;
		calculateMachine.bodyInformation.convertKilogramToPound();

		calculateMachine.bodyInformation.fat = bodyFat;
		calculateMachine.calculateBodyFatLevel(bodyFat);

		calculateMachine.calculateTDEE1();

		calculateMachine.caloriessurf = caloriesSurf;
		calculateMachine.calculateBulkingcalories();

		calculateMachine.calculateAll();

		UpdateViewFromModel();


		
	}
	private: System::Void UpdateViewFromModel() {
		label5->Text = gcnew String(("TDEE: " + to_string(calculateMachine.TDEE)).c_str());
		label10->Text = gcnew String(("Bulking Calories: " + to_string(calculateMachine.bulkingcalories)).c_str());
		label8->Text = gcnew String(("Protein\n" + to_string(calculateMachine.protein)).c_str());
		label7->Text = gcnew String(("Fat\n" + to_string(calculateMachine.fat)).c_str());
		label6->Text = gcnew String(("Carb\n" + to_string(calculateMachine.carb)).c_str());
		label11->Text = gcnew String(("---Protein---\n\nUc ga(Chicken breast): " 
			+ to_string(calculateMachine.protein / 20 * 100) 
			+ "g\nHoac 6 qua trung (eggs)(*) \nva " 
			+ to_string((calculateMachine.protein - 20) / 20 * 100) 
			+ "g uc ga / chicken breast"
			+ "\n\n---Carb---\n"
			+ "\nBanh mi(White Bread): "
			+ to_string(calculateMachine.carb / 40 * 100)
			+ "g\nNeu an com(Rice): "
			+ to_string(calculateMachine.carb / 20.8 * 100)
			+ "g\n(*): 6 eggs: 6 white eggs and 1 yolk"
			+"\n\nDepend on:\nchicken breast(phile): 20gr protein/100gr" 
			+ "\nEgg: White Egg: 3gr protein, Yolk: 2gr protein"
			+ "\nWhite bread: 40gr carb/100gr" 
			+ "\nRice: 20.8gr carb/100gr").c_str());
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   static std::string toStandardString(System::String^ string)
	   {
		   System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		   char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		   std::string returnString(charPointer, string->Length);
		   Marshal::FreeHGlobal(pointer);
		   return returnString;
	   }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
