#pragma once
#include<math.h>
#include "Form2.h"

namespace MathProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	public: 
		long double area;
		long double areae;
		double pricei;
		double num;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitApplicationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitApplicationToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitApplicationToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitApplicationToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  exitApplicationToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  alternateLayoutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  applicationDetailsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  exitApplicationToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  kitchenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  diningRoomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  livingRoomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  masterBedroomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bedroom2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bedroom3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  paintToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public: 
		double price;
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;









	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;

	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alternateLayoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->applicationDetailsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kitchenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diningRoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->livingRoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->masterBedroomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bedroom2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bedroom3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paintToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitApplicationToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Kitchen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Living Room";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Step 1: Pick a room";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(340, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Step 2: Pick an option";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(343, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Tiles(1):";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(343, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Tiles(2):";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"The price for this room is (USD):";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(175, 165);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 16;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(117, 95);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Dining Room";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(117, 124);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 23);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Master Bedroom";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(219, 95);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 23);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Bedroom 2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(219, 123);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(96, 23);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Bedroom 3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Rough Estimate of area needed to be painted (square feet):";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 295);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(217, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"The price for 2 coats of the exterior is (USD):";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(304, 266);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 23;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(229, 292);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 24;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(343, 145);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Carpet(1):";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(343, 169);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Carpet(2): ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(424, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(221, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Twelve (12) 1ftx1ft tiles, costs $29.95 per box";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(424, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(221, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Twelve (12) 1ftx1ft tiles, costs $38.95 per box";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(424, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(213, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"5yd wide rolls, costs $18.95 per square yard";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(424, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(213, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"5yd wide rolls, costs $29.95 per square yard";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(14, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 31;
			this->button7->Text = L"Exterior";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(9, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(270, 29);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Interior Home Options";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(11, 204);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(180, 29);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Exterior Home";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->exitToolStripMenuItem, 
				this->exitApplicationToolStripMenuItem, this->exitApplicationToolStripMenuItem1, this->exitApplicationToolStripMenuItem2, this->exitApplicationToolStripMenuItem3, 
				this->exitApplicationToolStripMenuItem4});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1301, 24);
			this->menuStrip1->TabIndex = 34;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->alternateLayoutToolStripMenuItem, 
				this->applicationDetailsToolStripMenuItem, this->toolStripMenuItem2, this->toolStripMenuItem3, this->exitApplicationToolStripMenuItem5});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(122, 20);
			this->exitToolStripMenuItem->Text = L"Options and Details";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// alternateLayoutToolStripMenuItem
			// 
			this->alternateLayoutToolStripMenuItem->Name = L"alternateLayoutToolStripMenuItem";
			this->alternateLayoutToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->alternateLayoutToolStripMenuItem->Text = L"Alternate Layout";
			this->alternateLayoutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::alternateLayoutToolStripMenuItem_Click);
			// 
			// applicationDetailsToolStripMenuItem
			// 
			this->applicationDetailsToolStripMenuItem->Name = L"applicationDetailsToolStripMenuItem";
			this->applicationDetailsToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->applicationDetailsToolStripMenuItem->Text = L"Application Details";
			this->applicationDetailsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::applicationDetailsToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->kitchenToolStripMenuItem, 
				this->diningRoomToolStripMenuItem, this->livingRoomToolStripMenuItem, this->masterBedroomToolStripMenuItem, this->bedroom2ToolStripMenuItem, 
				this->bedroom3ToolStripMenuItem, this->paintToolStripMenuItem});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem2->Text = L"Standards";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// kitchenToolStripMenuItem
			// 
			this->kitchenToolStripMenuItem->Name = L"kitchenToolStripMenuItem";
			this->kitchenToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->kitchenToolStripMenuItem->Text = L"Kitchen";
			this->kitchenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kitchenToolStripMenuItem_Click);
			// 
			// diningRoomToolStripMenuItem
			// 
			this->diningRoomToolStripMenuItem->Name = L"diningRoomToolStripMenuItem";
			this->diningRoomToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->diningRoomToolStripMenuItem->Text = L"Dining Room";
			this->diningRoomToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::diningRoomToolStripMenuItem_Click);
			// 
			// livingRoomToolStripMenuItem
			// 
			this->livingRoomToolStripMenuItem->Name = L"livingRoomToolStripMenuItem";
			this->livingRoomToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->livingRoomToolStripMenuItem->Text = L"Living Room";
			this->livingRoomToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::livingRoomToolStripMenuItem_Click);
			// 
			// masterBedroomToolStripMenuItem
			// 
			this->masterBedroomToolStripMenuItem->Name = L"masterBedroomToolStripMenuItem";
			this->masterBedroomToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->masterBedroomToolStripMenuItem->Text = L"Master Bedroom";
			this->masterBedroomToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::masterBedroomToolStripMenuItem_Click);
			// 
			// bedroom2ToolStripMenuItem
			// 
			this->bedroom2ToolStripMenuItem->Name = L"bedroom2ToolStripMenuItem";
			this->bedroom2ToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->bedroom2ToolStripMenuItem->Text = L"Bedroom 2";
			this->bedroom2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bedroom2ToolStripMenuItem_Click);
			// 
			// bedroom3ToolStripMenuItem
			// 
			this->bedroom3ToolStripMenuItem->Name = L"bedroom3ToolStripMenuItem";
			this->bedroom3ToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->bedroom3ToolStripMenuItem->Text = L"Bedroom 3";
			this->bedroom3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bedroom3ToolStripMenuItem_Click);
			// 
			// paintToolStripMenuItem
			// 
			this->paintToolStripMenuItem->Name = L"paintToolStripMenuItem";
			this->paintToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->paintToolStripMenuItem->Text = L"Paint";
			this->paintToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::paintToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(173, 22);
			this->toolStripMenuItem3->Text = L"Sources";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem3_Click);
			// 
			// exitApplicationToolStripMenuItem5
			// 
			this->exitApplicationToolStripMenuItem5->Name = L"exitApplicationToolStripMenuItem5";
			this->exitApplicationToolStripMenuItem5->Size = System::Drawing::Size(173, 22);
			this->exitApplicationToolStripMenuItem5->Text = L"Exit Application";
			this->exitApplicationToolStripMenuItem5->Click += gcnew System::EventHandler(this, &Form1::exitApplicationToolStripMenuItem5_Click);
			// 
			// exitApplicationToolStripMenuItem
			// 
			this->exitApplicationToolStripMenuItem->Name = L"exitApplicationToolStripMenuItem";
			this->exitApplicationToolStripMenuItem->Size = System::Drawing::Size(12, 20);
			this->exitApplicationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitApplicationToolStripMenuItem_Click);
			// 
			// exitApplicationToolStripMenuItem1
			// 
			this->exitApplicationToolStripMenuItem1->Name = L"exitApplicationToolStripMenuItem1";
			this->exitApplicationToolStripMenuItem1->Size = System::Drawing::Size(12, 20);
			// 
			// exitApplicationToolStripMenuItem2
			// 
			this->exitApplicationToolStripMenuItem2->Name = L"exitApplicationToolStripMenuItem2";
			this->exitApplicationToolStripMenuItem2->Size = System::Drawing::Size(12, 20);
			// 
			// exitApplicationToolStripMenuItem3
			// 
			this->exitApplicationToolStripMenuItem3->Name = L"exitApplicationToolStripMenuItem3";
			this->exitApplicationToolStripMenuItem3->Size = System::Drawing::Size(12, 20);
			// 
			// exitApplicationToolStripMenuItem4
			// 
			this->exitApplicationToolStripMenuItem4->Name = L"exitApplicationToolStripMenuItem4";
			this->exitApplicationToolStripMenuItem4->Size = System::Drawing::Size(12, 20);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(686, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(589, 305);
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1301, 364);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Team D Math Project";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				area = 22*16;
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			num = 0;
			 while(1)
			{
				if(12*num >= area)
					break;
				else
				++num;
			}
			 pricei = num * 29.95;
			 textBox6 -> Text = Convert::ToString(pricei);
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			area = 12 *14;
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 area = 10*14;
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 area = 11*12;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 area = 14*14;
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 area = 12*11;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			num = 0;
			 while(1)
			{
				if(12*num >= area)
					break;
				else
				++num;
			}
			 pricei = num * 38.95;
			 textBox6 -> Text = Convert::ToString(pricei);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 num =0;
			 while(1)
			 {
				 if(num * 15 >= area)
					 break;
				 else
					 ++num;
			 }
			 pricei = (num*15);
			 pricei /= 9;
			 while((int)pricei%5 != 0)
			 {
				 ++pricei;
			 }
			 pricei = (int) pricei;
			 pricei *= 18.95;
			 pricei *=100;
			pricei= ceil(pricei);
			 pricei/=100;
			  textBox6 -> Text = Convert::ToString(pricei);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 num =0;
			 while(1)
			 {
				 if(num * 15 >= area)
					 break;
				 else
					 ++num;
			 }
			 pricei = ((num *15)/9);
			 while((int)pricei%5 != 0)
			 {
				 ++pricei;
			 }
			 pricei = (int) pricei;
			 pricei *=29.95;
			 pricei *=100;
			 pricei = ceil(pricei);
			 pricei/=100;
			  textBox6 -> Text = Convert::ToString(pricei);
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 areae = ((54*12+30*12+15*7)*2)- (10*15+(9*3.14159265359) + 7*4);
			 price = (areae/450);
			 price *= 2;
			 price = ceil(price);
			 price*=28.95;
			 price *= 100;
			 price = ceil(price);
			 price/= 100;
			 textBox3 -> Text = Convert::ToString((int)areae);
			 textBox4 -> Text = Convert::ToString(price);
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Still have to make another GUI
		 }
private: System::Void exitApplicationToolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Thank you for using this program!");
			 Application::Exit();
		 }
private: System::Void exitApplicationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void applicationDetailsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show("This was created by Table D:\nRavi Sinha\nAmulya Musipatla\nJay-C Enriquez\n&\nKevin Troung!");
		 }
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Visual Studio 2010\nCountless Youtube Videos\nMs. Vaksman for dimensions");
		 }
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void kitchenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Dimensions are:\n12 feet by 14 feet");
		 }
private: System::Void diningRoomToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Dimensions are:\n10 feet by 14 feet");
		 }
private: System::Void livingRoomToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Dimensions are:\n22 feet by 16");
		 }
private: System::Void masterBedroomToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Dimensions are:\n14 feet by 14 feet");
		 }
private: System::Void bedroom2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Dimensions are:\n11 feet by 12 feet");
		 }
private: System::Void bedroom3ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Dimensions are:\n12 feet by 11 feet");
		 }
private: System::Void alternateLayoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  Form2 ^form2 = gcnew Form2();
              form2->Show();
			  this -> Hide();
		 }
private: System::Void paintToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Paint covers:\n45 square feet\nand costs:\n$28.95");
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

