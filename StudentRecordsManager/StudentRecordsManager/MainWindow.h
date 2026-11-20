#pragma once

#include "Common.h"
#include "StudentRecords.h"
#include "Sorting.h"
#include "QueueOperations.h"
#include "StudentStatistics.h"
#include <msclr/marshal_cppstd.h>
#include <vector>

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
		MainWindow(void) : functionMode(0), searchAlgorithm(0), records(new StudentRecordsCore::DataStore())
		{
			InitializeComponent();
			updateControlsForMode();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			delete records;
			records = nullptr;

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ ui_studentsTable;
	private: System::Windows::Forms::DataGridView^ dt_studentTable;







	private: System::Windows::Forms::GroupBox^ ui_controls;
	private: System::Windows::Forms::GroupBox^ ui_recentDeletions;
	private: System::Windows::Forms::GroupBox^ ui_studentQueue;
	private: System::Windows::Forms::TextBox^ txt_GPA;

	private: System::Windows::Forms::TextBox^ txt_id;


	private: System::Windows::Forms::TextBox^ txt_lastName;

	private: System::Windows::Forms::TextBox^ txt_middleName;

	private: System::Windows::Forms::TextBox^ textBoxSearchLastName;
	private: System::Windows::Forms::Label^ lbl_searchLastName;
	private: System::Windows::Forms::TextBox^ txt_firstName;

	private: System::Windows::Forms::Button^ btn_changeFunction;
	private: System::Windows::Forms::Button^ btn_Submit;
	private: System::Windows::Forms::Button^ btn_searchLinear;
	private: System::Windows::Forms::Button^ btn_searchBinary;
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
		int functionMode;
		int searchAlgorithm;
		StudentRecordsCore::DataStore* records;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_studentId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_firstName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_middleInitial;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_lastName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_Course;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_GPA;







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
			this->col_studentId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_middleInitial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_Course = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_GPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ui_controls = (gcnew System::Windows::Forms::GroupBox());
			this->btn_addQueue = (gcnew System::Windows::Forms::Button());
			this->btn_searchBinary = (gcnew System::Windows::Forms::Button());
			this->btn_searchLinear = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchLastName = (gcnew System::Windows::Forms::TextBox());
			this->lbl_searchLastName = (gcnew System::Windows::Forms::Label());
			this->cmb_Course = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_GPA = (gcnew System::Windows::Forms::Label());
			this->lbl_course = (gcnew System::Windows::Forms::Label());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->lbl_lastName = (gcnew System::Windows::Forms::Label());
			this->lbl_middleInitial = (gcnew System::Windows::Forms::Label());
			this->lbl_firstName = (gcnew System::Windows::Forms::Label());
			this->btn_changeFunction = (gcnew System::Windows::Forms::Button());
			this->btn_Submit = (gcnew System::Windows::Forms::Button());
			this->txt_GPA = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_lastName = (gcnew System::Windows::Forms::TextBox());
			this->txt_middleName = (gcnew System::Windows::Forms::TextBox());
			this->txt_firstName = (gcnew System::Windows::Forms::TextBox());
			this->ui_recentDeletions = (gcnew System::Windows::Forms::GroupBox());
			this->dt_recentDeletions = (gcnew System::Windows::Forms::DataGridView());
			this->rcol_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rcol_lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ui_studentQueue = (gcnew System::Windows::Forms::GroupBox());
			this->dt_serviceQueue = (gcnew System::Windows::Forms::DataGridView());
			this->qcol_no = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_Course = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qcol_GPA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ui_studentsTable->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_studentTable))->BeginInit();
			this->ui_controls->SuspendLayout();
			this->ui_recentDeletions->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_recentDeletions))->BeginInit();
			this->ui_studentQueue->SuspendLayout();
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
			// col_studentId
			// 
			this->col_studentId->HeaderText = L"ID";
			this->col_studentId->Name = L"col_studentId";
			this->col_studentId->ReadOnly = true;
			this->col_studentId->Width = 120;
			// 
			// col_firstName
			// 
			this->col_firstName->HeaderText = L"First Name";
			this->col_firstName->Name = L"col_firstName";
			this->col_firstName->ReadOnly = true;
			this->col_firstName->Width = 150;
			// 
			// col_middleInitial
			// 
			this->col_middleInitial->HeaderText = L"Middle Initial";
			this->col_middleInitial->Name = L"col_middleInitial";
			this->col_middleInitial->ReadOnly = true;
			this->col_middleInitial->Width = 150;
			// 
			// col_lastName
			// 
			this->col_lastName->HeaderText = L"Last Name";
			this->col_lastName->Name = L"col_lastName";
			this->col_lastName->ReadOnly = true;
			this->col_lastName->Width = 150;
			// 
			// col_Course
			// 
			this->col_Course->HeaderText = L"Course";
			this->col_Course->Name = L"col_Course";
			this->col_Course->ReadOnly = true;
			this->col_Course->Width = 250;
			// 
			// col_GPA
			// 
			this->col_GPA->HeaderText = L"GPA";
			this->col_GPA->Name = L"col_GPA";
			this->col_GPA->ReadOnly = true;
			this->col_GPA->Width = 60;
			// 
			// ui_controls
			// 
			this->ui_controls->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ui_controls->Controls->Add(this->btn_addQueue);
			this->ui_controls->Controls->Add(this->btn_searchBinary);
			this->ui_controls->Controls->Add(this->btn_searchLinear);
			this->ui_controls->Controls->Add(this->textBoxSearchLastName);
			this->ui_controls->Controls->Add(this->lbl_searchLastName);
			this->ui_controls->Controls->Add(this->cmb_Course);
			this->ui_controls->Controls->Add(this->lbl_GPA);
			this->ui_controls->Controls->Add(this->lbl_course);
			this->ui_controls->Controls->Add(this->lbl_id);
			this->ui_controls->Controls->Add(this->lbl_lastName);
			this->ui_controls->Controls->Add(this->lbl_middleInitial);
			this->ui_controls->Controls->Add(this->lbl_firstName);
			this->ui_controls->Controls->Add(this->btn_changeFunction);
			this->ui_controls->Controls->Add(this->btn_Submit);
			this->ui_controls->Controls->Add(this->txt_GPA);
			this->ui_controls->Controls->Add(this->txt_id);
			this->ui_controls->Controls->Add(this->txt_lastName);
			this->ui_controls->Controls->Add(this->txt_middleName);
			this->ui_controls->Controls->Add(this->txt_firstName);
			this->ui_controls->Location = System::Drawing::Point(964, 12);
			this->ui_controls->Name = L"ui_controls";
			this->ui_controls->Size = System::Drawing::Size(625, 281);
			this->ui_controls->TabIndex = 1;
			this->ui_controls->TabStop = false;
			this->ui_controls->Text = L"Add Student";
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
			// btn_searchBinary
			// 
			this->btn_searchBinary->Location = System::Drawing::Point(30, 217);
			this->btn_searchBinary->Name = L"btn_searchBinary";
			this->btn_searchBinary->Size = System::Drawing::Size(130, 23);
			this->btn_searchBinary->TabIndex = 19;
			this->btn_searchBinary->Text = L"Binary Search";
			this->btn_searchBinary->UseVisualStyleBackColor = true;
			this->btn_searchBinary->Click += gcnew System::EventHandler(this, &MainWindow::btn_searchBinary_Click);
			// 
			// btn_searchLinear
			// 
			this->btn_searchLinear->Location = System::Drawing::Point(30, 190);
			this->btn_searchLinear->Name = L"btn_searchLinear";
			this->btn_searchLinear->Size = System::Drawing::Size(130, 23);
			this->btn_searchLinear->TabIndex = 18;
			this->btn_searchLinear->Text = L"Linear Search";
			this->btn_searchLinear->UseVisualStyleBackColor = true;
			this->btn_searchLinear->Click += gcnew System::EventHandler(this, &MainWindow::btn_searchLinear_Click);
			// 
			// textBoxSearchLastName
			// 
			this->textBoxSearchLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBoxSearchLastName->Location = System::Drawing::Point(219, 133);
			this->textBoxSearchLastName->Name = L"textBoxSearchLastName";
			this->textBoxSearchLastName->Size = System::Drawing::Size(133, 20);
			this->textBoxSearchLastName->TabIndex = 17;
			// 
			// lbl_searchLastName
			// 
			this->lbl_searchLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_searchLastName->AutoSize = true;
			this->lbl_searchLastName->Location = System::Drawing::Point(216, 111);
			this->lbl_searchLastName->Name = L"lbl_searchLastName";
			this->lbl_searchLastName->Size = System::Drawing::Size(58, 13);
			this->lbl_searchLastName->TabIndex = 16;
			this->lbl_searchLastName->Text = L"Last Name";
			// 
			// cmb_Course
			// 
			this->cmb_Course->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->cmb_Course->FormattingEnabled = true;
			this->cmb_Course->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Bachelor of Science in Computer Science", L"Bachelor of Science in Information Technology",
					L"Bachelor of Science in Computer Engineering", L"Bachelor of Science in Game Development", L"Bachelor of Science in Systems Development"
			});
			this->cmb_Course->Location = System::Drawing::Point(219, 132);
			this->cmb_Course->Name = L"cmb_Course";
			this->cmb_Course->Size = System::Drawing::Size(192, 21);
			this->cmb_Course->TabIndex = 14;
			// 
			// lbl_GPA
			// 
			this->lbl_GPA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_GPA->AutoSize = true;
			this->lbl_GPA->Location = System::Drawing::Point(445, 111);
			this->lbl_GPA->Name = L"lbl_GPA";
			this->lbl_GPA->Size = System::Drawing::Size(29, 13);
			this->lbl_GPA->TabIndex = 13;
			this->lbl_GPA->Text = L"GPA";
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
			// lbl_firstName
			// 
			this->lbl_firstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->lbl_firstName->AutoSize = true;
			this->lbl_firstName->Location = System::Drawing::Point(30, 51);
			this->lbl_firstName->Name = L"lbl_firstName";
			this->lbl_firstName->Size = System::Drawing::Size(57, 13);
			this->lbl_firstName->TabIndex = 8;
			this->lbl_firstName->Text = L"First Name";
			// 
			// btn_changeFunction
			// 
			this->btn_changeFunction->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_changeFunction->Location = System::Drawing::Point(293, 243);
			this->btn_changeFunction->Name = L"btn_changeFunction";
			this->btn_changeFunction->Size = System::Drawing::Size(75, 23);
			this->btn_changeFunction->TabIndex = 7;
			this->btn_changeFunction->Text = L"Next: Edit";
			this->btn_changeFunction->UseVisualStyleBackColor = true;
			this->btn_changeFunction->Click += gcnew System::EventHandler(this, &MainWindow::btn_changeFunction_Click);
			// 
			// btn_Submit
			// 
			this->btn_Submit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Submit->Location = System::Drawing::Point(544, 243);
			this->btn_Submit->Name = L"btn_Submit";
			this->btn_Submit->Size = System::Drawing::Size(75, 23);
			this->btn_Submit->TabIndex = 6;
			this->btn_Submit->Text = L"Add";
			this->btn_Submit->UseVisualStyleBackColor = true;
			this->btn_Submit->Click += gcnew System::EventHandler(this, &MainWindow::btn_Submit_Click);
			// 
			// txt_GPA
			// 
			this->txt_GPA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->txt_GPA->Location = System::Drawing::Point(448, 132);
			this->txt_GPA->Margin = System::Windows::Forms::Padding(5);
			this->txt_GPA->Name = L"txt_GPA";
			this->txt_GPA->Size = System::Drawing::Size(77, 20);
			this->txt_GPA->TabIndex = 5;
			// 
			// txt_id
			// 
			this->txt_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->txt_id->Location = System::Drawing::Point(30, 132);
			this->txt_id->Margin = System::Windows::Forms::Padding(5);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(159, 20);
			this->txt_id->TabIndex = 3;
			// 
			// txt_lastName
			// 
			this->txt_lastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->txt_lastName->Location = System::Drawing::Point(382, 72);
			this->txt_lastName->Margin = System::Windows::Forms::Padding(5);
			this->txt_lastName->Name = L"txt_lastName";
			this->txt_lastName->Size = System::Drawing::Size(143, 20);
			this->txt_lastName->TabIndex = 2;
			// 
			// txt_middleName
			// 
			this->txt_middleName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->txt_middleName->Location = System::Drawing::Point(216, 72);
			this->txt_middleName->Margin = System::Windows::Forms::Padding(5);
			this->txt_middleName->Name = L"txt_middleName";
			this->txt_middleName->Size = System::Drawing::Size(133, 20);
			this->txt_middleName->TabIndex = 1;
			// 
			// txt_firstName
			// 
			this->txt_firstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->txt_firstName->Location = System::Drawing::Point(30, 72);
			this->txt_firstName->Margin = System::Windows::Forms::Padding(5);
			this->txt_firstName->Name = L"txt_firstName";
			this->txt_firstName->Size = System::Drawing::Size(159, 20);
			this->txt_firstName->TabIndex = 0;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_recentDeletions))->EndInit();
			this->ui_studentQueue->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt_serviceQueue))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		String^ formatStudentDetails(const StudentRecordsCore::Student& student)
		{
			return String::Format(
				L"ID: {0}\nFirst Name: {1}\nMiddle Initial: {2}\nLast Name: {3}\nCourse: {4}\nGPA: {5:F2}",
				student.id,
				msclr::interop::marshal_as<String^>(student.firstName),
				msclr::interop::marshal_as<String^>(student.middleInitial),
				msclr::interop::marshal_as<String^>(student.lastName),
				msclr::interop::marshal_as<String^>(student.course),
				student.gpa);
		}

		void showStudentRow(const StudentRecordsCore::Student& student)
		{
			array<Object^>^ row = gcnew array<Object^>(6);
			row[0] = student.id;
			row[1] = msclr::interop::marshal_as<String^>(student.firstName);
			row[2] = msclr::interop::marshal_as<String^>(student.middleInitial);
			row[3] = msclr::interop::marshal_as<String^>(student.lastName);
			row[4] = msclr::interop::marshal_as<String^>(student.course);
			row[5] = student.gpa;
			this->dt_studentTable->Rows->Add(row);
		}

		void refreshStudentTable()
		{
			this->dt_studentTable->Rows->Clear();
			for (StudentRecordsCore::Node* current = records->head; current != nullptr; current = current->next)
			{
				showStudentRow(current->data);
			}
		}

		void refreshRecentlyDeletedTable()
		{
			this->dt_recentDeletions->Rows->Clear();
			std::vector<StudentRecordsCore::Student> deletedStudents = StudentRecordsCore::getDeletedStudents(*records);
			for (std::size_t i = 0; i < deletedStudents.size(); ++i)
			{
				array<Object^>^ row = gcnew array<Object^>(2);
				row[0] = deletedStudents[i].id;
				row[1] = msclr::interop::marshal_as<String^>(deletedStudents[i].lastName);
				this->dt_recentDeletions->Rows->Add(row);
			}
		}

		bool readStudentFields(int id, StudentRecordsCore::Student& student)
		{
			if (this->txt_firstName->Text->Trim()->Length == 0 ||
				this->txt_lastName->Text->Trim()->Length == 0 ||
				this->cmb_Course->Text->Trim()->Length == 0)
			{
				MessageBox::Show(L"Enter the student's first name, last name, and course.", L"Missing Information", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}

			double gpa;
			if (!Double::TryParse(this->txt_GPA->Text->Trim(), gpa) || gpa < 0.0 || gpa > 5.0)
			{
				MessageBox::Show(L"Enter a GPA from 0 to 5.", L"Invalid GPA", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}

			student.id = id;
			student.firstName = msclr::interop::marshal_as<std::string>(this->txt_firstName->Text->Trim());
			student.middleInitial = msclr::interop::marshal_as<std::string>(this->txt_middleName->Text->Trim());
			student.lastName = msclr::interop::marshal_as<std::string>(this->txt_lastName->Text->Trim());
			student.course = msclr::interop::marshal_as<std::string>(this->cmb_Course->Text->Trim());
			student.gpa = gpa;
			return true;
		}

		void submitCurrentAction()
		{
			if (functionMode == 0 || functionMode == 1)
			{
				int id;
				if (!Int32::TryParse(this->txt_id->Text->Trim(), id) || id <= 0)
				{
					MessageBox::Show(L"Enter a positive numeric student ID.", L"Invalid ID", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				StudentRecordsCore::Student student;
				if (!readStudentFields(id, student))
				{
					return;
				}

				if (functionMode == 0)
				{
					if (!StudentRecordsCore::addStudent(*records, student))
					{
						MessageBox::Show(L"That student ID already exists.", L"Duplicate ID", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						return;
					}
				}
				else if (!StudentRecordsCore::updateStudent(*records, id, student))
				{
					MessageBox::Show(L"No student was found with that ID.", L"Student Not Found", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}

				refreshStudentTable();
				return;
			}

			if (functionMode == 2)
			{
				int id;
				if (!Int32::TryParse(this->txt_id->Text->Trim(), id) || id <= 0)
				{
					MessageBox::Show(L"Enter a positive numeric student ID.", L"Invalid ID", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				if (!StudentRecordsCore::deleteStudent(*records, id))
				{
					MessageBox::Show(L"No student was found with that ID.", L"Student Not Found", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}

				refreshStudentTable();
				refreshRecentlyDeletedTable();
				MessageBox::Show(L"Student deleted and added to Recent Deletions.", L"Student Deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			if (functionMode == 3)
			{
				String^ idText = this->txt_id->Text->Trim();
				String^ lastNameText = this->textBoxSearchLastName->Text->Trim();
				bool hasId = idText->Length > 0;
				bool hasLastName = lastNameText->Length > 0;
				if (hasId == hasLastName)
				{
					MessageBox::Show(L"Enter either a student ID or a last name to search.", L"Search Criteria", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}

				this->dt_studentTable->Rows->Clear();
				if (hasId)
				{
					int id;
					if (!Int32::TryParse(idText, id) || id <= 0)
					{
						MessageBox::Show(L"Enter a positive numeric student ID.", L"Invalid ID", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						return;
					}

					StudentRecordsCore::Student student;
					bool found = searchAlgorithm == 0
						? StudentRecordsCore::linearSearch(*records, id, student)
						: StudentRecordsCore::binarySearch(*records, id, student);
					if (found)
					{
						showStudentRow(student);
						String^ algorithm = searchAlgorithm == 0 ? L"Linear Search" : L"Binary Search";
						MessageBox::Show(formatStudentDetails(student), algorithm + L" Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else
					{
						MessageBox::Show(L"Student not found.", L"Search Results", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else
				{
					std::string lastName = msclr::interop::marshal_as<std::string>(lastNameText);
					std::vector<StudentRecordsCore::Student> matches = StudentRecordsCore::findStudentsByLastName(*records, lastName);
					String^ details = L"";
					for (std::size_t i = 0; i < matches.size(); ++i)
					{
						showStudentRow(matches[i]);
						if (details->Length > 0)
						{
							details += L"\n\n";
						}
						details += formatStudentDetails(matches[i]);
					}
					if (matches.empty())
					{
						MessageBox::Show(L"No matching student was found.", L"Search Results", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else
					{
						MessageBox::Show(details, L"Search Results", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
			}
		}

	private: System::Void btn_Submit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		submitCurrentAction();
	}

	private: System::Void btn_searchLinear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		searchAlgorithm = 0;
		updateControlsForMode();
	}

	private: System::Void btn_searchBinary_Click(System::Object^ sender, System::EventArgs^ e)
	{
		searchAlgorithm = 1;
		updateControlsForMode();
	}

	private:
		void updateControlsForMode()
		{
			bool showStudentFields = (functionMode == 0 || functionMode == 1);
			bool isSearchMode = (functionMode == 3);

			//add and edit
			this->lbl_firstName->Visible = showStudentFields;
			this->txt_firstName->Visible = showStudentFields;
			this->lbl_middleInitial->Visible = showStudentFields;
			this->txt_middleName->Visible = showStudentFields;
			this->lbl_lastName->Visible = showStudentFields;
			this->txt_lastName->Visible = showStudentFields;
			this->lbl_course->Visible = showStudentFields;
			this->cmb_Course->Visible = showStudentFields;
			this->lbl_GPA->Visible = showStudentFields;
			this->txt_GPA->Visible = showStudentFields;

			//search
			this->lbl_searchLastName->Visible = isSearchMode;
			this->textBoxSearchLastName->Visible = isSearchMode;
			this->btn_searchLinear->Visible = isSearchMode;
			this->btn_searchBinary->Visible = isSearchMode;
			this->btn_searchLinear->UseVisualStyleBackColor = false;
			this->btn_searchBinary->UseVisualStyleBackColor = false;
			this->btn_searchLinear->BackColor = searchAlgorithm == 0 ? Color::LightBlue : SystemColors::Control;
			this->btn_searchBinary->BackColor = searchAlgorithm == 1 ? Color::LightBlue : SystemColors::Control;

			switch (functionMode)
			{
			case 1:
				this->ui_controls->Text = L"Edit Student";
				this->btn_Submit->Text = L"Edit";
				this->btn_changeFunction->Text = L"Next: Delete";
				break;
			case 2:
				this->ui_controls->Text = L"Delete Student";
				this->btn_Submit->Text = L"Delete";
				this->btn_changeFunction->Text = L"Next: Search";
				break;
			case 3:
				this->ui_controls->Text = L"Search Student";
				this->btn_Submit->Text = L"Search";
				this->btn_changeFunction->Text = L"Next: Add";
				break;
			default:
				this->ui_controls->Text = L"Add Student";
				this->btn_Submit->Text = L"Add";
				this->btn_changeFunction->Text = L"Next: Edit";
				break;
			}
		}

	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn_changeFunction_Click(System::Object^ sender, System::EventArgs^ e)
	{
		functionMode = (functionMode + 1) % 4;
		if (functionMode == 3)
		{
			this->txt_id->Clear();
			this->textBoxSearchLastName->Clear();
		}
		updateControlsForMode();
	}
};
}
