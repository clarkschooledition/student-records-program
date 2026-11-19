#pragma once

namespace StudentRecordsManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ ui_studentsTable;
	private: System::Windows::Forms::DataGridView^ dt_studentTable;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_studentId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_firstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_middleInitial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_lastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_Course;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_GPA;
	private: System::Windows::Forms::GroupBox^ ui_controls;
	private: System::Windows::Forms::GroupBox^ ui_recentDeletions;
	private: System::Windows::Forms::GroupBox^ ui_studentQueue;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn_changeFunction;
	private: System::Windows::Forms::Button^ btn_Submit;
	private: System::Windows::Forms::Label^ lbl_GPA;

	private: System::Windows::Forms::Label^ lbl_course;

	private: System::Windows::Forms::Label^ lbl_id;

	private: System::Windows::Forms::Label^ lbl_lastName;

	private: System::Windows::Forms::Label^ lbl_middleInitial;

	private: System::Windows::Forms::Label^ lbl_firstName;
	private: System::Windows::Forms::ComboBox^ cmb_Course;
	private: System::Windows::Forms::DataGridView^ dt_recentDeletions;
	private: System::Windows::Forms::DataGridView^ dt_serviceQueue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rcol_ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rcol_lastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qcol_no;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qcol_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qcol_lastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qcol_Course;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qcol_GPA;
	private: System::Windows::Forms::Button^ btn_addQueue;




































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
			this->ui_studentsTable = (gcnew System::Windows::Forms::GroupBox());
			this->dt_studentTable = (gcnew System::Windows::Forms::DataGridView());
			this->col_GPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_Course = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_middleInitial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_studentId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ui_controls = (gcnew System::Windows::Forms::GroupBox());
			this->ui_recentDeletions = (gcnew System::Windows::Forms::GroupBox());
			this->ui_studentQueue = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Submit = (gcnew System::Windows::Forms::Button());
			this->btn_changeFunction = (gcnew System::Windows::Forms::Button());
			this->lbl_firstName = (gcnew System::Windows::Forms::Label());
			this->lbl_middleInitial = (gcnew System::Windows::Forms::Label());
			this->lbl_lastName = (gcnew System::Windows::Forms::Label());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->lbl_course = (gcnew System::Windows::Forms::Label());
			this->lbl_GPA = (gcnew System::Windows::Forms::Label());
			this->cmb_Course = (gcnew System::Windows::Forms::ComboBox());
			this->dt_recentDeletions = (gcnew System::Windows::Forms::DataGridView());
			this->dt_serviceQueue = (gcnew System::Windows::Forms::DataGridView());
			this->rcol_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rcol_lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_no = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_Course = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_GPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_addQueue = (gcnew System::Windows::Forms::Button());
			this->ui_studentsTable->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_studentTable))->BeginInit();
			this->ui_controls->SuspendLayout();
			this->ui_recentDeletions->SuspendLayout();
			this->ui_studentQueue->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_recentDeletions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_serviceQueue))->BeginInit();
			this->SuspendLayout();
			// 
			// ui_studentsTable
			// 
			this->ui_studentsTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->ui_studentsTable->Controls->Add(this->dt_studentTable);
			this->ui_studentsTable->Location = System::Drawing::Point(12, 12);
			this->ui_studentsTable->Name = L"ui_studentsTable";
			this->ui_studentsTable->Size = System::Drawing::Size(934, 744);
			this->ui_studentsTable->TabIndex = 0;
			this->ui_studentsTable->TabStop = false;
			this->ui_studentsTable->Text = L"Students ";
			this->ui_studentsTable->Enter += gcnew System::EventHandler(this, &MainWindow::groupBox1_Enter);
			// 
			// dt_studentTable
			// 
			this->dt_studentTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dt_studentTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dt_studentTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->col_studentId,
					this->col_firstName, this->col_middleInitial, this->col_lastName, this->col_Course, this->col_GPA
			});
			this->dt_studentTable->Location = System::Drawing::Point(7, 20);
			this->dt_studentTable->Name = L"dt_studentTable";
			this->dt_studentTable->Size = System::Drawing::Size(918, 718);
			this->dt_studentTable->TabIndex = 0;
			// 
			// col_GPA
			// 
			this->col_GPA->HeaderText = L"GPA";
			this->col_GPA->Name = L"col_GPA";
			this->col_GPA->ReadOnly = true;
			this->col_GPA->Width = 150;
			// 
			// col_Course
			// 
			this->col_Course->HeaderText = L"Course";
			this->col_Course->Name = L"col_Course";
			this->col_Course->ReadOnly = true;
			this->col_Course->Width = 150;
			// 
			// col_lastName
			// 
			this->col_lastName->HeaderText = L"Last Name";
			this->col_lastName->Name = L"col_lastName";
			this->col_lastName->ReadOnly = true;
			this->col_lastName->Width = 150;
			// 
			// col_middleInitial
			// 
			this->col_middleInitial->HeaderText = L"Middle Initial";
			this->col_middleInitial->Name = L"col_middleInitial";
			this->col_middleInitial->ReadOnly = true;
			this->col_middleInitial->Width = 150;
			// 
			// col_firstName
			// 
			this->col_firstName->HeaderText = L"First Name";
			this->col_firstName->Name = L"col_firstName";
			this->col_firstName->ReadOnly = true;
			this->col_firstName->Width = 150;
			// 
			// col_studentId
			// 
			this->col_studentId->HeaderText = L"ID";
			this->col_studentId->Name = L"col_studentId";
			this->col_studentId->ReadOnly = true;
			this->col_studentId->Width = 150;
			// 
			// ui_controls
			// 
			this->ui_controls->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ui_controls->Controls->Add(this->btn_addQueue);
			this->ui_controls->Controls->Add(this->cmb_Course);
			this->ui_controls->Controls->Add(this->lbl_GPA);
			this->ui_controls->Controls->Add(this->lbl_course);
			this->ui_controls->Controls->Add(this->lbl_id);
			this->ui_controls->Controls->Add(this->lbl_lastName);
			this->ui_controls->Controls->Add(this->lbl_middleInitial);
			this->ui_controls->Controls->Add(this->lbl_firstName);
			this->ui_controls->Controls->Add(this->btn_changeFunction);
			this->ui_controls->Controls->Add(this->btn_Submit);
			this->ui_controls->Controls->Add(this->textBox6);
			this->ui_controls->Controls->Add(this->textBox4);
			this->ui_controls->Controls->Add(this->textBox3);
			this->ui_controls->Controls->Add(this->textBox2);
			this->ui_controls->Controls->Add(this->textBox1);
			this->ui_controls->Location = System::Drawing::Point(964, 12);
			this->ui_controls->Name = L"ui_controls";
			this->ui_controls->Size = System::Drawing::Size(625, 281);
			this->ui_controls->TabIndex = 1;
			this->ui_controls->TabStop = false;
			this->ui_controls->Text = L"Controls";
			// 
			// ui_recentDeletions
			// 
			this->ui_recentDeletions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ui_recentDeletions->Controls->Add(this->dt_recentDeletions);
			this->ui_recentDeletions->Location = System::Drawing::Point(964, 299);
			this->ui_recentDeletions->Name = L"ui_recentDeletions";
			this->ui_recentDeletions->Size = System::Drawing::Size(316, 451);
			this->ui_recentDeletions->TabIndex = 2;
			this->ui_recentDeletions->TabStop = false;
			this->ui_recentDeletions->Text = L"Recent Deletions";
			// 
			// ui_studentQueue
			// 
			this->ui_studentQueue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ui_studentQueue->Controls->Add(this->dt_serviceQueue);
			this->ui_studentQueue->Location = System::Drawing::Point(1299, 299);
			this->ui_studentQueue->Name = L"ui_studentQueue";
			this->ui_studentQueue->Size = System::Drawing::Size(290, 451);
			this->ui_studentQueue->TabIndex = 3;
			this->ui_studentQueue->TabStop = false;
			this->ui_studentQueue->Text = L"Student Service Queue";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox1->Location = System::Drawing::Point(30, 72);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox2->Location = System::Drawing::Point(216, 72);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox3->Location = System::Drawing::Point(382, 72);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox4->Location = System::Drawing::Point(30, 132);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(159, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox6->Location = System::Drawing::Point(382, 131);
			this->textBox6->Margin = System::Windows::Forms::Padding(5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(143, 20);
			this->textBox6->TabIndex = 5;
			// 
			// btn_Submit
			// 
			this->btn_Submit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Submit->Location = System::Drawing::Point(544, 243);
			this->btn_Submit->Name = L"btn_Submit";
			this->btn_Submit->Size = System::Drawing::Size(75, 23);
			this->btn_Submit->TabIndex = 6;
			this->btn_Submit->Text = L"Submit";
			this->btn_Submit->UseVisualStyleBackColor = true;
			// 
			// btn_changeFunction
			// 
			this->btn_changeFunction->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_changeFunction->Location = System::Drawing::Point(293, 243);
			this->btn_changeFunction->Name = L"btn_changeFunction";
			this->btn_changeFunction->Size = System::Drawing::Size(75, 23);
			this->btn_changeFunction->TabIndex = 7;
			this->btn_changeFunction->Text = L"Function";
			this->btn_changeFunction->UseVisualStyleBackColor = true;
			// 
			// lbl_firstName
			// 
			this->lbl_firstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_firstName->AutoSize = true;
			this->lbl_firstName->Location = System::Drawing::Point(30, 51);
			this->lbl_firstName->Name = L"lbl_firstName";
			this->lbl_firstName->Size = System::Drawing::Size(57, 13);
			this->lbl_firstName->TabIndex = 8;
			this->lbl_firstName->Text = L"First Name";
			this->lbl_firstName->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// lbl_middleInitial
			// 
			this->lbl_middleInitial->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_middleInitial->AutoSize = true;
			this->lbl_middleInitial->Location = System::Drawing::Point(216, 51);
			this->lbl_middleInitial->Name = L"lbl_middleInitial";
			this->lbl_middleInitial->Size = System::Drawing::Size(69, 13);
			this->lbl_middleInitial->TabIndex = 9;
			this->lbl_middleInitial->Text = L"Middle Name";
			// 
			// lbl_lastName
			// 
			this->lbl_lastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_lastName->AutoSize = true;
			this->lbl_lastName->Location = System::Drawing::Point(379, 51);
			this->lbl_lastName->Name = L"lbl_lastName";
			this->lbl_lastName->Size = System::Drawing::Size(58, 13);
			this->lbl_lastName->TabIndex = 10;
			this->lbl_lastName->Text = L"Last Name";
			// 
			// lbl_id
			// 
			this->lbl_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_id->AutoSize = true;
			this->lbl_id->Location = System::Drawing::Point(30, 111);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(18, 13);
			this->lbl_id->TabIndex = 11;
			this->lbl_id->Text = L"ID";
			// 
			// lbl_course
			// 
			this->lbl_course->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_course->AutoSize = true;
			this->lbl_course->Location = System::Drawing::Point(216, 111);
			this->lbl_course->Name = L"lbl_course";
			this->lbl_course->Size = System::Drawing::Size(40, 13);
			this->lbl_course->TabIndex = 12;
			this->lbl_course->Text = L"Course";
			// 
			// lbl_GPA
			// 
			this->lbl_GPA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_GPA->AutoSize = true;
			this->lbl_GPA->Location = System::Drawing::Point(382, 110);
			this->lbl_GPA->Name = L"lbl_GPA";
			this->lbl_GPA->Size = System::Drawing::Size(29, 13);
			this->lbl_GPA->TabIndex = 13;
			this->lbl_GPA->Text = L"GPA";
			this->lbl_GPA->Click += gcnew System::EventHandler(this, &MainWindow::label6_Click);
			// 
			// cmb_Course
			// 
			this->cmb_Course->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->cmb_Course->FormattingEnabled = true;
			this->cmb_Course->Location = System::Drawing::Point(219, 132);
			this->cmb_Course->Name = L"cmb_Course";
			this->cmb_Course->Size = System::Drawing::Size(121, 21);
			this->cmb_Course->TabIndex = 14;
			// 
			// dt_recentDeletions
			// 
			this->dt_recentDeletions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dt_recentDeletions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dt_recentDeletions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->rcol_ID,
					this->rcol_lastName
			});
			this->dt_recentDeletions->Location = System::Drawing::Point(6, 19);
			this->dt_recentDeletions->Name = L"dt_recentDeletions";
			this->dt_recentDeletions->Size = System::Drawing::Size(303, 425);
			this->dt_recentDeletions->TabIndex = 0;
			// 
			// dt_serviceQueue
			// 
			this->dt_serviceQueue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dt_serviceQueue->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dt_serviceQueue->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->qcol_no,
					this->qcol_id, this->qcol_lastName, this->qcol_Course, this->qcol_GPA
			});
			this->dt_serviceQueue->Location = System::Drawing::Point(6, 20);
			this->dt_serviceQueue->Name = L"dt_serviceQueue";
			this->dt_serviceQueue->Size = System::Drawing::Size(278, 425);
			this->dt_serviceQueue->TabIndex = 0;
			// 
			// rcol_ID
			// 
			this->rcol_ID->HeaderText = L"ID";
			this->rcol_ID->Name = L"rcol_ID";
			this->rcol_ID->ReadOnly = true;
			this->rcol_ID->Width = 150;
			// 
			// rcol_lastName
			// 
			this->rcol_lastName->HeaderText = L"Last Name";
			this->rcol_lastName->Name = L"rcol_lastName";
			this->rcol_lastName->ReadOnly = true;
			this->rcol_lastName->Width = 110;
			// 
			// qcol_no
			// 
			this->qcol_no->HeaderText = L"No";
			this->qcol_no->Name = L"qcol_no";
			this->qcol_no->ReadOnly = true;
			// 
			// qcol_id
			// 
			this->qcol_id->HeaderText = L"ID";
			this->qcol_id->Name = L"qcol_id";
			this->qcol_id->ReadOnly = true;
			this->qcol_id->Width = 150;
			// 
			// qcol_lastName
			// 
			this->qcol_lastName->HeaderText = L"Last Name";
			this->qcol_lastName->Name = L"qcol_lastName";
			this->qcol_lastName->ReadOnly = true;
			// 
			// qcol_Course
			// 
			this->qcol_Course->HeaderText = L"Course";
			this->qcol_Course->Name = L"qcol_Course";
			this->qcol_Course->ReadOnly = true;
			// 
			// qcol_GPA
			// 
			this->qcol_GPA->HeaderText = L"GPA";
			this->qcol_GPA->Name = L"qcol_GPA";
			this->qcol_GPA->ReadOnly = true;
			// 
			// btn_addQueue
			// 
			this->btn_addQueue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_addQueue->Location = System::Drawing::Point(385, 243);
			this->btn_addQueue->Name = L"btn_addQueue";
			this->btn_addQueue->Size = System::Drawing::Size(140, 23);
			this->btn_addQueue->TabIndex = 15;
			this->btn_addQueue->Text = L"Add to Queue";
			this->btn_addQueue->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1601, 777);
			this->Controls->Add(this->ui_studentQueue);
			this->Controls->Add(this->ui_recentDeletions);
			this->Controls->Add(this->ui_controls);
			this->Controls->Add(this->ui_studentsTable);
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Window";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ui_studentsTable->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_studentTable))->EndInit();
			this->ui_controls->ResumeLayout(false);
			this->ui_controls->PerformLayout();
			this->ui_recentDeletions->ResumeLayout(false);
			this->ui_studentQueue->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_recentDeletions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_serviceQueue))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
