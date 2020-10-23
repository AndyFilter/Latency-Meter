#pragma once
#include "MyForm.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <chrono>
#include <vector>                                                                                                                        
#include <numeric>   
#include <algorithm>
#include <fstream>  
#include <shlobj.h>
#include <atlstr.h>
#include <filesystem>
#include <exception>
namespace fs = std::filesystem;


#ifndef Form_h
#define Form_h

namespace SystemLatencyApp {

	std::chrono::steady_clock::time_point start; // You can mention the type of start and end explicitly,.
	std::chrono::steady_clock::time_point end;
	std::chrono::steady_clock::time_point PingEnd;
	std::chrono::steady_clock::time_point PingStart;
	std::vector<int> TestsSys;
	std::vector<int> TestsMouse;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace std;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Label^ SysLat;
	protected:

	public: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ PcLat;

	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::ComboBox^ comboBox1;
	public: System::Windows::Forms::Label^ MouseLat;

	private: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel5;
	public: System::Windows::Forms::Label^ AvgSys;
	private: System::Windows::Forms::Panel^ panel6;
	public: System::Windows::Forms::Label^ AvgMouse;
	public: System::Windows::Forms::Label^ Label9;
	private: System::Windows::Forms::Panel^ panel7;
	public: System::Windows::Forms::Label^ MinSys;
	public: System::Windows::Forms::Label^ Label10;
	public: System::Windows::Forms::Panel^ LightZone;
	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ SaveName;
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel8;
	public: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TableLayoutPanel^ Saves;
	private: System::Windows::Forms::Button^ Export;
	private: System::Windows::Forms::Button^ Import;
	private: System::Windows::Forms::Panel^ panel9;
	public: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ ExportName;
	private: System::Windows::Forms::Panel^ panel10;
	public: System::Windows::Forms::ComboBox^ FileCB;
	private:


	public: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ RemoveSavedFile;
	public:
	private:
	public:
	private:

	public:
	private: System::ComponentModel::IContainer^ components;
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
			   this->SysLat = (gcnew System::Windows::Forms::Label());
			   this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->PcLat = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->MouseLat = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->Reset = (gcnew System::Windows::Forms::Button());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->panel4 = (gcnew System::Windows::Forms::Panel());
			   this->panel5 = (gcnew System::Windows::Forms::Panel());
			   this->AvgSys = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->panel6 = (gcnew System::Windows::Forms::Panel());
			   this->AvgMouse = (gcnew System::Windows::Forms::Label());
			   this->Label9 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel7 = (gcnew System::Windows::Forms::Panel());
			   this->MinSys = (gcnew System::Windows::Forms::Label());
			   this->Label10 = (gcnew System::Windows::Forms::Label());
			   this->panel8 = (gcnew System::Windows::Forms::Panel());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->SaveName = (gcnew System::Windows::Forms::TextBox());
			   this->LightZone = (gcnew System::Windows::Forms::Panel());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->Saves = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->Export = (gcnew System::Windows::Forms::Button());
			   this->Import = (gcnew System::Windows::Forms::Button());
			   this->panel9 = (gcnew System::Windows::Forms::Panel());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->ExportName = (gcnew System::Windows::Forms::TextBox());
			   this->panel10 = (gcnew System::Windows::Forms::Panel());
			   this->FileCB = (gcnew System::Windows::Forms::ComboBox());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->RemoveSavedFile = (gcnew System::Windows::Forms::Button());
			   this->tableLayoutPanel1->SuspendLayout();
			   this->panel3->SuspendLayout();
			   this->panel2->SuspendLayout();
			   this->panel4->SuspendLayout();
			   this->panel5->SuspendLayout();
			   this->panel6->SuspendLayout();
			   this->panel7->SuspendLayout();
			   this->panel8->SuspendLayout();
			   this->Saves->SuspendLayout();
			   this->panel9->SuspendLayout();
			   this->panel10->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // SysLat
			   // 
			   this->SysLat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->SysLat->AutoSize = true;
			   this->SysLat->BackColor = System::Drawing::Color::Gray;
			   this->SysLat->Location = System::Drawing::Point(3, 35);
			   this->SysLat->Name = L"SysLat";
			   this->SysLat->Size = System::Drawing::Size(26, 13);
			   this->SysLat->TabIndex = 0;
			   this->SysLat->Text = L"0ms";
			   // 
			   // serialPort1
			   // 
			   this->serialPort1->PortName = L"COM3";
			   this->serialPort1->ReadTimeout = 100;
			   this->serialPort1->WriteTimeout = 100;
			   this->serialPort1->ErrorReceived += gcnew System::IO::Ports::SerialErrorReceivedEventHandler(this, &MyForm::RecError);
			   this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::Received);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Gray;
			   this->label2->Location = System::Drawing::Point(3, 11);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(85, 13);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"System Latency:";
			   // 
			   // PcLat
			   // 
			   this->PcLat->AutoSize = true;
			   this->PcLat->BackColor = System::Drawing::Color::Gray;
			   this->PcLat->Location = System::Drawing::Point(3, 35);
			   this->PcLat->Name = L"PcLat";
			   this->PcLat->Size = System::Drawing::Size(26, 13);
			   this->PcLat->TabIndex = 4;
			   this->PcLat->Text = L"0ms";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::Gray;
			   this->label4->Location = System::Drawing::Point(3, 11);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(65, 13);
			   this->label4->TabIndex = 5;
			   this->label4->Text = L"PC Latency:";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(172, 3);
			   this->comboBox1->Margin = System::Windows::Forms::Padding(0, 3, 0, 0);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(172, 21);
			   this->comboBox1->TabIndex = 7;
			   this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::MadeSelection);
			   this->comboBox1->Enter += gcnew System::EventHandler(this, &MyForm::AddPorts);
			   // 
			   // MouseLat
			   // 
			   this->MouseLat->AutoSize = true;
			   this->MouseLat->BackColor = System::Drawing::Color::Gray;
			   this->MouseLat->Location = System::Drawing::Point(6, 35);
			   this->MouseLat->Name = L"MouseLat";
			   this->MouseLat->Size = System::Drawing::Size(26, 13);
			   this->MouseLat->TabIndex = 8;
			   this->MouseLat->Text = L"0ms";
			   // 
			   // button3
			   // 
			   this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->button3->Location = System::Drawing::Point(175, 61);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(166, 41);
			   this->button3->TabIndex = 9;
			   this->button3->Text = L"Calculate Mouse Latency";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::TestPing);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->BackColor = System::Drawing::Color::Gray;
			   this->label6->Location = System::Drawing::Point(6, 11);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(83, 13);
			   this->label6->TabIndex = 10;
			   this->label6->Text = L"Mouse Latency:";
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel1->AutoSize = true;
			   this->tableLayoutPanel1->ColumnCount = 3;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel1->Controls->Add(this->button4, 0, 5);
			   this->tableLayoutPanel1->Controls->Add(this->Reset, 1, 4);
			   this->tableLayoutPanel1->Controls->Add(this->panel3, 2, 2);
			   this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 2);
			   this->tableLayoutPanel1->Controls->Add(this->button2, 2, 0);
			   this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			   this->tableLayoutPanel1->Controls->Add(this->comboBox1, 1, 0);
			   this->tableLayoutPanel1->Controls->Add(this->button3, 1, 1);
			   this->tableLayoutPanel1->Controls->Add(this->panel4, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->panel5, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->panel6, 1, 3);
			   this->tableLayoutPanel1->Controls->Add(this->panel1, 2, 1);
			   this->tableLayoutPanel1->Controls->Add(this->panel7, 2, 3);
			   this->tableLayoutPanel1->Controls->Add(this->panel8, 1, 5);
			   this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			   this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			   this->tableLayoutPanel1->MaximumSize = System::Drawing::Size(516, 442);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 6;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.27547F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.90579F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 23.2903F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.23077F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.57466F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.51584F)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(516, 442);
			   this->tableLayoutPanel1->TabIndex = 11;
			   // 
			   // button4
			   // 
			   this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->button4->Location = System::Drawing::Point(3, 371);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(166, 29);
			   this->button4->TabIndex = 15;
			   this->button4->Text = L"Save Records";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::SaveRecords);
			   // 
			   // Reset
			   // 
			   this->Reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->Reset->Location = System::Drawing::Point(175, 312);
			   this->Reset->Name = L"Reset";
			   this->Reset->Size = System::Drawing::Size(166, 29);
			   this->Reset->TabIndex = 12;
			   this->Reset->Text = L"Reset";
			   this->Reset->UseVisualStyleBackColor = true;
			   this->Reset->Click += gcnew System::EventHandler(this, &MyForm::ResetTests);
			   // 
			   // panel3
			   // 
			   this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel3->Controls->Add(this->SysLat);
			   this->panel3->Controls->Add(this->label4);
			   this->panel3->Location = System::Drawing::Point(347, 126);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(166, 48);
			   this->panel3->TabIndex = 12;
			   // 
			   // panel2
			   // 
			   this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel2->Controls->Add(this->MouseLat);
			   this->panel2->Controls->Add(this->label6);
			   this->panel2->Location = System::Drawing::Point(175, 126);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(166, 48);
			   this->panel2->TabIndex = 11;
			   // 
			   // button2
			   // 
			   this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->button2->Location = System::Drawing::Point(435, 3);
			   this->button2->Margin = System::Windows::Forms::Padding(6, 3, 6, 6);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(75, 23);
			   this->button2->TabIndex = 2;
			   this->button2->Text = L"Stop";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::Stop);
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(6, 3);
			   this->button1->Margin = System::Windows::Forms::Padding(6, 3, 6, 6);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(75, 23);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Start";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::Start);
			   // 
			   // panel4
			   // 
			   this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel4->Controls->Add(this->PcLat);
			   this->panel4->Controls->Add(this->label2);
			   this->panel4->Location = System::Drawing::Point(3, 126);
			   this->panel4->Name = L"panel4";
			   this->panel4->Size = System::Drawing::Size(166, 48);
			   this->panel4->TabIndex = 12;
			   // 
			   // panel5
			   // 
			   this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel5->Controls->Add(this->AvgSys);
			   this->panel5->Controls->Add(this->label12);
			   this->panel5->Location = System::Drawing::Point(3, 228);
			   this->panel5->Name = L"panel5";
			   this->panel5->Size = System::Drawing::Size(166, 48);
			   this->panel5->TabIndex = 12;
			   // 
			   // AvgSys
			   // 
			   this->AvgSys->AutoSize = true;
			   this->AvgSys->BackColor = System::Drawing::Color::Gray;
			   this->AvgSys->Location = System::Drawing::Point(6, 35);
			   this->AvgSys->Name = L"AvgSys";
			   this->AvgSys->Size = System::Drawing::Size(26, 13);
			   this->AvgSys->TabIndex = 8;
			   this->AvgSys->Text = L"0ms";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->BackColor = System::Drawing::Color::Gray;
			   this->label12->Location = System::Drawing::Point(6, 11);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(128, 13);
			   this->label12->TabIndex = 13;
			   this->label12->Text = L"Average System Latency:";
			   // 
			   // panel6
			   // 
			   this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel6->Controls->Add(this->AvgMouse);
			   this->panel6->Controls->Add(this->Label9);
			   this->panel6->Location = System::Drawing::Point(175, 228);
			   this->panel6->Name = L"panel6";
			   this->panel6->Size = System::Drawing::Size(166, 48);
			   this->panel6->TabIndex = 13;
			   // 
			   // AvgMouse
			   // 
			   this->AvgMouse->AutoSize = true;
			   this->AvgMouse->BackColor = System::Drawing::Color::Gray;
			   this->AvgMouse->Location = System::Drawing::Point(6, 35);
			   this->AvgMouse->Name = L"AvgMouse";
			   this->AvgMouse->Size = System::Drawing::Size(26, 13);
			   this->AvgMouse->TabIndex = 8;
			   this->AvgMouse->Text = L"0ms";
			   // 
			   // Label9
			   // 
			   this->Label9->AutoSize = true;
			   this->Label9->BackColor = System::Drawing::Color::Gray;
			   this->Label9->Location = System::Drawing::Point(6, 11);
			   this->Label9->Name = L"Label9";
			   this->Label9->Size = System::Drawing::Size(126, 13);
			   this->Label9->TabIndex = 10;
			   this->Label9->Text = L"Average Mouse Latency:";
			   // 
			   // panel1
			   // 
			   this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel1->AutoSize = true;
			   this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel1->Location = System::Drawing::Point(347, 61);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(166, 0);
			   this->panel1->TabIndex = 10;
			   // 
			   // panel7
			   // 
			   this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel7->Controls->Add(this->MinSys);
			   this->panel7->Controls->Add(this->Label10);
			   this->panel7->Location = System::Drawing::Point(347, 228);
			   this->panel7->Name = L"panel7";
			   this->panel7->Size = System::Drawing::Size(166, 48);
			   this->panel7->TabIndex = 14;
			   // 
			   // MinSys
			   // 
			   this->MinSys->AutoSize = true;
			   this->MinSys->BackColor = System::Drawing::Color::Gray;
			   this->MinSys->Location = System::Drawing::Point(6, 35);
			   this->MinSys->Name = L"MinSys";
			   this->MinSys->Size = System::Drawing::Size(26, 13);
			   this->MinSys->TabIndex = 8;
			   this->MinSys->Text = L"0ms";
			   // 
			   // Label10
			   // 
			   this->Label10->AutoSize = true;
			   this->Label10->BackColor = System::Drawing::Color::Gray;
			   this->Label10->Location = System::Drawing::Point(6, 11);
			   this->Label10->Name = L"Label10";
			   this->Label10->Size = System::Drawing::Size(86, 13);
			   this->Label10->TabIndex = 10;
			   this->Label10->Text = L"Minimal Latency:";
			   // 
			   // panel8
			   // 
			   this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel8->Controls->Add(this->label8);
			   this->panel8->Controls->Add(this->SaveName);
			   this->panel8->Location = System::Drawing::Point(175, 371);
			   this->panel8->Name = L"panel8";
			   this->panel8->Size = System::Drawing::Size(166, 68);
			   this->panel8->TabIndex = 14;
			   // 
			   // label8
			   // 
			   this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label8->BackColor = System::Drawing::Color::Gray;
			   this->label8->Location = System::Drawing::Point(0, 0);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(163, 15);
			   this->label8->TabIndex = 11;
			   this->label8->Text = L"Save name:";
			   // 
			   // SaveName
			   // 
			   this->SaveName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->SaveName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::RecentlyUsedList;
			   this->SaveName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->SaveName->Location = System::Drawing::Point(0, 18);
			   this->SaveName->Name = L"SaveName";
			   this->SaveName->Size = System::Drawing::Size(163, 20);
			   this->SaveName->TabIndex = 16;
			   // 
			   // LightZone
			   // 
			   this->LightZone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->LightZone->AutoScroll = true;
			   this->LightZone->AutoSize = true;
			   this->LightZone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				   static_cast<System::Int32>(static_cast<System::Byte>(20)));
			   this->LightZone->Location = System::Drawing::Point(12, 498);
			   this->LightZone->Name = L"LightZone";
			   this->LightZone->Size = System::Drawing::Size(1029, 253);
			   this->LightZone->TabIndex = 13;
			   // 
			   // label11
			   // 
			   this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label11->AutoSize = true;
			   this->label11->BackColor = System::Drawing::Color::Gray;
			   this->label11->Location = System::Drawing::Point(264, 1);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(123, 26);
			   this->label11->TabIndex = 12;
			   this->label11->Text = L"Average Mouse Latency:";
			   // 
			   // label7
			   // 
			   this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label7->AutoSize = true;
			   this->label7->BackColor = System::Drawing::Color::Gray;
			   this->label7->Location = System::Drawing::Point(394, 1);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(124, 13);
			   this->label7->TabIndex = 11;
			   this->label7->Text = L"Minimal System Latency:";
			   // 
			   // label13
			   // 
			   this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label13->AutoSize = true;
			   this->label13->BackColor = System::Drawing::Color::Gray;
			   this->label13->Location = System::Drawing::Point(134, 1);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(123, 26);
			   this->label13->TabIndex = 14;
			   this->label13->Text = L"Average System Latency:";
			   // 
			   // label14
			   // 
			   this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label14->AutoSize = true;
			   this->label14->BackColor = System::Drawing::Color::Gray;
			   this->label14->Location = System::Drawing::Point(4, 1);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(123, 13);
			   this->label14->TabIndex = 15;
			   this->label14->Text = L"Name:";
			   // 
			   // Saves
			   // 
			   this->Saves->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			   this->Saves->ColumnCount = 4;
			   this->Saves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->Saves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->Saves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->Saves->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->Saves->Controls->Add(this->label7, 3, 0);
			   this->Saves->Controls->Add(this->label14, 0, 0);
			   this->Saves->Controls->Add(this->label11, 2, 0);
			   this->Saves->Controls->Add(this->label13, 1, 0);
			   this->Saves->Location = System::Drawing::Point(519, 3);
			   this->Saves->Name = L"Saves";
			   this->Saves->RowCount = 1;
			   this->Saves->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			   this->Saves->Size = System::Drawing::Size(522, 439);
			   this->Saves->TabIndex = 14;
			   // 
			   // Export
			   // 
			   this->Export->Location = System::Drawing::Point(519, 460);
			   this->Export->Name = L"Export";
			   this->Export->Size = System::Drawing::Size(75, 23);
			   this->Export->TabIndex = 15;
			   this->Export->Text = L"Export";
			   this->Export->UseVisualStyleBackColor = true;
			   this->Export->Click += gcnew System::EventHandler(this, &MyForm::ExportFile);
			   // 
			   // Import
			   // 
			   this->Import->Location = System::Drawing::Point(959, 445);
			   this->Import->Name = L"Import";
			   this->Import->Size = System::Drawing::Size(75, 23);
			   this->Import->TabIndex = 16;
			   this->Import->Text = L"Import";
			   this->Import->UseVisualStyleBackColor = true;
			   this->Import->Click += gcnew System::EventHandler(this, &MyForm::ImportFile);
			   // 
			   // panel9
			   // 
			   this->panel9->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel9->Controls->Add(this->label15);
			   this->panel9->Controls->Add(this->ExportName);
			   this->panel9->Location = System::Drawing::Point(600, 448);
			   this->panel9->Name = L"panel9";
			   this->panel9->Size = System::Drawing::Size(166, 44);
			   this->panel9->TabIndex = 17;
			   // 
			   // label15
			   // 
			   this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->label15->BackColor = System::Drawing::Color::Gray;
			   this->label15->Location = System::Drawing::Point(0, 0);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(163, 15);
			   this->label15->TabIndex = 11;
			   this->label15->Text = L"File Name:";
			   // 
			   // ExportName
			   // 
			   this->ExportName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->ExportName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::RecentlyUsedList;
			   this->ExportName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->ExportName->Location = System::Drawing::Point(0, 18);
			   this->ExportName->Name = L"ExportName";
			   this->ExportName->Size = System::Drawing::Size(163, 20);
			   this->ExportName->TabIndex = 16;
			   // 
			   // panel10
			   // 
			   this->panel10->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->panel10->Controls->Add(this->FileCB);
			   this->panel10->Controls->Add(this->label16);
			   this->panel10->Location = System::Drawing::Point(790, 448);
			   this->panel10->Name = L"panel10";
			   this->panel10->Size = System::Drawing::Size(166, 44);
			   this->panel10->TabIndex = 18;
			   // 
			   // FileCB
			   // 
			   this->FileCB->FormattingEnabled = true;
			   this->FileCB->Location = System::Drawing::Point(0, 18);
			   this->FileCB->Name = L"FileCB";
			   this->FileCB->Size = System::Drawing::Size(163, 21);
			   this->FileCB->TabIndex = 12;
			   this->FileCB->DropDown += gcnew System::EventHandler(this, &MyForm::Selectingfile);
			   this->FileCB->SelectedValueChanged += gcnew System::EventHandler(this, &MyForm::FileSelectionChanged);
			   // 
			   // label16
			   // 
			   this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->label16->BackColor = System::Drawing::Color::Gray;
			   this->label16->Location = System::Drawing::Point(0, 0);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(163, 15);
			   this->label16->TabIndex = 11;
			   this->label16->Text = L"File Name:";
			   // 
			   // RemoveSavedFile
			   // 
			   this->RemoveSavedFile->Location = System::Drawing::Point(959, 469);
			   this->RemoveSavedFile->Name = L"RemoveSavedFile";
			   this->RemoveSavedFile->Size = System::Drawing::Size(75, 23);
			   this->RemoveSavedFile->TabIndex = 19;
			   this->RemoveSavedFile->Text = L"Remove";
			   this->RemoveSavedFile->UseVisualStyleBackColor = true;
			   this->RemoveSavedFile->Click += gcnew System::EventHandler(this, &MyForm::RemoveSelectedFile);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::Black;
			   this->ClientSize = System::Drawing::Size(1053, 757);
			   this->Controls->Add(this->RemoveSavedFile);
			   this->Controls->Add(this->panel10);
			   this->Controls->Add(this->panel9);
			   this->Controls->Add(this->Import);
			   this->Controls->Add(this->Export);
			   this->Controls->Add(this->Saves);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Controls->Add(this->LightZone);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"MyForm";
			   this->Text = L"Latency Meter";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->tableLayoutPanel1->PerformLayout();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->panel4->ResumeLayout(false);
			   this->panel4->PerformLayout();
			   this->panel5->ResumeLayout(false);
			   this->panel5->PerformLayout();
			   this->panel6->ResumeLayout(false);
			   this->panel6->PerformLayout();
			   this->panel7->ResumeLayout(false);
			   this->panel7->PerformLayout();
			   this->panel8->ResumeLayout(false);
			   this->panel8->PerformLayout();
			   this->Saves->ResumeLayout(false);
			   this->Saves->PerformLayout();
			   this->panel9->ResumeLayout(false);
			   this->panel9->PerformLayout();
			   this->panel10->ResumeLayout(false);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion


		   TCHAR getDirFolder(TCHAR szPath[MAX_PATH]) {
			   if (SUCCEEDED(SHGetFolderPath(NULL,
				   CSIDL_MYDOCUMENTS | CSIDL_FLAG_CREATE,
				   NULL,
				   0,
				   szPath)))
			   {
				   PathAppend(szPath, _T("SystemLatencyMeter"));
				   BOOL hFile = CreateDirectory(szPath, NULL);
			   }
			   return szPath[MAX_PATH];
		   }

		   fs::path findFileInDir(TCHAR Path[MAX_PATH], fs::path FileName){
			   for (const auto& entry : fs::directory_iterator(Path)) {
				   if (entry == FileName) {
					   return fs::path(entry);
				   }
				   else
					   fs::directory_iterator();
			   }
			   return 0;
		   }

		   System::Windows::Forms::Label^ initializeLabel(String^ Text) {
			   System::Windows::Forms::Label^ labolo = gcnew Label();
			   labolo->BackColor = Color::Gray;
			   labolo->Text = Text;
			   return labolo;
		   }

	public: System::Void Start(System::Object^ sender, System::EventArgs^ e) {
		
		if (comboBox1->SelectedIndex > -1) {
			if (serialPort1->IsOpen) {
				try
				{
				serialPort1->Open();
				}
				catch (exception& e)
				{
					MessageBox::Show("Port not accessible", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
			else
			try
			{
			serialPort1->Open();
			}
			catch (exception& ex)
			{
				throw;
				MessageBox::Show("Port not accessible", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		else MessageBox::Show("Select a port first", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	public: System::Void Received(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		String^ IncData = serialPort1->ReadLine();
		std::string StrData = msclr::interop::marshal_as< std::string >(IncData);

		if (StrData.find('b') != std::string::npos) {

			start = std::chrono::steady_clock::now();
			LightZone->BackColor = Color::White;
		}
		else if (StrData.find("z") != std::string::npos) {
			PingEnd = std::chrono::steady_clock::now();
			std::chrono::duration<double, std::milli> Pingfp_ms = PingEnd - PingStart;
			std::chrono::duration<double> Pingelapsed = PingEnd - PingStart;
			auto Pingint_ms = std::chrono::duration_cast<std::chrono::milliseconds>(PingEnd - PingStart);
			std::chrono::duration<long, std::micro> Pingint_usec = Pingint_ms;
			MouseLat->Text = gcnew String(Pingint_ms.count() + "ms");
			TestsMouse.push_back(Pingint_ms.count());
			AvgMouse->Text = (accumulate(TestsMouse.begin(), TestsMouse.end(), 0.0) / TestsMouse.size()).ToString("0.00" + "ms");
		}
		else if (std::stoi(StrData) > 15) {
			msclr::interop::marshal_context context;
			String^ DataText = gcnew String(IncData + "ms");
			SysLat->Text = DataText;
			std::string MouseLatVal = context.marshal_as<std::string>(MouseLat->Text);
			int Syslat = (stoi(StrData.substr(0, StrData.size() - 4)) + stoi(MouseLatVal));
			String^ ComLatText = gcnew String((Syslat.ToString()) + "ms");
			PcLat->Text = ComLatText;
			LightZone->BackColor = Color::Black;
			if (std::stoi(StrData) < 300) {
				TestsSys.push_back(std::stoi(StrData));
			}
			serialPort1->Write("a");
			PingStart = std::chrono::steady_clock::now();
			AvgSys->Text = (accumulate(TestsSys.begin(), TestsSys.end(), 0.0) / TestsSys.size()).ToString("0.00") + "ms";
			MinSys->Text = (*min_element(TestsSys.begin(), TestsSys.end())).ToString() + "ms";
		}
		else {
			LightZone->BackColor = Color::Black;
		}
	}
	private: System::Void RecError(System::Object^ sender, System::IO::Ports::SerialErrorReceivedEventArgs^ e) {
		SysLat->Text = "ERROR";
	}
	private: System::Void Stop(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Close();
	}
	public: System::Void AddPorts(System::Object^ sender, System::EventArgs^ e) {

		comboBox1->Items->Clear();

		for each (String ^ s in serialPort1->GetPortNames())
		{
			comboBox1->Items->Add(s);
		}

	}
	private: System::Void MadeSelection(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->PortName = serialPort1->GetPortNames()[comboBox1->SelectedIndex];
	}
	private: System::Void TestPing(System::Object^ sender, System::EventArgs^ e) {
		if (serialPort1->IsOpen) {
			serialPort1->Write("a");
			PingStart = std::chrono::steady_clock::now();
		}
	}
	private: System::Void ResetTests(System::Object^ sender, System::EventArgs^ e) {
		TestsSys.clear();
		TestsMouse.clear();
		AvgSys->Text = "0ms";
		MinSys->Text = "0ms";
		AvgMouse->Text = "0ms";
	}
	private: System::Void SaveRecords(System::Object^ sender, System::EventArgs^ e) {

		if (SaveName->TextLength > 0) {
			Saves->RowCount++;
			System::Windows::Forms::Label^ SysAvgSave = gcnew Label();
			SysAvgSave->Text = AvgSys->Text;
			System::Windows::Forms::Label^ MouseAvgSave = gcnew Label();
			MouseAvgSave->Text = AvgMouse->Text;
			System::Windows::Forms::Label^ SysMinSave = gcnew Label();
			SysMinSave->Text = MinSys->Text;
			System::Windows::Forms::Label^ NameSave = gcnew Label();
			NameSave->Text = SaveName->Text;
			SysAvgSave->BackColor = Color::Gray;
			//SysAvgSave->Anchor = (AnchorStyles::Top | AnchorStyles::Right | AnchorStyles::Left);
			MouseAvgSave->BackColor = Color::Gray;
			//MouseAvgSave->Anchor = (AnchorStyles::Top | AnchorStyles::Right | AnchorStyles::Left);
			SysMinSave->BackColor = Color::Gray;
			//SysMinSave->Anchor = (AnchorStyles::Top | AnchorStyles::Right | AnchorStyles::Left);
			NameSave->BackColor = Color::Gray;

			Saves->Controls->Add(NameSave);
			//Sleep(50);
			Saves->Controls->Add(SysAvgSave);
			//Sleep(50);
			Saves->Controls->Add(MouseAvgSave);
			//Sleep(50);
			Saves->Controls->Add(SysMinSave);
		}
		else {
			MessageBox::Show("Please input a save name", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	private: System::Void ExportFile(System::Object^ sender, System::EventArgs^ e) {
		std::ofstream outfile;
		TCHAR szPath[MAX_PATH];
		if (ExportName->TextLength > 0) {
			getDirFolder(szPath);
			msclr::interop::marshal_context context;
			LPCWSTR fileName = context.marshal_as<LPCWSTR>(ExportName->Text + ".SLM");
			PathAppend(szPath, fileName);
			std::ofstream outfile(szPath);
			string FileContent;
			int row = 1;
			int col = 0;
			for (row = 1; row <= Saves->RowCount - 1; row++) {
				for (col = 0; col <= Saves->ColumnCount - 1; col++) {
					outfile << (context.marshal_as<string>(Saves->GetControlFromPosition(col, row)->Text)) << std::endl;
				}
			}
			outfile.close();
		}
		else
			MessageBox::Show("Please input a File name", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}


	private: System::Void ImportFile(System::Object^ sender, System::EventArgs^ e) {
		if (FileCB->SelectedIndex > -1) {
			msclr::interop::marshal_context context;
			std::ifstream infile;
			TCHAR szPath[MAX_PATH];
			getDirFolder(szPath);
			TCHAR FilePath[MAX_PATH];
			getDirFolder(FilePath);
			String^ Selected = FileCB->SelectedItem->ToString();
			LPCWSTR fileName = context.marshal_as<LPCWSTR>(Selected + ".SLM");
			PathAppend(FilePath, fileName);
			fs::path filepath = findFileInDir(szPath, FilePath);
			if (filepath != "0") {
				infile.open(filepath);
				string line;
				int lineNum = 0;
				while (getline(infile, line))
				{
					lineNum++;
					int Column = Saves->ColumnCount + 1;
					if (lineNum % 4 == 0) {
						Saves->RowCount++;
					}
					System::Windows::Forms::Label^ newlab = initializeLabel(msclr::interop::marshal_as<String^>(line));
					Saves->Controls->Add(newlab);
				}
			}
		}

	}
	private: System::Void Selectingfile(System::Object^ sender, System::EventArgs^ e) {
		FileCB->Items->Clear();
		TCHAR szPath[MAX_PATH];
		getDirFolder(szPath);
		msclr::interop::marshal_context context;
		LPCWSTR fileName = context.marshal_as<LPCWSTR>(ExportName->Text + ".SLM");

		for (const auto& entry : fs::directory_iterator(szPath)) {
			std::string path_string{ fs::path(entry).filename().u8string() };
			String^ PathSysString = gcnew String((path_string.substr(0, path_string.size() - 4)).c_str());
			FileCB->Items->Add(PathSysString);
			fs::directory_iterator();
		}
	}
private: System::Void FileSelectionChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void RemoveSelectedFile(System::Object^ sender, System::EventArgs^ e) {
	if(FileCB->SelectedIndex > -1)
		if (MessageBox::Show("Are you sure you want to PERNAMENTLY delete this file?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes) {
			msclr::interop::marshal_context context;
			std::ifstream infile;
			TCHAR FilePath[MAX_PATH];
			getDirFolder(FilePath);
			String^ Selected = FileCB->SelectedItem->ToString();
			LPCWSTR fileName = context.marshal_as<LPCWSTR>(Selected + ".SLM");
			PathAppend(FilePath, fileName);
			if (remove(fs::path(FilePath)) != 0);
			FileCB->SelectedIndex = -1;
		}
}
};
}
#endif