#pragma once
#include <cmath>
namespace MathProject {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		String^ xst; //st symbolizes string
		String^ yst;
		String^ pricest;
		String^ areast;
		String^ priceest;
		String^ number;
		double x, y, area, price, areae, pricee, choice, num, total, totally, numc;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  defaultSettingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  paintPriceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alternateLayoutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sourcesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitApplicationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  applicationDetailsToolStripMenuItem;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::Button^  button4;
	public: 
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alternateLayoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->applicationDetailsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultSettingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paintPriceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sourcesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(217, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(217, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(242, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(242, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Tiles";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(161, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Carpet";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(114, 174);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 43);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Calculate!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(217, 228);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Please enter the length of the room (ft):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Please enter the width of the room (ft):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Please choose an option:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(232, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Please enter the price (per square yard/per box)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"The price (USD) of the room is:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(192, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form2::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(192, 322);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(192, 354);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(192, 431);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(95, 438);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"The price (USD) is:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 361);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Please enter the number of coats";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Please enter price of the paint:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 303);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Please enter area of exterior home";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(114, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 35);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Calculate!";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->optionsToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(992, 24);
			this->menuStrip1->TabIndex = 21;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->alternateLayoutToolStripMenuItem, 
				this->applicationDetailsToolStripMenuItem, this->defaultSettingsToolStripMenuItem, this->sourcesToolStripMenuItem, this->exitApplicationToolStripMenuItem});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(122, 20);
			this->optionsToolStripMenuItem->Text = L"Options and Details";
			// 
			// alternateLayoutToolStripMenuItem
			// 
			this->alternateLayoutToolStripMenuItem->Name = L"alternateLayoutToolStripMenuItem";
			this->alternateLayoutToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->alternateLayoutToolStripMenuItem->Text = L"Alternate Layout";
			this->alternateLayoutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::alternateLayoutToolStripMenuItem_Click);
			// 
			// applicationDetailsToolStripMenuItem
			// 
			this->applicationDetailsToolStripMenuItem->Name = L"applicationDetailsToolStripMenuItem";
			this->applicationDetailsToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->applicationDetailsToolStripMenuItem->Text = L"Application Details";
			this->applicationDetailsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::applicationDetailsToolStripMenuItem_Click);
			// 
			// defaultSettingsToolStripMenuItem
			// 
			this->defaultSettingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->paintPriceToolStripMenuItem});
			this->defaultSettingsToolStripMenuItem->Name = L"defaultSettingsToolStripMenuItem";
			this->defaultSettingsToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->defaultSettingsToolStripMenuItem->Text = L"Standards";
			// 
			// paintPriceToolStripMenuItem
			// 
			this->paintPriceToolStripMenuItem->Name = L"paintPriceToolStripMenuItem";
			this->paintPriceToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->paintPriceToolStripMenuItem->Text = L"Paint";
			this->paintPriceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::paintPriceToolStripMenuItem_Click);
			// 
			// sourcesToolStripMenuItem
			// 
			this->sourcesToolStripMenuItem->Name = L"sourcesToolStripMenuItem";
			this->sourcesToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->sourcesToolStripMenuItem->Text = L"Sources";
			this->sourcesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::sourcesToolStripMenuItem_Click);
			// 
			// exitApplicationToolStripMenuItem
			// 
			this->exitApplicationToolStripMenuItem->Name = L"exitApplicationToolStripMenuItem";
			this->exitApplicationToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->exitApplicationToolStripMenuItem->Text = L"Exit Application";
			this->exitApplicationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::exitApplicationToolStripMenuItem_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(18, 24);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(172, 29);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Interior Home";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(18, 264);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(180, 29);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Exterior Home";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(384, 85);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(589, 305);
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 475);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form2";
			this->Text = L"Table D Math Project ";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			num =0;
		    xst = textBox1 -> Text;
			yst = textBox2 -> Text;
			pricest = textBox3 -> Text;
			x = Convert::ToDouble(xst);
			y = Convert::ToDouble(yst);
			price = Convert::ToDouble(pricest);
			area = x*y;
			if(choice == 1)
			{
				while(1)
				{
					if(num * 15 >= area)
						break;
					else
						++num;
				}
					total = ((num *15)/9);
					while ((int)total%5 != 0)
					{
						++total;
					}
					total = (int) total;
					total *= price;
					total *=100;
					total= ceil(total);
					total/=100;
					textBox4 -> Text = Convert::ToString(total);
			}
			else if(choice == 0)
			{
				while(1)
				{
					if(12*num >= area)
						break;
					else
						++num;
				}
				total = num * price;
				total *= 100;
				total = ceil(total);
				total/= 100;
				textBox4 -> Text = Convert::ToString(total);
			}
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 choice = 1;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 choice = 0;
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 areast = textBox5 -> Text;
			 areae = Convert::ToDouble(areast);
			 priceest = textBox6 -> Text;
			 pricee = Convert::ToDouble(priceest);
			 number = textBox7 -> Text;
			 num = Convert::ToDouble(number);
			 numc = areae/450;
			 numc *= num;
			 numc = ceil(numc);
			 totally = (pricee*numc);
			 totally *=100;
			 totally = ceil(totally);
			 totally/=100;
			 textBox8 -> Text = Convert::ToString(totally);
		 }
private: System::Void paintPriceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Paint covers:\n450 square feet per gallon");
		 }
private: System::Void exitApplicationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Thank you for using this program!");
			 Application::Exit();
		 }
private: System::Void applicationDetailsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("This was created by Table D:\nRavi Sinha\nAmulya Musipatla\nJay-C Enriquez\n&\nKevin Troung!");
		 }
private: System::Void sourcesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Visual Studio 2010\nCountless Youtube Videos\nMs. Vaksman for dimensions");
		 }
Form2(System::Windows::Forms::Form ^ frm1)
    {
        otherform = frm1;
        InitializeComponent();
    }
private: System::Windows::Forms::Form ^ otherform;
private: System::Void alternateLayoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Sorry this function doesn't work! :(");
			 //	this -> Hide();
		//	otherform -> Show(this); //Wont Work
	 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
